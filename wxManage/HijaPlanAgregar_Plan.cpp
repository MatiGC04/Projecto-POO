#include "HijaPlanAgregar_Plan.h"
#include "Plan.h"
#include "string_conv.h"

HijaPlanAgregar_Plan::HijaPlanAgregar_Plan(manage *aux,wxWindow *parent) : BasePlanAgregar_Plan(parent), m_manage(aux) {
	
}

HijaPlanAgregar_Plan::~HijaPlanAgregar_Plan() {
	
}

/**
* Implementacion del evento de click en el boton aceptar.
* Al ingresar los nombre y precio del plan, guardo los datos ingresados por 
* el usuario y creo un plan "auxiliar" y le paso los datos para luego agregarlos
* al vector de planes, y finalizo con el metodo guardar que permite actualizar
* el binario.
**/
void HijaPlanAgregar_Plan::Boton_aceptar_plan( wxCommandEvent& event )  {
	std::string nombre_plan = wx_to_std(m_nombre_plan->GetValue());
	long precio_plan; 
	m_precio_plan->GetValue().ToLong(&precio_plan);
	plan nuevo_plan(nombre_plan,precio_plan);
	m_manage->agregarPlan(nuevo_plan);
	m_manage->guardar();
	EndModal(1);
}

/** Implementacion del evento de click en el boton cancelar.
* Cierra la ventana sin hacer modificaciones.
*/
void HijaPlanAgregar_Plan::Boton_cancelar_plan( wxCommandEvent& event )  {
	this->Close();
}

