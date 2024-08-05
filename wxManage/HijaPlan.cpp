#include "HijaPlan.h"
#include "string_conv.h"
#include <string>
#include "Couch.h"
#include <vector>
#include "HijaPlanPrecio.h"
#include "HijaPlanAgregar_Couch.h"
#include <fstream>
#include "HijaPlanAgregar_Plan.h"
#include <wx/msgdlg.h>



/**
* Inicializxa la ventana, carga el icono y refresca la grilla de couchs y se indica el modo 
* de seleccion de m_grilla como: wxGridSelectRows, esto quiere decir que al hacer clic en una celda,
* se seleccionara toda la fila a la que pertenece esa celda.
*/
HijaPlan::HijaPlan(manage *aux, wxWindow *parent) : BasePlan(parent), m_manage(aux) {
	wxIcon icon("icono.ico", wxBITMAP_TYPE_ICO);
	SetIcon(icon);
	
	refrescar();
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}
/// Metodo que carga los datos de los couchs de dicho plan en la grilla
void HijaPlan::CargarFila(couch ch, int pos){
	m_grilla->SetCellValue(pos,0,std_to_wx(ch.ver_apellido()+ ", " + ch.ver_nombre()));
	m_grilla->SetCellValue(pos,1,std_to_wx(ch.ver_DNI()));
}

/// Al hacer click en el desplegable de planes llama a la funcion refrescar para que al seleccionar el plan
/// cambie la grilla de los couchs.
void HijaPlan::CambioSeleccion( wxCommandEvent& event )  {
	refrescar();
}

/** Al hacer click en el boton del precio del plan, abre una ventana HijaPlan Precio
* para poder modificar el costo del plan.Y si la ventana devuelve ShowModal=1,
*/
void HijaPlan::ClickBotonPrecio( wxCommandEvent& event )  {
	int pos_plan=m_desplegable->GetSelection();
	HijaPlanPrecio nueva_ventana(m_manage, pos_plan ,this);
	if(nueva_ventana.ShowModal()==1){
		refrescar();
	}
}

/**
* Metodo que se inicia al hacer click en el boton de Agregar.
* Este metodo al invocarse almacena el plan que se haya elegido y luego inicializa la ventana 
* HijaPlanAgregar_Couch y le pasa el plan elegido y si recibe algun cambio es decir, si recibe
* showmodal=1 refresca la grilla con los couchs actuales y nuevo que se agrego.
*/
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

/** Implementacion del metodo refrescar, este lo utilizaremos mucho para actualizar el desplegable para seleccionar el plan,
* las grillas de los couchs que pertenecen al mismo y ademas de la rutina base y su precio.
*/
void HijaPlan::refrescar(){
	// Actualizamos desplegable
	
	int pos_desplegable = m_desplegable->GetSelection();
	//Declaro variable pos_desplegable y guardo que item se ha seleccionado, 
	//dado que con el clear se pierde la seleccion
	m_desplegable->Clear();
	for(int i=0; i<m_manage->cantidadPlanes(); ++i){
		std::string dni = (m_manage->obtenerPlan(i)).ver_nombre_plan();
		// muestro el nombre del plan en el desplegable
		m_desplegable->Append(std_to_wx(dni));
	}
	// si no se selecciono ningun plan del desplegable.
	
	if(pos_desplegable == wxNOT_FOUND){
		// se selecciona el primer plan, es decir el de la pos 0
		m_desplegable->SetSelection(0);
		// se actualiza pos_desplegable con la nueva selección actual del control desplegable. 
		// Esto asegura que pos_desplegable ahora tenga un valor válido correspondiente al primer elemento seleccionado.
		pos_desplegable = m_desplegable->GetSelection();
	}
	else{
		// en cambio si se selecciono un plan, mantiene la seleccion del usuario.
		m_desplegable->SetSelection(pos_desplegable);
	}
	
	

	
	// Actualizamos la rutina que se muestra
	int pos_plan = pos_desplegable;
	plan pl = m_manage->obtenerPlan(pos_plan);
	std::ifstream archi("RutinasBases/rutina"+pl.ver_nombre_plan()+".txt");
	std::string linea="", texto="";
	
	// leo la rutina
	while(std::getline(archi,linea)){
		texto=texto+linea+"\n";
	}
	// la muestro en el panel de texto
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
	
	// Muestro el precio del plan en el boton m_precio
	plan plan_actual = m_manage->obtenerPlan(pos_plan);
	std::string precio =  "$" + std::to_string(plan_actual.ver_precio_plan());
	m_precio->SetLabel(std_to_wx(precio));
}

/// Al hacer click en el boton guardar guardo en el archivo de texto.
void HijaPlan::ClickGuardarRutina( wxCommandEvent& event )  {
	int resultado = wxMessageBox(std_to_wx("¿Esta seguro de sobrescribir la rutina base del plan?"), "VENTANA GUARDAR RUTINA BASE", wxYES_NO);
	if(resultado==wxYES){
		std::string texto = wx_to_std(m_rutina->GetValue());
		int pos_plan = m_desplegable->GetSelection();
		plan pl = m_manage->obtenerPlan(pos_plan);
		std::ofstream archi("RutinasBases/rutina"+pl.ver_nombre_plan()+".txt");
		archi<<texto;
		archi.close();
	}
	}

/** Implementacion del metodo que permite borrar el plan cuando se da click en el boton de eliminar. 
* Para eso guardo en la variable pos_plan el plan seleccionado en el desplegable, y por medio de los 
* metodos de la clase manage borro el plan del vector de planes y actualizo el archivo binario, y 
* para finalizar refresco todo.
*/
void HijaPlan::ClickBorrarPlan( wxCommandEvent& event )  {
	int pos_plan = m_desplegable->GetSelection();
	std::string mensaje = "Esta seguro de borrar el plan " + m_manage->obtenerPlan(pos_plan).ver_nombre_plan();
	int resultado = wxMessageBox(std_to_wx(mensaje), "VENTANA BORRAR PLAN", wxYES_NO);
	if(resultado==wxYES){
		m_manage->borrarPlan(pos_plan);
		m_manage->guardar();
		m_desplegable->SetSelection(0);
		refrescar();
	}	
}


/**
* Implementacion del evento de click en crear plan
* Muesta la ventana donde se edita la rutina de la suscripcion del cliente.
**/
void HijaPlan::ClickCrearPlan( wxCommandEvent& event )  {
	HijaPlanAgregar_Plan nueva_ventana(m_manage,this);
	if(nueva_ventana.ShowModal()==1){
		
		refrescar();
		m_desplegable->SetSelection(m_manage->cantidadPlanes()-1);
		refrescar();
	}
}

/**
* Implementacion del metodo que hace que al dar enter invoca al metodo clickBuscar.
**/
void HijaPlan::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

/**
* Implementacion del metodo clickbuscar que permite encontrar los couchs registrados en el plan seleccionado
* a partir de una grilla seleccionada si asi lo desee el usuario
*/
void HijaPlan::ClickBuscar( wxCommandEvent& event )  {
	int fila_pos = m_grilla->GetGridCursorRow();
	if(m_grilla->GetSelectedRows().GetCount()==0) fila_pos = -1;
	if(m_grilla->GetSelectedRows().GetCount()>1){
		wxMessageBox("Usted a seleccionado demasiadas filas, seleccione 1 o menos porfavor.\nTenga en cuenta que se empezara a buscar apartir de esa fila en adelante, en caso de tener seleccionada la ultima fila se comenzara desde el inicio de la grilla.");	
		return;
	}
	//guardo el nombre-apellido del couch y el plan que se haya seleccionado en el desplegable...
	std::string nomape = wx_to_std(m_buscar->GetValue());
	int pos_plan = m_desplegable->GetSelection();
	int encontrado = m_manage->buscarCouchsNombre(pos_plan, nomape, fila_pos+1 );
	if(encontrado==-1) encontrado = m_manage->buscarCouchsNombre(pos_plan,nomape,0);
	if(encontrado==-1) wxMessageBox("No se encontraron coincidencias");
	else{
		//si lo encuentra le muestro donde esta.
		m_grilla->SetGridCursor(encontrado,1);
		m_grilla->SelectRow(encontrado);
	}
}
/// Evento que ajusta la grilla segun el tamanio de la ventana y la proporcion que mantenia la grilla
void HijaPlan::CambiarTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[2], ancho_total_viejo=0; 
	for (int i=0;i<2;i++) { 
		tamanios[i] = m_grilla->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo = m_grilla->GetSize().GetWidth(); 
	m_grilla->BeginBatch(); 
	for (int i=0;i<2;i++) 
		m_grilla->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	m_grilla->EndBatch();
}

void HijaPlan::ClickColumna( wxGridEvent& event )  {
	event.Skip();
}

