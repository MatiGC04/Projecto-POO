#ifndef HIJAPRESENTACION_H
#define HIJAPRESENTACION_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPresentacion : public BasePresentacion {
	
private:
	manage *m_manage;
protected:
	void ClickClientes( wxCommandEvent& event )  override;
	void ClickCouchs( wxCommandEvent& event )  override;
	void ClickPlanes( wxCommandEvent& event )  override;
	void ClickSuscripciones( wxCommandEvent& event )  override;
	
public:
	HijaPresentacion(manage *aux,wxWindow *parent=NULL);
	~HijaPresentacion();
};

#endif

