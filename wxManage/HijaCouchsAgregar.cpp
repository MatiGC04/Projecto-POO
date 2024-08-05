#include "HijaCouchsAgregar.h"
#include "string_conv.h"
#include "Couch.h"
#include <wx/msgdlg.h>
HijaCouchsAgregar::HijaCouchsAgregar(manage *aux ,wxWindow *parent) : BaseCouchsAgregar(parent), m_manage(aux) {

}

HijaCouchsAgregar::~HijaCouchsAgregar() {
	
}
/***
* Evento del boton para aceptar el registro
*
* Al clickear el boton carga los datos de las celdas en un couch, este se
* guarda en el vector de coach de la clase manage y devuelve EndModal(1)
*
*/
void HijaCouchsAgregar::ClickAceptarRegistro( wxCommandEvent& event )  {
	
	std::string nombre,apellido,email,sexo,telefono, 
		direccion,localidad,DNI, 
		CBU,alias; 									
	
	long dia,mes,anio;
	
	
	nombre=wx_to_std(m_nombre_ch->GetValue());
	apellido=wx_to_std(m_apellido_ch->GetValue());
	email=wx_to_std(m_mail_ch->GetValue());
	sexo=wx_to_std(m_sexo_ch->GetValue());
	telefono=wx_to_std(m_telefono_ch->GetValue());
	direccion=wx_to_std(m_direccion_ch->GetValue());
	localidad=wx_to_std(m_localidad_ch->GetValue());
	DNI=wx_to_std(m_DNI_ch->GetValue());
	
	m_dia_ch->GetValue().ToLong(&dia);
	m_mes_ch->GetValue().ToLong(&mes);
	m_anio_ch->GetValue().ToLong(&anio);
	
	CBU = wx_to_std(m_CBU->GetValue());
	alias=wx_to_std(m_alias->GetValue());
	
	
	if(m_dia_ch->GetValue()==""){
		dia=-1;
	}
	if(m_mes_ch->GetValue()==""){
		mes=-1;
	}
	if(m_anio_ch->GetValue()==""){
		anio=-1;
	}
	
	couch ch(nombre,apellido,email,sexo,telefono,direccion,localidad,DNI,
			 dia,mes,anio,
			 CBU,alias);
	
	std::string errores="";
	errores=ch.validar_datos_ch();
	if(errores.size()){
		wxMessageBox(std_to_wx(errores),"Errores",wxOK|wxICON_ERROR,this);
	}else{
			m_manage->agregarCouch(ch);
			m_manage->guardar();
			EndModal(1);
		}
	
		
}

/***
* Evento del boton para cancelar el registro
*
* Devuelve EndModal(0)
*
*/

void HijaCouchsAgregar::ClickCancelarRegistro( wxCommandEvent& event )  {
	EndModal(0);
}

