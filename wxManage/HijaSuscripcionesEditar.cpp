#include "HijaSuscripcionesEditar.h"
#include <fstream>
#include "string_conv.h"
#include <wx/msgdlg.h>

HijaSuscripcionesEditar::HijaSuscripcionesEditar(manage *aux1, int aux2, wxWindow *parent) : BaseSuscripcionesEditar(parent), m_manage(aux1) {
	pos_sub = aux2;
	suscripcion sub = m_manage->obtenerSuscripcion( pos_sub);
	std::ifstream rutina("RutinasClientes/" + sub.ver_nombre_rutina());
	std::string linea="", texto="";
	while(getline(rutina, linea)){
		texto = texto + linea + "\n";
	}
	m_rutina->SetValue(std_to_wx(texto));
}


void HijaSuscripcionesEditar::ClickAceptar( wxCommandEvent& event )  {
	int resultado = wxMessageBox(std_to_wx("¿Esta seguro de sobrescribir la rutina del cliente?"), "VENTANA GUARDAR RUTINA", wxYES_NO);
	if(resultado==wxYES){
		std::string texto = wx_to_std(m_rutina->GetValue());
		suscripcion sub = m_manage->obtenerSuscripcion(pos_sub);
		std::ofstream archi("RutinasClientes/" + sub.ver_nombre_rutina());
		archi<<texto;
		EndModal(1);
	}
}

void HijaSuscripcionesEditar::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

HijaSuscripcionesEditar::~HijaSuscripcionesEditar() {
	
}

