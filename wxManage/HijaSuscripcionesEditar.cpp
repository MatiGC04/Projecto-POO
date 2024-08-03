#include "HijaSuscripcionesEditar.h"

HijaSuscripcionesEditar::HijaSuscripcionesEditar(wxWindow *parent) : BaseSuscripcionesEditar(parent) {
	
}

void HijaSuscripcionesEditar::ClickAceptar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripcionesEditar::ClickCancelar( wxCommandEvent& event )  {
	event.Skip();
}

HijaSuscripcionesEditar::~HijaSuscripcionesEditar() {
	
}

