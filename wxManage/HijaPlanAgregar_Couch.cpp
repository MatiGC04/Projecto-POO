#include "HijaPlanAgregar_Couch.h"
#include "string_conv.h"
#include <vector>

HijaPlanAgregar_Couch::HijaPlanAgregar_Couch(manage *aux, int pos_plan, wxWindow *parent) : BasePlanAgregar_Couch(parent), m_manage(aux) {
	std::vector<couch>v_couchs = m_manage->CouchsOutPlan(pos_plan);
	this->pos_plan=pos_plan;
	m_grilla->AppendRows(v_couchs.size());
	for(int i=0;i<v_couchs.size();++i){
		m_grilla->SetCellValue(i,0,std_to_wx(v_couchs[i].ver_apellido()+ ", " + v_couchs[i].ver_nombre()));
		m_grilla->SetCellValue(i,1,std_to_wx(v_couchs[i].ver_DNI()));
		m_grilla->SetCellValue(i,2,std_to_wx(m_manage->planesResponsables(v_couchs[i].ver_DNI())));
		m_grilla->SetCellValue(i,3,std_to_wx(v_couchs[i].ver_tel()));	}
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}
void HijaPlanAgregar_Couch::CargarFila(int pos){
	return;

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

