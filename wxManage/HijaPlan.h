#ifndef HIJAPLAN_H
#define HIJAPLAN_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlan : public BasePlan {
	
private:
	manage *m_manage;
protected:
	void ClickBotonPrecio( wxCommandEvent& event )  override;
	void CambioSeleccion( wxCommandEvent& event )  override;
	
public:
	HijaPlan(manage *aux, wxWindow *parent=NULL);
	void CargarFila(couch ch, int pos);
	void refrescar();
};

#endif

