#ifndef HIJAPLANAGREGAR_PLAN_H
#define HIJAPLANAGREGAR_PLAN_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlanAgregar_Plan : public BasePlanAgregar_Plan {
	
private:
	manage *m_manage;
protected:
	/// Evento que permite hacer click en el boton Aceptar y guardar el nuevo plan
	void Boton_aceptar_plan( wxCommandEvent& event )  override;
	/// Evento que permite hacer click en el boton Cancelar 
	void Boton_cancelar_plan( wxCommandEvent& event )  override;
	
public:
	HijaPlanAgregar_Plan(manage *aux,wxWindow *parent=NULL);
	~HijaPlanAgregar_Plan();
};

#endif

