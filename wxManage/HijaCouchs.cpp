/**
* @file HijaCouchs.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase HijaCouchs
**/
#include "HijaCouchs.h"
#include "string_conv.h"
#include "HijaClientesAgregar.h"
#include "HijaCouchsAgregar.h"
#include "HijaCouchsEditar.h"
#include <wx/wx.h>
#include <wx/msgdlg.h>

/**
* Inicializa la ventana la grilla con los datos de los couchs
* "m_grilla_couchs" y define la cant de filas correspondiente a la
* cantidad de couchs guardados.
*/
HijaCouchs::HijaCouchs(manage *aux,wxWindow *parent) : BaseCouchs(parent), m_manage(aux) {
	int cant_couchs = m_manage->cantidadCouch();
	m_grilla_couchs->AppendRows(cant_couchs);
	for(int i=0;i<cant_couchs;++i){
		CargarFila(i);
	}
	m_grilla_couchs->SetSelectionMode(wxGrid::wxGridSelectRows);
}

/**
* Toma los datos de una persona desde la instancia de Agenda y los carga en su
* correspondiente fila de la m_grilla.
* La m_grilla ya debe tener lugar, es decir, debe existir el renglon 
* (estara vacio o tendra basura).
* @param pos es el indice de el cliente en el arreglo de la clase Manage (en base 0)
**/
void HijaCouchs::CargarFila(int pos){
	couch ch = m_manage->obtenerCouch(pos);
	//fila 0 con nomb+apellido
	m_grilla_couchs->SetCellValue(pos,0,std_to_wx(ch.ver_apellido()+ ", " + ch.ver_nombre()));
	//fila 1 con el dni
	m_grilla_couchs->SetCellValue(pos,1,std_to_wx(ch.ver_DNI()));
	//fila 2 con los planes que dicta
	m_grilla_couchs->SetCellValue(pos,2,std_to_wx(m_manage->planesResponsables(ch.ver_DNI())));
	//fila 3 telefono personal
	m_grilla_couchs->SetCellValue(pos,3,std_to_wx(ch.ver_tel()));

	//fila 4 con los planes en los que es responsable
	//m_grilla_couchs->SetCellValue(pos,4,std_to_wx(m_manage->planesResponsable(ch.ver_DNI())));
}

/// Cierra la ventana de couchs
void HijaCouchs::ClickSalirCouchs( wxCommandEvent& event )  {
	this->Close();
}

/// Abre la ventana para registrar un nuevo cliente
void HijaCouchs::ClickAgregar( wxCommandEvent& event )  {
	HijaCouchsAgregar nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		m_grilla_couchs->AppendRows(1); 
		int pos_nuevo = m_manage->cantidadCouch()-1;
		CargarFila(pos_nuevo);
		m_grilla_couchs->SetGridCursor(pos_nuevo,0); 
		m_grilla_couchs->SelectRow(pos_nuevo);
	}
}


void HijaCouchs::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla_couchs->GetGridCursorRow();
	int res = wxMessageBox(c_to_wx("¿Eliminar el registro?"), m_grilla_couchs->GetCellValue(fila_actual,0),wxYES_NO);
	if(res==wxYES){
		m_grilla_couchs->DeleteRows(fila_actual,1);
		m_manage->borrarCouch(fila_actual);
		m_manage->guardar();
	}
}


HijaCouchs::~HijaCouchs() {
	
}

void HijaCouchs::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

void HijaCouchs::ClickBuscar( wxCommandEvent& event )  {
	int fila_pos = m_grilla_couchs->GetGridCursorRow();
	if (m_grilla_couchs->GetSelectedRows().GetCount()==0) fila_pos = -1;
	if(m_grilla_couchs->GetSelectedRows().GetCount()>1){
		wxMessageBox("Usted a seleccionado demasiadas filas, seleccione 1 o menos porfavor.\nTenga en cuenta que se empezara a buscar apartir de esa fila en adelante, en caso de tener seleccionada la ultima fila se comenzara desde el inicio de la grilla.");	
		return;
	}
	std::string nomape = wx_to_std(m_buscar->GetValue());
	int encontrado = m_manage->buscarCouchsNombre( nomape, fila_pos+1 );
	if(encontrado==-1) encontrado = m_manage->buscarCouchsNombre(nomape,0);
	if(encontrado==-1) wxMessageBox("No se encontraron coincidencias");
	else{
		m_grilla_couchs->SetGridCursor(encontrado,1);
		m_grilla_couchs->SelectRow(encontrado);
	}
	
}

void HijaCouchs::DobleClickFila( wxGridEvent& event )  {
	ClickEditar(event);
}

void HijaCouchs::ClickColumna( wxGridEvent& event )  {
	int col = event.GetCol();
	switch(col){
	//recordar: enum CriterioOrdenCouchs { ORDEN_APENOMB, O_DNI, ORDEN_PLANES_RESPONSABLES, ORDEN_TELEFONO};	
	case 0: m_manage->OrdenarCouchs(ORDEN_APENOMB); break;
	case 1: m_manage->OrdenarCouchs(O_DNI); break;
	case 2: m_manage->OrdenarCouchs(ORDEN_PLANES_RESPONSABLES); break;
	case 3: m_manage->OrdenarCouchs(ORDEN_TELEFONO); break;
	}
	for(int i=0; i<m_manage->cantidadCouch();i++) CargarFila(i);

}

void HijaCouchs::ClickTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[4], ancho_total_viejo=0; 
	for (int i=0;i<4;i++) { 
		tamanios[i] = m_grilla_couchs->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=m_grilla_couchs->GetSize().GetWidth(); 
	m_grilla_couchs->BeginBatch(); 
	for (int i=0;i<4;i++) 
		m_grilla_couchs->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	m_grilla_couchs->EndBatch();
}

void HijaCouchs::ClickEditar( wxCommandEvent& event )  {
	int pos= m_grilla_couchs->GetGridCursorRow();
	HijaCouchsEditar nueva_ventana(m_manage,pos,this);
	if(nueva_ventana.ShowModal()==1){
		CargarFila(pos);
	}
}




