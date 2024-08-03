#include "HijaPlanAgregar_Plan.h"
#include "Plan.h"
#include "string_conv.h"

HijaPlanAgregar_Plan::HijaPlanAgregar_Plan(manage *aux,wxWindow *parent) : BasePlanAgregar_Plan(parent), m_manage(aux) {
	
}

HijaPlanAgregar_Plan::~HijaPlanAgregar_Plan() {
	
}

void HijaPlanAgregar_Plan::Boton_aceptar_plan( wxCommandEvent& event )  {
	std::string nombre_plan = wx_to_std(m_nombre_plan->GetValue());
	long precio_plan; 
	m_precio_plan->GetValue().ToLong(&precio_plan);
	plan nuevo_plan(nombre_plan,precio_plan);
	m_manage->agregarPlan(nuevo_plan);
	m_manage->guardar();
	EndModal(1);
}

void HijaPlanAgregar_Plan::Boton_cancelar_plan( wxCommandEvent& event )  {
	this->Close();
}

