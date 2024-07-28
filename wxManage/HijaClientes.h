#ifndef HIJACLIENTES_H
#define HIJACLIENTES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientes : public BaseClientes {
	
private:
	manage *m_manage;
protected:
	void ClickBuscar( wxCommandEvent& event )  override;
	void ClickEditar( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickTamanio( wxSizeEvent& event )  override;
	void ClickSalirClientes( wxCommandEvent& event )  override;
	
public:
	HijaClientes(manage *aux, wxWindow *parent=NULL);
	void CargarFila(int pos);
	~HijaClientes();
};

#endif
