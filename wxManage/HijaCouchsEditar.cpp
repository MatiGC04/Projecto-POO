 #include "HijaCouchsEditar.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

///Constuctor
HijaCouchsEditar::HijaCouchsEditar(manage *aux, int pos, wxWindow *parent): BaseCouchsAgregar(parent), m_manage(aux){
	this->pos=pos;
	couch ch=m_manage->obtenerCouch(pos);
	
	m_nombre_ch->SetValue(wx_to_std(ch.ver_nombre()));
	m_apellido_ch->SetValue(wx_to_std(ch.ver_apellido()));
	m_DNI_ch->SetValue(wx_to_std(ch.ver_DNI()));
	m_sexo_ch->SetValue(wx_to_std(ch.ver_sexo()));
	m_mail_ch->SetValue(wx_to_std(ch.ver_email()));
	m_telefono_ch->SetValue(wx_to_std(ch.ver_tel()));
	m_localidad_ch->SetValue(wx_to_std(ch.ver_loc()));
	m_direccion_ch->SetValue(wx_to_std(ch.ver_dir()));
	
	m_CBU->SetValue(wx_to_std(ch.ver_cbu()));
	m_alias->SetValue(wx_to_std(ch.ver_alias()));
	if(ch.ver_diaN()!=0) m_dia_ch->SetValue(wx_to_std(std::to_string(ch.ver_diaN())));
	if(ch.ver_mesN()!=0)m_mes_ch->SetValue(wx_to_std(std::to_string(ch.ver_mesN())));
	if(ch.ver_anioN()!=0)m_anio_ch->SetValue(wx_to_std(std::to_string(ch.ver_anioN())));
}

void HijaCouchsEditar::ClickAceptarRegistro(wxCommandEvent& event){
	std::string nombre,apellido,email,sexo,telefono,
		direccion,localidad,DNI,CBU,alias;
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
	alias= wx_to_std(m_alias->GetValue());
	if(m_dia_ch->GetValue()==""){
		dia=-1;
	}
	if(m_mes_ch->GetValue()==""){
		mes=-1;
	}
	if(m_anio_ch->GetValue()==""){
		anio=-1;
	}
	
	couch ch(nombre,apellido,email,sexo,telefono,direccion,localidad,DNI,dia,mes,anio,CBU,alias);
	std::string errores="";
	errores= ch.validar_datos_ch();
	if(errores.size()){
		wxMessageBox(std_to_wx(errores),"Errores",wxOK|wxICON_ERROR,this);
	}
	else{
		m_manage->obtenerCouch(pos)=ch;
		m_manage->guardar();
		EndModal(1);
	}
}

void HijaCouchsEditar::ClickCancelarRegistro( wxCommandEvent& event ){
	EndModal(0);
}
