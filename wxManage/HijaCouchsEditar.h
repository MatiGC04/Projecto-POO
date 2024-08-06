#ifndef HIJACOUCHSEDITAR_H
#define HIJACOUCHSEDITAR_H

#include "wxfb_project.h"
#include "manage.h"

class HijaCouchsEditar : public BaseCouchsAgregar{
private:
	manage *m_manage;
	int pos;
protected:
	/// Evento para cancelar el registro de editar un couch
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	/// Evento para aceptar el registro de editar un couch
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
public:
	HijaCouchsEditar(manage *aux, int pos, wxWindow *parent=NULL);
};

#endif
