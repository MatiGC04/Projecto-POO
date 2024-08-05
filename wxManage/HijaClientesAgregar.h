#ifndef HIJACLIENTESAGREGAR_H
#define HIJACLIENTESAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientesAgregar : public BaseClientesAgregar {
	
private:
	manage *m_manage;
protected:
	/// Evento para cancelar el registro de un nuevo cliente
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	/// Evento para aceptar el registro de un nuevo cliente
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
public:
	HijaClientesAgregar(manage *aux, wxWindow *parent=NULL);
	~HijaClientesAgregar();
};


#endif

