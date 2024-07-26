#ifndef HIJACLIENTES_H
#define HIJACLIENTES_H
#include "wxfb_project.h"
#include "manage.h"

class HijaClientes : public BaseClientes {
	
private:
	manage *m_manage;
protected:
	
public:
	HijaClientes(manage *aux,wxWindow *parent=NULL);
	void CargarFila(int pos);
	~HijaClientes();
};

#endif

