#include "HijaClientes.h"
#include "string_conv.h"
#include "HijaClientesAgregar.h"
#include "HijaClientesEditar.h"

#include <wx/wx.h>
#include <wx/msgdlg.h>

/**
* Inicializa la ventana llenando la m_grilla y definiendo
* las propiedades adicionales de la tabla.
**/
HijaClientes::HijaClientes(manage *aux,wxWindow *parent) : BaseClientes(parent), m_manage(aux) {
	int cant_clientes=m_manage->cantidadCliente();
	m_grilla_clientes->AppendRows(cant_clientes);
	for(int i=0;i<cant_clientes;++i){
		CargarFila(i);
	}
	m_grilla_clientes->SetSelectionMode(wxGrid::wxGridSelectRows);
	
}

/**
* Toma los datos de una persona desde la instancia de Agenda y los carga en su
* correspondiente fila de la m_grilla.
* La m_grilla ya debe tener lugar, es decir, debe existir el renglon 
* (estara vacio o tendra basura).
* @param pos es el indice de el cliente en el arreglo de la clase Manage (en base 0)
**/
void HijaClientes::CargarFila(int pos){
	cliente cl = m_manage->ObtenerCliente(pos);
	m_grilla_clientes->SetCellValue(pos,0,std_to_wx(cl.ver_apellido()+ ", " + cl.ver_nombre()));
	m_grilla_clientes->SetCellValue(pos,1,std_to_wx(cl.ver_DNI()));
	m_grilla_clientes->SetCellValue(pos,2,std_to_wx(cl.ver_email()));
	m_grilla_clientes->SetCellValue(pos,3,std_to_wx(m_manage->planesSuscritos(cl.ver_DNI())));
	m_grilla_clientes->SetCellValue(pos,4,std_to_wx(cl.ver_tel_emergencia()));
}

/**
* Deja de mostrar la ventana de clientes.
**/
void HijaClientes::ClickSalirClientes( wxCommandEvent& event )  {
	this->Close();
}

/**
* Apartir de en que fila esta cursor elimina el registro del cliente que esta en 
* esa fila (y la fila tambien), lo elimina tanto de la grilla, como del vector 
* en manage y el archivo binario.
**/
void HijaClientes::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla_clientes->GetGridCursorRow();
	int res = wxMessageBox(c_to_wx("¿Eliminar el registro?"), m_grilla_clientes->GetCellValue(fila_actual,0),wxYES_NO);
	if(res==wxYES){
		m_grilla_clientes->DeleteRows(fila_actual,1);
		m_manage->borrarCliente(fila_actual);
		m_manage->guardar();
	}
}

/**
* Al hacer click en "Agregar", se abre de forma modal la ventana para ingresar
* los datos. En forma modal significa que esta ventana espera a que termine la
* otra. Cuando termina, el codigo de retorno me indica si la otra ventana agrego
* o no (el usuario puede hacer click en Agregar o en Cancelar) a un nuevo
* cliente. En caso afirmativo, esta ventana debe actualizar la m_grilla_clientes.
**/
void HijaClientes::ClickAgregar( wxCommandEvent& event )  {
	HijaClientesAgregar nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla_clientes->AppendRows(1); 
		int pos_nuevo = m_manage->cantidadCliente()-1;
		CargarFila(pos_nuevo);
		m_grilla_clientes->SetGridCursor(pos_nuevo,0); 
		m_grilla_clientes->SelectRow(pos_nuevo);
	}

}


/**
* Al hacer click en "Editar", se abre de forma modal la ventana para ver y/o
* modificar los datos. En forma modal significa que esta ventana espera a que 
* termine la otra. Cuando termina, el codigo de retorno me indica si la otra 
* ventana modifico o no los datos (el usuario puede hacer click en Agregar o
* en Cancelar) En caso afirmativo, esta ventana debe actualizar la m_grilla_clientes.
**/
void HijaClientes::ClickEditar( wxCommandEvent& event )  {
	int pos= m_grilla_clientes->GetGridCursorRow();
	HijaClientesEditar nueva_ventana(m_manage,pos,this);
	if(nueva_ventana.ShowModal()==1){
		CargarFila(pos);
	}
}

/**
* Cuando se hace click en buscar, se busca desde el cliente que esta seleccionado
* en la tabla, en adelante, algun nombre y apellido que contenga lo que indica
* el cuadro de busqueda (puede contenerlo en cualquier parte, y la busqueda no
* distingue mayusculas y minusculas).
* Si hay mas de uno que coinciden, cada click en buscar nos lleva al siguiente.
**/
void HijaClientes::ClickBuscar( wxCommandEvent& event )  {
	int fila_pos = m_grilla_clientes->GetGridCursorRow();
	if (m_grilla_clientes->GetSelectedRows().GetCount()==0) fila_pos = -1;
	if(m_grilla_clientes->GetSelectedRows().GetCount()>1){
		wxMessageBox("Usted a seleccionado demasiadas filas, seleccione 1 o menos porfavor.\nTenga en cuenta que se empezara a buscar apartir de esa fila en adelante, en caso de tener seleccionada la ultima fila se comenzara desde el inicio de la grilla.");	
		return;
	}
	std::string nomape = wx_to_std(m_buscar->GetValue());
	int encontrado = m_manage->buscarClientesNombre( nomape, fila_pos+1 );
	if(encontrado==-1) encontrado = m_manage->buscarClientesNombre(nomape,0);
	if(encontrado==-1) wxMessageBox("No se encontraron coincidencias");
	else{
		m_grilla_clientes->SetGridCursor(encontrado,1);
		m_grilla_clientes->SelectRow(encontrado);
	}
}

/**
* El enter en el cuadro de texto equivale al click en el boton "Buscar".
**/
void HijaClientes::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

/**
* El doble click en la m_grilla equivale al click en el boton "Editar".
**/
void HijaClientes::DobleClickFila( wxGridEvent& event )  {
	ClickEditar(event);
}

/**
* Si se hace click en la cabecera de alguna columna, la tabla se ordena segun
* ese dato. Para esto, se le pide a la base de datos que ordene, y luego 
* se recargan los datos de todas las filas.
**/
void HijaClientes::ClickColumna( wxGridEvent& event )  {
	int col = event.GetCol();
	switch(col){
	case 0: m_manage->OrdenarClientes(ORDEN_APELLIDO_Y_NOMBRE); break;
	case 1: m_manage->OrdenarClientes(ORDEN_DNI); break;
	case 2: m_manage->OrdenarClientes(ORDEN_EMAIL); break;
	case 3: m_manage->OrdenarClientes(ORDEN_PLANES_SUSCRITOS); break;
	case 4: m_manage->OrdenarClientes(ORDEN_TELEFONO_EMERGENCIAS); break;
	}
	for(int i=0; i<m_manage->cantidadCliente();i++) CargarFila(i);
}

///Todavia no se que hace, codigo adaptado del de novara
void HijaClientes::ClickTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[5], ancho_total_viejo=0; 
	for (int i=0;i<5;i++) { 
		tamanios[i] = m_grilla_clientes->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=m_grilla_clientes->GetSize().GetWidth(); 
	m_grilla_clientes->BeginBatch(); 
	for (int i=0;i<5;i++) 
		m_grilla_clientes->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	m_grilla_clientes->EndBatch();
}


