#include "HijaPresentacion.h"
#include "HijaClientes.h"

HijaPresentacion::HijaPresentacion(manage *aux, wxWindow *parent) : BasePresentacion(parent), m_manage(aux){
}

HijaPresentacion::~HijaPresentacion() {
	
}

void HijaPresentacion::ClickClientes( wxCommandEvent& event )  {
	HijaClientes *nueva_ventana=new HijaClientes(m_manage,this);
	nueva_ventana->Show();
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


