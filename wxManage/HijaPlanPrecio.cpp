#include "HijaPlanPrecio.h"
#include "Plan.h"
#include "string_conv.h"

HijaPlanPrecio::HijaPlanPrecio(manage *aux, int aux2, wxWindow *parent) : BasePlanPrecio(parent), m_manage(aux){
	pos=aux2;
	plan plan_=m_manage->obtenerPlan(pos);
	std::string str = std::to_string(plan_.ver_precio_plan());
	
	m_precio->SetValue(std_to_wx(str));
	
	
}

void HijaPlanPrecio::ClickPrecioCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaPlanPrecio::ClickAceptarPrecio( wxCommandEvent& event )  {
	
	long precio_new;
	m_precio->GetValue().ToLong(&precio_new);
	plan plan_ = m_manage->obtenerPlan(pos);
	plan_.modificar_precio(precio_new);
	//m_manage->obtenerPlan(pos)= plan_
	m_manage->guardar();
	EndModal(1);
}

