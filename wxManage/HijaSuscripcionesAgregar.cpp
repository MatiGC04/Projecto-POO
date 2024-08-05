#include "HijaSuscripcionesAgregar.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <vector>
#include "Suscripcion.h"

HijaSuscripcionesAgregar::HijaSuscripcionesAgregar(manage *aux, wxWindow *parent) : BaseSuscripcionesAgregar(parent), m_manage(aux) {

	for(int i=0; i<m_manage->cantidadPlanes(); i++){
		m_planes->Append(std_to_wx(m_manage->obtenerPlan(i).ver_nombre_plan()));
	}
}


void HijaSuscripcionesAgregar::ClickDesplegablePlanes( wxCommandEvent& event )  {
	m_coachs->Clear();
	int pos_plan = m_planes->GetSelection();
	std::vector<couch> v_couchs = m_manage->CouchsInPlan(pos_plan);
	for(int i=0;i<v_couchs.size();i++){
		m_coachs->Append(std_to_wx(v_couchs[i].ver_nombre() + " " + v_couchs[i].ver_apellido() + " " + v_couchs[i].ver_DNI()));
	}
}
void HijaSuscripcionesAgregar::ClickDesplegableCoachs( wxCommandEvent& event )  {
	
}

void HijaSuscripcionesAgregar::ClickAceptar( wxCommandEvent& event )  {
	
	
	std::string dni_ch = wx_to_std(m_coachs->GetStringSelection());
	reverse(dni_ch.begin(),dni_ch.end());
	auto it = find(dni_ch.begin(), dni_ch.end(), ' ');
	dni_ch.erase(it, dni_ch.end());
	reverse(dni_ch.begin(), dni_ch.end());
	
	
	std::string dni_cl = wx_to_std(m_cliente_DNI->GetValue());
	std::string nom_plan = wx_to_std(m_planes->GetStringSelection());
	cliente cl = m_manage->buscarClientesDNI(dni_cl);
	cliente aux;
	if(aux==cl){
		wxMessageBox(c_to_wx("El DNI del cliente ingresado no corresponde a un cliente en la base de datos \nIngrese el DNI nuevamente o registre al nuevo cliente"));	
		return;
	}
	suscripcion sub_nueva(nom_plan, dni_ch, dni_cl);
	m_manage->agregarSuscripcion(sub_nueva);
	m_manage->guardar();
	EndModal(1);
}

void HijaSuscripcionesAgregar::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

