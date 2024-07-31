#ifndef HIJACOUCHSEDITAR_H
#define HIJACOUCHSEDITAR_H

#include "wxfb_project.h"
#include "manage.h"

class HijaCouchsEditar : public BaseCouchsAgregar{
private:
	manage *m_manage;
	int pos;
protected:
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
public:
	HijaCouchsEditar(manage *aux, int pos, wxWindow *parent=NULL);
};

#endif
