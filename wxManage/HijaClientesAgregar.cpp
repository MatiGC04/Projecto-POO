#include "HijaClientesAgregar.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

HijaClientesAgregar::HijaClientesAgregar(manage *aux, wxWindow *parent) : BaseClientesAgregar(parent), m_manage(aux) {
	
}

/***
* Evento del boton para cancelar el registro
*
* Devuelve EndModal(0)
*
*/

void HijaClientesAgregar::ClickCancelarRegistro( wxCommandEvent& event )  {
	EndModal(0);
}
/***
* Evento del boton para aceptar el registro
*
* Al clickear el boton carga los datos de las celdas en un cliente, este se
* guarda en el vector de clientes de la clase manage y devuelve EndModal(1)
*
*/
void HijaClientesAgregar::ClickAceptarRegistro( wxCommandEvent& event )  {
	std::string nombre,apellido,email,sexo,telefono,direccion,localidad,DNI,tel_emergencias;
	long dia,mes,anio;
	
	nombre=wx_to_std(m_nombre->GetValue());
	apellido=wx_to_std(m_apellido->GetValue());
	email=wx_to_std(m_mail->GetValue());
	sexo=wx_to_std(m_sexo->GetValue());
	telefono=wx_to_std(m_telefono->GetValue());
	direccion=wx_to_std(m_direccion->GetValue());
	localidad=wx_to_std(m_localidad->GetValue());
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
	std::string errores="";
	errores= cl.validar_datos_cl();
	if(errores.size()){
		wxMessageBox(std_to_wx(errores),"Errores",wxOK|wxICON_ERROR,this);
	}
	else{
		m_manage->agregarCliente(cl);
		m_manage->guardar();
		EndModal(1);
	}
}


