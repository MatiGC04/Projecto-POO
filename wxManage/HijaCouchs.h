#ifndef HIJACOUCHS_H
#define HIJACOUCHS_H
#include "wxfb_project.h"
#include "manage.h"
class HijaCouchs : public BaseCouchs {
	
private:
	manage *m_manage;
protected:
	void ClickEditar( wxCommandEvent& event )  override;
	
	
	/* ->nose pq esto esta creado<-
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
	*/
	void ClickTamanio( wxSizeEvent& event )  override;
	void EnterBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void DobleClickFila( wxGridEvent& event )  override;
	void ClickColumna( wxGridEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	
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

