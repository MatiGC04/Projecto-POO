#include "HijaCouchsAgregar.h"
#include "string_conv.h"
#include "Couch.h"
#include <wx/msgdlg.h>
HijaCouchsAgregar::HijaCouchsAgregar(manage *aux ,wxWindow *parent) : BaseCouchsAgregar(parent), m_manage(aux) {

}

HijaCouchsAgregar::~HijaCouchsAgregar() {
	
}

void HijaCouchsAgregar::ClickAceptarRegistro( wxCommandEvent& event )  {
	//utilizo variables auxiliares para guardar los datos
	std::string nombre,apellido,email,sexo,telefono, //datos de persona
		direccion,localidad,DNI, 
		CBU,alias; 									//datos particulares para couch
	
	long dia,mes,anio;
	
	//los copio
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
	
	//valido que la fecha de nacimiento este bien ingresada
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
	//chequeo que los datos de couch esten bien ingresados antes de guardarlo
	//en binario
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

///
void HijaCouchsAgregar::ClickCancelarRegistro( wxCommandEvent& event )  {
	EndModal(0);
}

