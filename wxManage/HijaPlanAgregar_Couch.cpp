#include "HijaPlanAgregar_Couch.h"
#include "string_conv.h"
#include <vector>
/**
* Implementacion del constructor de la ventana agregar.
* Carga dentro del vector v_couchs los couchs que se encuentran dentro del plan.
* y luego los carga en la grilla.
**/
HijaPlanAgregar_Couch::HijaPlanAgregar_Couch(manage *aux, int pos_plan, wxWindow *parent) : BasePlanAgregar_Couch(parent), m_manage(aux) {
	this->v_couchs = m_manage->CouchsOutPlan(pos_plan);
	this->pos_plan = pos_plan;
	m_grilla->AppendRows(v_couchs.size());
	for(int i=0;i<v_couchs.size();++i){
		CargarFila(i);
	}
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}
/**
* Toma los datos de una persona desde la instancia de Couch y los carga en su
* correspondiente fila de la m_grilla.
* La m_grilla ya debe tener lugar, es decir, debe existir el renglon 
* (estara vacio o tendra basura).
* @param pos es el indice de el cliente en el arreglo de la clase Manage (en base 0)
**/
void HijaPlanAgregar_Couch::CargarFila(int pos){
	m_grilla->SetCellValue(pos,0,std_to_wx(v_couchs[pos].ver_apellido()+ ", " + v_couchs[pos].ver_nombre()));
	m_grilla->SetCellValue(pos,1,std_to_wx(v_couchs[pos].ver_DNI()));
	m_grilla->SetCellValue(pos,2,std_to_wx(m_manage->planesResponsables(v_couchs[pos].ver_DNI())));
	m_grilla->SetCellValue(pos,3,std_to_wx(v_couchs[pos].ver_tel()));

}

/// Al hacer doble click invoca al metodo clickAgregar().
void HijaPlanAgregar_Couch::DobleClickFila( wxGridEvent& event )  {
	ClickAgregar(event);
}

void HijaPlanAgregar_Couch::ClickColumna( wxGridEvent& event )  {
	event.Skip();
}

/** Implementacion del metodo ClickAgregar. Este permite agregar el couch 
* seleccionado en la grilla y agregarlo al plan. Para luego guardarlo en el archivo
* binario con el metodo guardar().
*
*/
void HijaPlanAgregar_Couch::ClickAgregar( wxCommandEvent& event )  {
	int fila_grilla = m_grilla->GetGridCursorRow();
	m_manage->obtenerPlan(pos_plan).agregar_couch(v_couchs[fila_grilla].ver_DNI());
	m_manage->guardar();
	EndModal(1);
}

/// Implementacion de clickcancelar, permite anular el registro del nuevo couch. Es decir
/// no devuelve ninguna modificacion.
void HijaPlanAgregar_Couch::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

