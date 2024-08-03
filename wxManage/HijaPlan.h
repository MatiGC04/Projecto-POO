#ifndef HIJAPLAN_H
#define HIJAPLAN_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlan : public BasePlan {
	
private:
	manage *m_manage;
protected:
	void ClickBuscar( wxCommandEvent& event )  override;
	void EnterBuscar( wxCommandEvent& event )  override;
	void ClickBorrarPlan( wxCommandEvent& event )  override;
	void ClickCrearPlan( wxCommandEvent& event )  override;
	void ClickGuardarRutina( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	void AgregarCouchToPlan( wxCommandEvent& event )  override;
	void ClickBotonPrecio( wxCommandEvent& event )  override;
	void CambioSeleccion( wxCommandEvent& event )  override;
	
public:
	HijaPlan(manage *aux, wxWindow *parent=NULL);
	void CargarFila(couch ch, int pos);
	void refrescar();
};

#endif

