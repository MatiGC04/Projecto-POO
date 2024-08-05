#ifndef HIJACOUCHSAGREGAR_H
#define HIJACOUCHSAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"
class HijaCouchsAgregar : public BaseCouchsAgregar {
	
private:
	manage *m_manage;
protected:
	/// Evento para cancelar el registro de un nuevo couch
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	/// Evento para aceptar el registro de un nuevo couch
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
public:
	HijaCouchsAgregar(manage *aux, wxWindow *parent=NULL);
	~HijaCouchsAgregar();
};

#endif

