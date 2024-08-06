#ifndef HIJAPLANPRECIO_H
#define HIJAPLANPRECIO_H
#include "wxfb_project.h"
#include "Plan.h"
#include "manage.h"

class HijaPlanPrecio : public BasePlanPrecio {
	
private:
	manage *m_manage;
	int pos;
protected:
	/// Evento que permite hacer click en el boton de cancelar y cerrar la ventana
	void ClickPrecioCancelar( wxCommandEvent& event )  override;
	/// Evento que permite darle click en el boton de aceptar y guardar el precio
	void ClickAceptarPrecio( wxCommandEvent& event )  override;
public:
	HijaPlanPrecio(manage *aux, int aux2, wxWindow *parent=NULL);
};

#endif

