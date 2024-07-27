/**
* @file HijaCouchs.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase HijaCouchs
**/
#include "HijaCouchs.h"
#include "string_conv.h"
#include "HijaClientesAgregar.h"
#include <wx/wx.h>
#include <wx/msgdlg.h>


HijaCouchs::HijaCouchs(manage *aux,wxWindow *parent) : BaseCouchs(parent), m_manage(aux) {
	int cant_couchs = m_manage->cantidadCouch();
	m_grilla_couchs->AppendRows(cant_couchs);
	for(int i=0;i<cant_couchs;++i){
		CargarFila(i);
	}
	m_grilla_couchs->SetSelectionMode(wxGrid::wxGridSelectRows);
}
void HijaCouchs::CargarFila(int pos){
	couch ch = m_manage->obtenerCouch(pos);
	m_grilla_couchs->SetCellValue(pos,0,std_to_wx(ch.ver_apellido()+ ", " + ch.ver_nombre()));
	m_grilla_couchs->SetCellValue(pos,1,std_to_wx(ch.ver_DNI()));
	m_grilla_couchs->SetCellValue(pos,2,std_to_wx(ch.ver_email()));
	m_grilla_couchs->SetCellValue(pos,3,std_to_wx(ch.ver_cbu()));
	m_grilla_couchs->SetCellValue(pos,4,std_to_wx(ch.ver_alias()));
}
HijaCouchs::~HijaCouchs() {
	
}

