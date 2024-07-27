#ifndef HIJACLIENTESAGREGAR_H
#define HIJACLIENTESAGREGAR_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientesAgregar : public BaseClientesAgregar {
	
private:
	manage *m_manage;
protected:
	
public:
	HijaClientesAgregar(manage *aux, wxWindow *parent=NULL);
	~HijaClientesAgregar();
};

#endif

