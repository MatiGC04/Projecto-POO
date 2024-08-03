#ifndef HIJASUSCRIPCIONESEDITAR_H
#define HIJASUSCRIPCIONESEDITAR_H
#include "wxfb_project.h"

class HijaSuscripcionesEditar : public BaseSuscripcionesEditar {
	
private:
	
protected:
	void ClickAceptar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	HijaSuscripcionesEditar(wxWindow *parent=NULL);
	~HijaSuscripcionesEditar();
};

#endif

