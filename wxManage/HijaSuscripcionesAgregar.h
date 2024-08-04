#ifndef HIJASUSCRIPCIONESAGREGAR_H
#define HIJASUSCRIPCIONESAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripcionesAgregar : public BaseSuscripcionesAgregar {
	
private:
	manage *m_manage;
protected:
	void ClickCancelar( wxCommandEvent& event )  override;
	void ClickAceptar( wxCommandEvent& event )  override;
	void ClickDesplegableCoachs( wxCommandEvent& event )  override;
	void ClickDesplegablePlanes( wxCommandEvent& event )  override;
	
public:
	HijaSuscripcionesAgregar(manage *aux ,wxWindow *parent=NULL);
	~HijaSuscripcionesAgregar();
};

#endif

