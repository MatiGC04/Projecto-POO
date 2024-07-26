#ifndef HIJAPRESENTACION_H
#define HIJAPRESENTACION_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPresentacion : public BasePresentacion {
	
private:
	manage *m_manage;
protected:
	
public:
	HijaPresentacion(manage *aux,wxWindow *parent=NULL);
	~HijaPresentacion();
};

#endif

