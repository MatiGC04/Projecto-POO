#ifndef HIJASUSCRIPCIONES_H
#define HIJASUSCRIPCIONES_H
#include "wxfb_project.h"

class HijaSuscripciones : public BaseSuscripciones {
	
private:
	
protected:
	void EnterBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	
public:
	HijaSuscripciones(wxWindow *parent=NULL);
	~HijaSuscripciones();
};

#endif

