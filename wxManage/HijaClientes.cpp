#include "HijaClientes.h"
#include "string_conv.h"
#include "HijaClientesAgregar.h"
#include "HijaClientesEditar.h"

#include <wx/wx.h>
#include <wx/msgdlg.h>


HijaClientes::HijaClientes(manage *aux,wxWindow *parent) : BaseClientes(parent), m_manage(aux) {
	int cant_clientes=m_manage->cantidadCliente();
	m_grilla_clientes->AppendRows(cant_clientes);
	for(int i=0;i<cant_clientes;++i){
		CargarFila(i);
	}
	m_grilla_clientes->SetSelectionMode(wxGrid::wxGridSelectRows);
	
}
void HijaClientes::CargarFila(int pos){
	cliente cl = m_manage->ObtenerCliente(pos);
	m_grilla_clientes->SetCellValue(pos,0,std_to_wx(cl.ver_apellido()+ ", " + cl.ver_nombre()));
	m_grilla_clientes->SetCellValue(pos,1,std_to_wx(cl.ver_DNI()));
	m_grilla_clientes->SetCellValue(pos,2,std_to_wx(cl.ver_email()));
	m_grilla_clientes->SetCellValue(pos,3,std_to_wx(m_manage->planesSuscritos(cl.ver_DNI())));
	m_grilla_clientes->SetCellValue(pos,4,std_to_wx(cl.ver_tel_emergencia()));
}


void HijaClientes::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla_clientes->GetGridCursorRow();
	int res = wxMessageBox(c_to_wx("�Eliminar el registro?"), m_grilla_clientes->GetCellValue(fila_actual,0),wxYES_NO);
	if(res==wxYES){
		m_grilla_clientes->DeleteRows(fila_actual,1);
		m_manage->borrarCliente(fila_actual);
		m_manage->guardar();
	}
}
void HijaClientes::ClickAgregar( wxCommandEvent& event )  {
	HijaClientesAgregar nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla_clientes->AppendRows(1); 
		int pos_nuevo = m_manage->cantidadCliente()-1;
		CargarFila(pos_nuevo);
		m_grilla_clientes->SetGridCursor(pos_nuevo,0); 
		m_grilla_clientes->SelectRow(pos_nuevo);
	}
	else{
		//nada
	}

}

void HijaClientes::ClickSalirClientes( wxCommandEvent& event )  {
	this->Close();
}


///Todavia no se que hace, codigo adaptado del de novara
void HijaClientes::ClickTamanio( wxSizeEvent& event )  {
	// si cambia el tamanio de la ventana, estira los anchos de las columnas 
	// para ajustarse al nuevo tama�o de forma proporcional
	Layout(); // primero que ajuste lo de la ventana, asi tengo el nuevo tama�o de la m_grilla
	int tamanios[5], ancho_total_viejo=0; // despues, guardar tamanios viejos
	for (int i=0;i<5;i++) { 
		tamanios[i] = m_grilla_clientes->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=m_grilla_clientes->GetSize().GetWidth(); // ver el ancho nuevo de la tabla
	m_grilla_clientes->BeginBatch(); // beginbatch y endbatch son para que cuando cambiamos varias cosas no redibuje varias veces, sino una sola al final
	for (int i=0;i<5;i++) // asignar nuevos tamaos nuevos a columnas
		m_grilla_clientes->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	m_grilla_clientes->EndBatch();
}

HijaClientes::~HijaClientes() {
	
}

void HijaClientes::ClickEditar( wxCommandEvent& event )  {
	int pos= m_grilla_clientes->GetGridCursorRow();
	HijaClientesEditar nueva_ventana(m_manage,pos,this);
	if(nueva_ventana.ShowModal()==1){
		CargarFila(pos);
	}
}


void HijaClientes::ClickBuscar( wxCommandEvent& event )  {
	int pos=m_grilla_clientes->GetGridCursorRow();
	if (m_grilla_clientes->GetSelectedRows().GetCount()==0) pos=-1;
	if(m_grilla_clientes->GetSelectedRows().GetCount()>1){
		wxMessageBox("Usted a seleccionado demasiadas filas, seleccione 1 o menos porfavor.\nTenga en cuenta que se empezara a buscar apartir de esa fila en adelante, en caso de tener seleccionada la ultima fila se comenzara desde el inicio de la grilla.");	
		return;
	}
	std::string nom = wx_to_std(m_buscar->GetValue());
	int encontrado = m_manage->buscarClientesNombre(nom,pos+1);
	if(encontrado==-1) encontrado = m_manage->buscarClientesNombre(nom,0);
	if(encontrado==-1) wxMessageBox("No se encontraron coincidencias");
	else{
		m_grilla_clientes->SetGridCursor(encontrado,1);
		m_grilla_clientes->SelectRow(encontrado);
	}
}

void HijaClientes::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

void HijaClientes::DobleClickFila( wxGridEvent& event )  {
	ClickEditar(event);
}

void HijaClientes::ClickFila( wxGridEvent& event )  {
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

