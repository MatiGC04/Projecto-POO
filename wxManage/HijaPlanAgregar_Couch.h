#ifndef HIJAPLANAGREGAR_COUCH_H
#define HIJAPLANAGREGAR_COUCH_H
#include "wxfb_project.h"
#include "manage.h"
#include <vector>

class HijaPlanAgregar_Couch : public BasePlanAgregar_Couch {
	
private:
	manage *m_manage;
	int pos_plan;
	std::vector<couch> v_couchs;
protected:
	/// Evento para el click en el boton de cancelar
	void ClickCancelar( wxCommandEvent& event )  override;
	/// Evento que permite hacer dobleClick en la fila para agregar 
	void DobleClickFila( wxGridEvent& event )  override;
	/// Evento que permite elegir el couch haciendo click en la columna
	void ClickColumna( wxGridEvent& event )  override;
	/// Evento que permite hacer click en agregar
	void ClickAgregar( wxCommandEvent& event )  override;
	
public:
	HijaPlanAgregar_Couch(manage *aux, int pos_plan, wxWindow *parent=NULL);
	void CargarFila(int pos);
};

#endif

