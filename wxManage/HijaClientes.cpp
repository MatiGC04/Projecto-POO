#include "HijaClientes.h"
#include "string_conv.h"

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
	m_grilla_clientes->SetCellValue(pos,0,std_to_wx(cl.ver_nombre() + cl.ver_apellido()));
	m_grilla_clientes->SetCellValue(pos,1,std_to_wx(cl.ver_email()));
	m_grilla_clientes->SetCellValue(pos,2, std_to_wx(cl.ver_DNI()));
	m_grilla_clientes->SetCellValue(pos,3,std_to_wx(cl.ver_sexo()));
	m_grilla_clientes->SetCellValue(pos,4,std_to_wx(cl.ver_loc()));
}
HijaClientes::~HijaClientes() {
	
}

