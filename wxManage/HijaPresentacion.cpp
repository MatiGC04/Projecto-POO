#include "HijaPresentacion.h"
#include "HijaClientes.h"
#include "HijaCouchs.h"

HijaPresentacion::HijaPresentacion(manage *aux, wxWindow *parent) : BasePresentacion(parent), m_manage(aux){
}

HijaPresentacion::~HijaPresentacion() {
	
}

/// @brief Al hacer click muestro la ventana de couch, le paso el puntero manage
void HijaPresentacion::ClickClientes( wxCommandEvent& event )  {
	HijaClientes *nueva_ventana=new HijaClientes(m_manage,this);
	nueva_ventana->Show();
}

/// @brief Al hacer click muestro la ventana de Couchs
void HijaPresentacion::ClickCouchs( wxCommandEvent& event )  {
	HijaCouchs *nueva_ventana = new HijaCouchs(m_manage,this);
	nueva_ventana->Show();
}

/// @brief Al hacer click muestro la ventana de Planes
void HijaPresentacion::ClickPlanes( wxCommandEvent& event )  {
	event.Skip();
}

/// @brief Al hacer click muestro la ventana de Suscripciones
void HijaPresentacion::ClickSuscripciones( wxCommandEvent& event )  {
	event.Skip();
}


