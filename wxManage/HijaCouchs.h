#ifndef HIJACOUCHS_H
#define HIJACOUCHS_H
#include "wxfb_project.h"
#include "manage.h"
class HijaCouchs : public BaseCouchs {
	
private:
	manage *m_manage;
protected:
	/// Abre el cuadro para editar los datos de un cliente 
	void ClickEditar( wxCommandEvent& event )  override;
	
	/// Acomoda los tamaños de las columnas de la grilla cuando cambia el tamaño de la ventana
	void ClickTamanio( wxSizeEvent& event )  override;
	
	/// Busca un nombre y apellido en la grilla cuando apretamos enter en el cuadro de busqueda
	void EnterBuscar( wxCommandEvent& event )  override;
	
	/// Busca por nombre y apellido en la grilla cuando hacemos click en el boton "Buscar"
	void ClickBuscar( wxCommandEvent& event )  override;
	
	/// Abre la ventana para editar un cliente cuando se hace doble click sobre el mismo
	void DobleClickFila( wxGridEvent& event )  override;
	

	/// Elimina el couch que se haya elegido en la grilla
	void ClickEliminar( wxCommandEvent& event )  override;
	
	
	/// Reordena la grilla cuando se hace click sobre el titulo de una columna
	void ClickColumna( wxGridEvent& event )  override;
	
	/// Abrir ventana de Registro para agregar nuevo Couch
	void ClickAgregar( wxCommandEvent& event )  override;
	/// Cerrar ventana actual
	void ClickSalirCouchs( wxCommandEvent& event )  override;
public:
	HijaCouchs(manage *aux,wxWindow *parent=NULL);
	~HijaCouchs();
	void CargarFila(int pos);
	//void ClickCancelarRegistro( wxCommandEvent& event )  override; no se por que los sigue creando a estos dos
	//void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
};

#endif

