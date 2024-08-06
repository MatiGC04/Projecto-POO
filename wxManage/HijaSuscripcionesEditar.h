#ifndef HIJASUSCRIPCIONESEDITAR_H
#define HIJASUSCRIPCIONESEDITAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripcionesEditar : public BaseSuscripcionesEditar {
	
private:
	manage *m_manage;
	/// Atributo para almacenar la posicion de la suscripcion en el vector de manage
	int pos_sub;
protected:
	/// Evento para el click en el boton aceptar
	void ClickAceptar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton cancelar
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	HijaSuscripcionesEditar(manage *aux1,int aux2, wxWindow *parent=NULL);
};

#endif

