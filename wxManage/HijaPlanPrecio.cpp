#include "HijaPlanPrecio.h"
#include "Plan.h"
#include "string_conv.h"

/** Implementacion del constructor.
* Guardo la posicion del desplegable para obtener el plan en el que quiero cargar
* su precio, luego muestro el valor del precio en el apartado para modificarlo
*/
HijaPlanPrecio::HijaPlanPrecio(manage *aux, int aux2, wxWindow *parent) : BasePlanPrecio(parent), m_manage(aux){
	pos=aux2;
	plan plan_=m_manage->obtenerPlan(pos);
	std::string str = std::to_string(plan_.ver_precio_plan());
	m_precio->SetValue(std_to_wx(str));
	
	
}
/// Implementacion del metodo que permite cancelar el registro 
void HijaPlanPrecio::ClickPrecioCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

/** Implementacion del metodo que permite hacer click en aceptar y guardar
* el nuevo precio en el plan y guardarlo
*/
void HijaPlanPrecio::ClickAceptarPrecio( wxCommandEvent& event )  {
	long precio_new;
	m_precio->GetValue().ToLong(&precio_new);
	m_manage->obtenerPlan(pos).modificar_precio(precio_new);
	m_manage->guardar();
	EndModal(1);
}

