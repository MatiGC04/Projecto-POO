#ifndef HIJASUSCRIPCIONES_H
#define HIJASUSCRIPCIONES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaSuscripciones : public BaseSuscripciones {
	
private:
	manage *m_manage;
	void CargarFila(int pos_fila);
protected:
	void ClickColumna( wxGridEvent& event )  override;
	void CambiarTamanio( wxSizeEvent& event )  override;
	void ClickEditar( wxCommandEvent& event )  override;
	void EnterBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	
public:
	HijaSuscripciones(manage *aux, wxWindow *parent=NULL);
	~HijaSuscripciones();
	
};

#endif
