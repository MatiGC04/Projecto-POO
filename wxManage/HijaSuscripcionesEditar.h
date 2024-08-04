#ifndef HIJASUSCRIPCIONESEDITAR_H
#define HIJASUSCRIPCIONESEDITAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripcionesEditar : public BaseSuscripcionesEditar {
	
private:
	manage *m_manage;
	int pos_sub;
protected:
	void ClickAceptar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	HijaSuscripcionesEditar(manage *aux1,int aux2, wxWindow *parent=NULL);
	~HijaSuscripcionesEditar();
};

#endif

