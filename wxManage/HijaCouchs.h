#ifndef HIJACOUCHS_H
#define HIJACOUCHS_H
#include "wxfb_project.h"
#include "manage.h"
class HijaCouchs : public BaseCouchs {
	
private:
	manage *m_manage;
protected:
	/*
	void ClickEliminar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickTamanio( wxSizeEvent& event )  override;
	void ClickSalirClientes( wxCommandEvent& event )  override;
	*/
public:
	HijaCouchs(manage *aux,wxWindow *parent=NULL);
	~HijaCouchs();
	void CargarFila(int pos);
	//void ClickCancelarRegistro( wxCommandEvent& event )  override; no se por que los sigue creando a estos dos
	//void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
};

#endif

