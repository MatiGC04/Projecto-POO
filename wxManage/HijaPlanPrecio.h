#ifndef HIJAPLANPRECIO_H
#define HIJAPLANPRECIO_H
#include "wxfb_project.h"
#include "Plan.h"
#include "manage.h"

class HijaPlanPrecio : public BasePlanPrecio {
	
private:
	manage *m_manage;
	int pos;
protected:
	void ClickPrecioCancelar( wxCommandEvent& event )  override;
	void ClickAceptarPrecio( wxCommandEvent& event )  override;
public:
	HijaPlanPrecio(manage *aux, int aux2, wxWindow *parent=NULL);
};

#endif

