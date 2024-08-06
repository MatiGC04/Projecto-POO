#ifndef HIJACLIENTES_H
#define HIJACLIENTES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientes : public BaseClientes {
	
private:
	manage *m_manage;
	
	/// Copia los datos de un cliente de la base de datos a la tabla
	void CargarFila(int pos);
	
protected:
	
	/// Cierra la ventana de clientes cuando sea clickea el boton de "Salir"
	void ClickSalirClientes( wxCommandEvent& event )  override;
	
	/// Busca por nombre y apellido en la grilla cuando hacemos click en el boton "Buscar"
	void ClickBuscar( wxCommandEvent& event )  override;
	
	/// Abre el cuadro para editar los datos de un cliente 
	void ClickEditar( wxCommandEvent& event )  override;
	
	/// Elimina un cliente de la aplicacion
	void ClickEliminar( wxCommandEvent& event )  override;
	
	/// Abre el cuadro para agregar un nuevo cliente
	void ClickAgregar( wxCommandEvent& event )  override;
	
	/// Busca un nombre y apellido en la grilla cuando apretamos enter en el cuadro de busqueda
	void EnterBuscar( wxCommandEvent& event )  override;
	
	/// Abre la ventana para editar un cliente cuando se hace doble click sobre el mismo
	void DobleClickFila( wxGridEvent& event )  override;
	
	/// Reordena la grilla cuando se hace click sobre el titulo de una columna
	void ClickColumna( wxGridEvent& event )  override;
	
	/// Acomoda los tamaños de las columnas de la grilla cuando cambia el tamaño de la ventana
	void ClickTamanio( wxSizeEvent& event )  override;
	
public:
	/// Inicializa la ventana llenando la grilla con los datos que hay en manage
	HijaClientes(manage *aux, wxWindow *parent=NULL);
	

};

#endif
