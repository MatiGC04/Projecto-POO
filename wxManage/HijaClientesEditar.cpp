#include "HijaClientesEditar.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

HijaClientesEditar::HijaClientesEditar(manage *aux, int pos, wxWindow *parent): BaseClientesAgregar(parent), m_manage(aux){
	this->pos = pos;
	cliente cl = m_manage->ObtenerCliente(pos);
	m_nombre->SetValue(wx_to_std(cl.ver_nombre()));
	m_apellido->SetValue(wx_to_std(cl.ver_apellido()));
	m_DNI->SetValue(wx_to_std(cl.ver_DNI()));
	m_sexo->SetValue(wx_to_std(cl.ver_sexo()));
	m_mail->SetValue(wx_to_std(cl.ver_email()));
	m_telefono->SetValue(wx_to_std(cl.ver_tel()));
	m_localidad->SetValue(wx_to_std(cl.ver_loc()));
	m_direccion->SetValue(wx_to_std(cl.ver_dir()));
	m_telefono2->SetValue(wx_to_std(cl.ver_tel_emergencia()));
	if(cl.ver_diaN()!=0) m_dia->SetValue(wx_to_std(std::to_string(cl.ver_diaN())));
	if(cl.ver_mesN()!=0) m_mes->SetValue(wx_to_std(std::to_string(cl.ver_mesN())));
	if(cl.ver_anioN()!=0) m_anio->SetValue(wx_to_std(std::to_string(cl.ver_anioN())));
}
void HijaClientesEditar::ClickAceptarRegistro( wxCommandEvent& event ){
	std::string nombre,apellido,email,sexo,telefono,direccion,localidad,DNI,tel_emergencias;
	long dia,mes,anio;
	nombre = wx_to_std(m_nombre->GetValue());
	apellido = wx_to_std(m_apellido->GetValue());
	email = wx_to_std(m_mail->GetValue());
	sexo = wx_to_std(m_sexo->GetValue());
	telefono = wx_to_std(m_telefono->GetValue());
	direccion = wx_to_std(m_direccion->GetValue());
	localidad = wx_to_std(m_localidad->GetValue());
	DNI=wx_to_std(m_DNI->GetValue());
	m_dia->GetValue().ToLong(&dia);
	m_mes->GetValue().ToLong(&mes);
	m_anio->GetValue().ToLong(&anio);
	tel_emergencias = wx_to_std(m_telefono2->GetValue());
	
	if(m_dia->GetValue()==""){
		dia=-1;
	}
	if(m_mes->GetValue()==""){
		mes=-1;
	}
	if(m_anio->GetValue()==""){
		anio=-1;
	}
	cliente cl(nombre,apellido,email,sexo,telefono,direccion,localidad,DNI,dia,mes,anio,tel_emergencias);
	std::string errores = "";
	errores = cl.validar_datos_cl();
	cliente cl_original = m_manage->ObtenerCliente(pos);
	
	if(errores.size()){
		wxMessageBox(std_to_wx(errores),"Errores",wxOK|wxICON_ERROR,this);
	}
	else{
		if((cl==cl_original)) EndModal(0);
		else{
			std::string aux= "¿Esta seguro de sobrescribir el registro de " + cl_original.ver_apellido() + ", " + cl_original.ver_nombre() + " ?";
			int resultado = wxMessageBox(aux ,"Sobrescribir dato",wxYES_NO);
			if(resultado==wxNO){
				EndModal(0);
			}
			if(resultado==wxYES){
				m_manage->ObtenerCliente(pos) = cl;
				m_manage->guardar();
				EndModal(1);
			}
		}
	}
}
	
void HijaClientesEditar::ClickCancelarRegistro( wxCommandEvent& event ){
	EndModal(0);
}
