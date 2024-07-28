#ifndef HIJACLIENTESEDITAR_H
#define HIJACLIENTESEDITAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientesEditar : public BaseClientesAgregar{
private:
	manage *m_manage;
	int pos;
protected:
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
public:
	HijaClientesEditar(manage *aux, int pos, wxWindow *parent=NULL);
};


#endif
