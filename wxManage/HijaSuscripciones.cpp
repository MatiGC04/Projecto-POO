#include "HijaSuscripciones.h"

HijaSuscripciones::HijaSuscripciones(wxWindow *parent) : BaseSuscripciones(parent) {
	
}

void HijaSuscripciones::EnterBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripciones::ClickBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripciones::ClickAgregar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripciones::ClickEliminar( wxCommandEvent& event )  {
	event.Skip();
}

HijaSuscripciones::~HijaSuscripciones() {
	
}

