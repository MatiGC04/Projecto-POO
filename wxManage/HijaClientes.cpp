#include "HijaClientes.h"
#include "string_conv.h"
#include "HijaClientesAgregar.h"

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
	//m_grilla_clientes->SetCellValue(pos,3,std_to_wx(cl.ver_()));
	m_grilla_clientes->SetCellValue(pos,4,std_to_wx(cl.ver_tel_emergencia()));
}



HijaClientes::~HijaClientes() {
	
}

void HijaClientes::ClickSalirClientes( wxCommandEvent& event )  {
	this->Close();
}

void HijaClientes::ClickAgregar( wxCommandEvent& event )  {
	HijaClientesAgregar nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		
	}
	else{
		
	}
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



