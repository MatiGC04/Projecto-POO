#ifndef HIJASUSCRIPCIONES_H
#define HIJASUSCRIPCIONES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripciones : public BaseSuscripciones {
	
private:
	manage *m_manage;
	/// Metodo para cargar una fila de la grilla
	void CargarFila(int pos_fila);
protected:
	/// Evento para cuando se clickea en la etiqueta de una columna
	void ClickColumna( wxGridEvent& event )  override;
	/// Evento para cuando se cambia el tamanio de la ventana
	void CambiarTamanio( wxSizeEvent& event )  override;
	/// Evento para el click en el boton de editar
	void ClickEditar( wxCommandEvent& event )  override;
	/// Evento para el enter en la barra de busqueda
	void EnterBuscar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton de buscar
	void ClickBuscar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton de agregar
	void ClickAgregar( wxCommandEvent& event )  override;
	/// Evento para el click en el boton de eliminar
	void ClickEliminar( wxCommandEvent& event )  override;
	
public:
	
	HijaSuscripciones(manage *aux, wxWindow *parent=NULL);
	
};

#endif

