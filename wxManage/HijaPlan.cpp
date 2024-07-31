#include "HijaPlan.h"
#include "string_conv.h"
#include <string>

HijaPlan::HijaPlan(manage *aux, wxWindow *parent) : BasePlan(parent), m_manage(aux) {
	for(int i=0; i<m_manage->cantidadPlanes(); ++i){
		std::string aux = (m_manage->obtenerPlan(i)).ver_nombre_plan();
		m_choice21->Append(std_to_wx(aux));
	}
	m_choice21->SetSelection(0);
	int pos_plan = m_choice21->GetSelection();
	
	
}

HijaPlan::~HijaPlan() {
	
}

