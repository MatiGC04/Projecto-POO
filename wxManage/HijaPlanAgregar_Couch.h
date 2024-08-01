#ifndef HIJAPLANAGREGAR_COUCH_H
#define HIJAPLANAGREGAR_COUCH_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlanAgregar_Couch : public BasePlanAgregar_Couch {
	
private:
	manage *m_manage;
	int pos_plan;
	
protected:
	void EnterBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void DobleClickFila( wxGridEvent& event )  override;
	void ClickColumna( wxGridEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	
public:
	HijaPlanAgregar_Couch(manage *aux, int pos_plan, wxWindow *parent=NULL);
	void CargarFila(int pos);
	~HijaPlanAgregar_Couch();
};

#endif

