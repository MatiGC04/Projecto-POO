#ifndef HIJAPRESENTACION_H
#define HIJAPRESENTACION_H
#include "wxfb_project.h"
#include "manage.h"
/**
* @brief Ventana presentancion de la aplicacion
*
* Esta clase representa a la primer ventana. Incluye 4 botones para acceder a
* las ventanas de los diferentes registros
*
*
**/
class HijaPresentacion : public BasePresentacion {
	
private:
	manage *m_manage;
protected:
	/// Evento para el click en boton de clientes
	void ClickClientes( wxCommandEvent& event )  override;
	/// Evento para el click en boton de coachs
	void ClickCouchs( wxCommandEvent& event )  override;
	/// Evento para el click en boton de planes
	void ClickPlanes( wxCommandEvent& event )  override;
	/// Evento para el click en boton de suscripciones
	void ClickSuscripciones( wxCommandEvent& event )  override;
	
public:
	HijaPresentacion(manage *aux,wxWindow *parent=NULL);
};

#endif

