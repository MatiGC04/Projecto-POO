#include "HijaPlan.h"
#include "string_conv.h"
#include <string>
#include "Couch.h"
#include <vector>
#include "HijaPlanPrecio.h"
#include "HijaPlanAgregar_Couch.h"
#include <fstream>
#include "HijaPlanAgregar_Plan.h"



HijaPlan::HijaPlan(manage *aux, wxWindow *parent) : BasePlan(parent), m_manage(aux) {
	
	for(int i=0; i<m_manage->cantidadPlanes(); ++i){
		std::string dni = (m_manage->obtenerPlan(i)).ver_nombre_plan();
		m_desplegable->Append(std_to_wx(dni));
	}
	
	m_desplegable->SetSelection(0);
	
	refrescar();
	
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}
void HijaPlan::CargarFila(couch ch, int pos){
	m_grilla->SetCellValue(pos,0,std_to_wx(ch.ver_apellido()+ ", " + ch.ver_nombre()));
	m_grilla->SetCellValue(pos,1,std_to_wx(ch.ver_DNI()));
}


void HijaPlan::CambioSeleccion( wxCommandEvent& event )  {
	refrescar();
}

void HijaPlan::ClickBotonPrecio( wxCommandEvent& event )  {
	int pos_plan=m_desplegable->GetSelection();
	HijaPlanPrecio nueva_ventana(m_manage, pos_plan ,this);
	if(nueva_ventana.ShowModal()==1){
		refrescar();
	}
}

void HijaPlan::AgregarCouchToPlan( wxCommandEvent& event )  {
	int pos_plan = m_desplegable->GetSelection();
	HijaPlanAgregar_Couch nueva_ventana(m_manage, pos_plan ,this);
	if(nueva_ventana.ShowModal()==1){
		refrescar();
	}
}

void HijaPlan::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = m_grilla->GetGridCursorRow();
	std::string dni_couch = wx_to_std(m_grilla->GetCellValue(fila_actual,1));
	int pos_plan = m_desplegable->GetSelection();
	m_manage->obtenerPlan(pos_plan).eliminar_couch(dni_couch);
	m_manage->guardar();
	refrescar();
}


void HijaPlan::refrescar(){
	

	
	
	
	int pos_plan = m_desplegable->GetSelection();
	//Actualizamos la rutina que se muestra
	plan pl = m_manage->obtenerPlan(pos_plan);
	std::ifstream archi("RutinasBases/rutina"+pl.ver_nombre_plan()+".txt");
	std::string linea="", texto="";
	while(std::getline(archi,linea)){
		texto=texto+linea+"\n";
	}
	m_rutina->SetValue(std_to_wx(texto));
	
	
	//Actualizamos la grilla que se muestra
	std::vector<couch> couchs_grilla;
	couchs_grilla = m_manage->CouchsInPlan(pos_plan);
	if(m_grilla->GetNumberRows()!=0){
		m_grilla->DeleteRows(0,m_grilla->GetNumberRows());
	}
	m_grilla->AppendRows(couchs_grilla.size());
	for(int i=0;i<couchs_grilla.size();i++){
		CargarFila(couchs_grilla[i],i);
	}
	plan plan_actual = m_manage->obtenerPlan(pos_plan);
	std::string precio =  "$" + std::to_string(plan_actual.ver_precio_plan());
	m_precio->SetLabel(std_to_wx(precio));
}

void HijaPlan::ClickGuardarRutina( wxCommandEvent& event )  {
	std::string texto = wx_to_std(m_rutina->GetValue());
	int pos_plan = m_desplegable->GetSelection();
	plan pl = m_manage->obtenerPlan(pos_plan);
	std::ofstream archi("RutinasBases/rutina"+pl.ver_nombre_plan()+".txt");
	archi<<texto;
	archi.close();
}

void HijaPlan::ClickBorrarPlan( wxCommandEvent& event )  {
	int pos_plan = m_desplegable->GetSelection();
	m_manage->borrarPlan(pos_plan);
	m_manage->guardar();
	refrescar();
	m_desplegable->SetSelection(0);
}

void HijaPlan::ClickCrearPlan( wxCommandEvent& event )  {
	HijaPlanAgregar_Plan nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		refrescar();
	}
}

