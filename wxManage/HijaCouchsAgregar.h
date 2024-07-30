#ifndef HIJACOUCHSAGREGAR_H
#define HIJACOUCHSAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"
class HijaCouchsAgregar : public BaseCouchsAgregar {
	
private:
	manage *m_manage;
protected:
	void ClickCancelarRegistro( wxCommandEvent& event )  override;
	void ClickAceptarRegistro( wxCommandEvent& event )  override;
	
public:
	HijaCouchsAgregar(manage *aux, wxWindow *parent=NULL);
	~HijaCouchsAgregar();
};

#endif

