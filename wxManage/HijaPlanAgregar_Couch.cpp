#include "HijaPlanAgregar_Couch.h"
#include "string_conv.h"
#include <vector>

HijaPlanAgregar_Couch::HijaPlanAgregar_Couch(manage *aux, int pos_plan, wxWindow *parent) : BasePlanAgregar_Couch(parent), m_manage(aux) {
	this->v_couchs = m_manage->CouchsOutPlan(pos_plan);
	this->pos_plan = pos_plan;
	m_grilla->AppendRows(v_couchs.size());
	for(int i=0;i<v_couchs.size();++i){
		CargarFila(i);
	}
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}
void HijaPlanAgregar_Couch::CargarFila(int pos){
	m_grilla->SetCellValue(pos,0,std_to_wx(v_couchs[pos].ver_apellido()+ ", " + v_couchs[pos].ver_nombre()));
	m_grilla->SetCellValue(pos,1,std_to_wx(v_couchs[pos].ver_DNI()));
	m_grilla->SetCellValue(pos,2,std_to_wx(m_manage->planesResponsables(v_couchs[pos].ver_DNI())));
	m_grilla->SetCellValue(pos,3,std_to_wx(v_couchs[pos].ver_tel()));

}

void HijaPlanAgregar_Couch::EnterBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaPlanAgregar_Couch::ClickBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaPlanAgregar_Couch::DobleClickFila( wxGridEvent& event )  {
	event.Skip();
}

void HijaPlanAgregar_Couch::ClickColumna( wxGridEvent& event )  {
	event.Skip();
}

void HijaPlanAgregar_Couch::ClickAgregar( wxCommandEvent& event )  {
	event.Skip();
}

HijaPlanAgregar_Couch::~HijaPlanAgregar_Couch() {
	
}

