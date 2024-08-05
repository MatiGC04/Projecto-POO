#ifndef HIJASUSCRIPCIONESAGREGAR_H
#define HIJASUSCRIPCIONESAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripcionesAgregar : public BaseSuscripcionesAgregar {
	
private:
	manage *m_manage;
protected:
	
	/// Evento para el click en el boton de cancelar
	void ClickCancelar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton de aceptar
	void ClickAceptar( wxCommandEvent& event )  override;
	/// Evento para el click en alguno de los items del desplegable de coachs
	void ClickDesplegableCoachs( wxCommandEvent& event )  override;
	/// Evento para el click en alguno de los items del desplegable de planes
	void ClickDesplegablePlanes( wxCommandEvent& event )  override;
	
public:
	HijaSuscripcionesAgregar(manage *aux ,wxWindow *parent=NULL);
};

#endif

