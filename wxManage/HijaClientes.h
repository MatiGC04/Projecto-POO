#ifndef HIJACLIENTES_H
#define HIJACLIENTES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientes : public BaseClientes {
	
private:
	manage *m_manage;
protected:
	//void ClickCancelarRegistro( wxCommandEvent& event )  override; no se por que los sigue creando a estos dos
	//void ClickAceptarRegistro( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickTamanio( wxSizeEvent& event )  override;
	void ClickSalirClientes( wxCommandEvent& event )  override;
	
public:
	HijaClientes(manage *aux,wxWindow *parent=NULL);
	void CargarFila(int pos);
	~HijaClientes();
};

#endif
