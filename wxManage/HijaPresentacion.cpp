#include "HijaPresentacion.h"
#include "HijaClientes.h"

HijaPresentacion::HijaPresentacion(manage *aux, wxWindow *parent) : BasePresentacion(parent), m_manage(aux){
	
}

HijaPresentacion::~HijaPresentacion() {
	
}

void HijaPresentacion::ClickClientes( wxCommandEvent& event )  {
	HijaClientes nueva_ventana(m_manage,this);
	
	event.Skip();
}

void HijaPresentacion::ClickCouchs( wxCommandEvent& event )  {
	event.Skip();
}

void HijaPresentacion::ClickPlanes( wxCommandEvent& event )  {
	event.Skip();
}

void HijaPresentacion::ClickSuscripciones( wxCommandEvent& event )  {
	event.Skip();
}

