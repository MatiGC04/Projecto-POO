#include "HijaSuscripcionesAgregar.h"

HijaSuscripcionesAgregar::HijaSuscripcionesAgregar(manage *aux, wxWindow *parent) : BaseSuscripcionesAgregar(parent), m_manage(aux) {
	
}

HijaSuscripcionesAgregar::~HijaSuscripcionesAgregar() {
	
}

void HijaSuscripcionesAgregar::ClickDesplegablePlanes( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripcionesAgregar::ClickDesplegableCoachs( wxCommandEvent& event )  {
	event.Skip();
}

