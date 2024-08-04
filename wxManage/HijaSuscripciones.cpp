#include "HijaSuscripciones.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "HijaSuscripcionesAgregar.h"


HijaSuscripciones::HijaSuscripciones(manage *aux, wxWindow *parent) : BaseSuscripciones(parent), m_manage(aux) {
	int cant_suscripciones = m_manage->cantidadSuscripciones();
	m_grilla->AppendRows(cant_suscripciones);
	for(int i=0; i<cant_suscripciones ; i++) CargarFila(i);
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void HijaSuscripciones::CargarFila(int pos_fila){
	suscripcion sub = m_manage->obtenerSuscripcion(pos_fila);
	cliente cl = m_manage->buscarClientesDNI(sub.ver_DNI_cliente());
	couch ch = m_manage->buscarCouchsDNI(sub.ver_DNI_couch());
	std::string nom_plan = sub.ver_nombre_plan();
	fecha fech_pago = sub.ver_fecha_pago();
	fecha fech_venc = FechaVencimiento(fech_pago);
	
	m_grilla->SetCellValue(pos_fila, 0, std_to_wx(cl.ver_apellido() + ", " + cl.ver_nombre()));
	m_grilla->SetCellValue(pos_fila, 1, std_to_wx(cl.ver_DNI()));
	m_grilla->SetCellValue(pos_fila, 2, std_to_wx(ch.ver_apellido() + ", " + ch.ver_nombre()));
	m_grilla->SetCellValue(pos_fila, 3, std_to_wx(ch.ver_DNI()));
	m_grilla->SetCellValue(pos_fila, 4, std_to_wx(nom_plan));
	m_grilla->SetCellValue(pos_fila, 5, std_to_wx(FechaTexto(fech_pago)));
	m_grilla->SetCellValue(pos_fila, 6, std_to_wx(FechaTexto(fech_venc)));
}

void HijaSuscripciones::EnterBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripciones::ClickBuscar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaSuscripciones::ClickAgregar( wxCommandEvent& event )  {
	HijaSuscripcionesAgregar nueva_ventana(m_manage, this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla->AppendRows();
		CargarFila(m_manage->cantidadSuscripciones()-1);
	}
	
}

void HijaSuscripciones::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla->GetGridCursorRow();
	std::string nomape = wx_to_std(m_grilla->GetCellValue(fila_actual, 0));
	std::string fech_pago = wx_to_std(m_grilla->GetCellValue(fila_actual, 4));
	std::string mensaje = "¿Eliminar la suscripcion de " + nomape + " pagada en " + fech_pago + " ?";
	
	int res = wxMessageBox(std_to_wx(mensaje), m_grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if(res==wxYES){
		m_grilla->DeleteRows(fila_actual,1);
		m_manage->borrarSuscripcion(fila_actual);
		m_manage->guardar();
	}
	
	
}

HijaSuscripciones::~HijaSuscripciones() {
	
}

