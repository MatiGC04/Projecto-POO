#ifndef HIJAPLAN_H
#define HIJAPLAN_H
#include "wxfb_project.h"
#include "manage.h"

class HijaPlan : public BasePlan {
	
private:
	manage *m_manage;
protected:
	
public:
	HijaPlan(manage *aux, wxWindow *parent=NULL);
	~HijaPlan();
};

#endif

