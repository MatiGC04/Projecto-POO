#include "HijaSuscripciones.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "HijaSuscripcionesAgregar.h"
#include "HijaSuscripcionesEditar.h"


HijaSuscripciones::HijaSuscripciones(manage *aux, wxWindow *parent) : BaseSuscripciones(parent), m_manage(aux) {
	int cant_suscripciones = m_manage->cantidadSuscripciones();
	m_grilla->AppendRows(cant_suscripciones);
	for(int i=0; i<cant_suscripciones ; i++) CargarFila(i);
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}

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

void HijaSuscripciones::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

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

void HijaSuscripciones::ClickAgregar( wxCommandEvent& event )  {
	HijaSuscripcionesAgregar nueva_ventana(m_manage, this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla->AppendRows();
		CargarFila(m_manage->cantidadSuscripciones()-1);
	}
	
}

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

HijaSuscripciones::~HijaSuscripciones() {
	
}

void HijaSuscripciones::ClickEditar( wxCommandEvent& event )  {
	int pos_sub = m_grilla->GetGridCursorRow();
	HijaSuscripcionesEditar nueva_ventana(m_manage,pos_sub,this);
	if(nueva_ventana.ShowModal()==1){
		
	}
}



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

