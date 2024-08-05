#include "HijaSuscripciones.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "HijaSuscripcionesAgregar.h"
#include "HijaSuscripcionesEditar.h"

/**
* Implementacion del constructor de la ventana suscripciones.
* Inicializa la grilla con datos.
**/
HijaSuscripciones::HijaSuscripciones(manage *aux, wxWindow *parent) : BaseSuscripciones(parent), m_manage(aux) {
	wxIcon icon("icono.ico", wxBITMAP_TYPE_ICO);
	SetIcon(icon);
	
	int cant_suscripciones = m_manage->cantidadSuscripciones();
	m_grilla->AppendRows(cant_suscripciones);
	for(int i=0; i<cant_suscripciones ; i++) CargarFila(i);
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}



/// Implementacion del metodo para cargar una fila apartir de la posicion enviada.
void HijaSuscripciones::CargarFila(int pos_fila){
	suscripcion sub = m_manage->obtenerSuscripcion(pos_fila);
	cliente cl = m_manage->buscarClientesDNI(sub.ver_DNI_cliente());
	couch ch = m_manage->buscarCouchsDNI(sub.ver_DNI_couch());
	std::string nom_plan = sub.ver_nombre_plan();
	fecha fech_pago = sub.ver_fecha_pago();
	fecha fech_venc = FechaVencimiento(fech_pago);
	
	m_grilla->SetCellValue(pos_fila, 0, std_to_wx(cl.ver_apellido() + ", " + cl.ver_nombre()));
	m_grilla->SetCellValue(pos_fila, 1, std_to_wx(cl.ver_DNI()));
	m_grilla->SetCellValue(pos_fila, 2, std_to_wx(ch.ver_apellido() + ", " + ch.ver_nombre()));
	m_grilla->SetCellValue(pos_fila, 3, std_to_wx(ch.ver_DNI()));
	m_grilla->SetCellValue(pos_fila, 4, std_to_wx(nom_plan));
	m_grilla->SetCellValue(pos_fila, 5, std_to_wx(FechaTexto(fech_pago)));
	m_grilla->SetCellValue(pos_fila, 6, std_to_wx(FechaTexto(fech_venc)));
}


/**
* Implementacion del evento enter en la barra de busqueda.
* Realiza el mismo procedimiento que el click en el boton de buscar.
**/
void HijaSuscripciones::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}


/**
* Implementacion del evento de click en el boton buscar
* Busca el nombre del cliente ingresado en la barra de texto en la grilla
* apartir de donde esta el cursor en adelante.
**/
void HijaSuscripciones::ClickBuscar( wxCommandEvent& event )  {
	
	int fila_pos = m_grilla->GetGridCursorRow();
	if (m_grilla->GetSelectedRows().GetCount()==0) fila_pos = -1;
	if(m_grilla->GetSelectedRows().GetCount()>1){
		wxMessageBox("Usted a seleccionado demasiadas filas, seleccione 1 o menos porfavor.\nTenga en cuenta que se empezara a buscar apartir de esa fila en adelante, en caso de tener seleccionada la ultima fila se comenzara desde el inicio de la grilla.");	
		return;
	}
	std::string nomape = wx_to_std(m_buscar->GetValue());
	int encontrado = m_manage->buscarClientesEnSub( nomape, fila_pos+1 );
	if(encontrado==-1) encontrado = m_manage->buscarClientesEnSub(nomape,0);
	if(encontrado==-1) wxMessageBox("No se encontraron coincidencias");
	else{
		m_grilla->SetGridCursor(encontrado,1);
		m_grilla->SelectRow(encontrado);
	}
	
}
/**
* Implementacion del evento de click en el boton agregar.
* Muestra la ventana para agregar una suscripcion con el metodo ShowModal().
**/
void HijaSuscripciones::ClickAgregar( wxCommandEvent& event )  {
	HijaSuscripcionesAgregar nueva_ventana(m_manage, this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla->AppendRows();
		CargarFila(m_manage->cantidadSuscripciones()-1);
	}
	
}

/**
* Implementacion del evento de click en el boton eliminar
* Segun donde este posicionado el cursor de la grilla borra el registro tanto
* de la grilla como de la base de datos.
**/
void HijaSuscripciones::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla->GetGridCursorRow();
	std::string nomape = wx_to_std(m_grilla->GetCellValue(fila_actual, 0));
	std::string fech_pago = wx_to_std(m_grilla->GetCellValue(fila_actual, 4));
	std::string mensaje = "¿Eliminar la suscripcion de " + nomape + " pagada en " + fech_pago + " ?";
	
	int res = wxMessageBox(std_to_wx(mensaje), m_grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if(res==wxYES){
		m_grilla->DeleteRows(fila_actual,1);
		m_manage->borrarSuscripcion(fila_actual);
		m_manage->guardar();
	}
	
	
}


/**
* Implementacion del evento de click en el boton editar.
* Muesta la ventana donde se edita la rutina de la suscripcion del cliente.
**/
void HijaSuscripciones::ClickEditar( wxCommandEvent& event )  {
	int pos_sub = m_grilla->GetGridCursorRow();
	HijaSuscripcionesEditar nueva_ventana(m_manage,pos_sub,this);
	if(nueva_ventana.ShowModal()==1){
		
	}
}


/// Evento que ajusta la grilla segun el tamanio de la ventana y la proporcion que mantenia la grilla
void HijaSuscripciones::CambiarTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[7], ancho_total_viejo=0; 
	for (int i=0;i<7;i++) { 
		tamanios[i] = m_grilla->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo = m_grilla->GetSize().GetWidth(); 
	m_grilla->BeginBatch(); 
	for (int i=0;i<7;i++) 
		m_grilla->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	m_grilla->EndBatch();
}


/**
* Si se hace click en la cabecera de alguna columna, la tabla se ordena segun
* ese dato. Para esto, se le pide a la base de datos que ordene, y luego 
* se recargan los datos de todas las filas.
**/
void HijaSuscripciones::ClickColumna( wxGridEvent& event )  {
	int col = event.GetCol();
	switch(col){
	case 0: m_manage->OrdenarSuscripciones(O_APENOM_CL); break;
	case 1:	m_manage->OrdenarSuscripciones(O_DNI_CL); break;
	case 2:	m_manage->OrdenarSuscripciones(O_APENOM_CH); break;
	case 3:	m_manage->OrdenarSuscripciones(O_DNI_CH); break;
	case 4:	m_manage->OrdenarSuscripciones(O_PLAN); break;
	case 5:	m_manage->OrdenarSuscripciones(O_FECH_PAGO); break;
	case 6:	m_manage->OrdenarSuscripciones(O_FECH_VENC); break;
	}
	for(int i=0; i<m_manage->cantidadSuscripciones();i++) CargarFila(i);
}

