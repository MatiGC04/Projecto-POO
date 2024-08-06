#ifndef HIJAPLAN_H
#define HIJAPLAN_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlan : public BasePlan {
	
private:
	manage *m_manage;
	void CargarFila(couch ch, int pos);
	void refrescar();
protected:
	/// Evento para cuando se cambia el tamanio de la ventana
	void CambiarTamanio( wxSizeEvent& event )  override;
	/// Evento para cuando se clickea en la etiqueta de una columna
	void ClickColumna( wxGridEvent& event )  override;
	/// Evento para el enter en la barra de busqueda
	void ClickBuscar( wxCommandEvent& event )  override;
	/// Busca por nombre y apellido en la grilla cuando hacemos click 
	/// en el boton "Buscar"
	void EnterBuscar( wxCommandEvent& event )  override;
	/// Elimina el plan que se haya elegido en el desplegable
	void ClickBorrarPlan( wxCommandEvent& event )  override;
	/// Crea nuevo plan y abre una ventana de dialogo para crearlo 
	void ClickCrearPlan( wxCommandEvent& event )  override;
	/// Evento para hacer click en guaradr ruina
	void ClickGuardarRutina( wxCommandEvent& event )  override;
	/// Evento para hacer click en eliminar
	void ClickEliminar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton de agregar
	void AgregarCouchToPlan( wxCommandEvent& event )  override;
	/// Evento para hacer click en el precio y poder modificarlo
	void ClickBotonPrecio( wxCommandEvent& event )  override;
	/// Evento que permine abrir el desplegable y cambiar de plan
	void CambioSeleccion( wxCommandEvent& event )  override;
	
public:
	HijaPlan(manage *aux, wxWindow *parent=NULL);

};

#endif

