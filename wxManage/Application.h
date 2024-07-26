#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "manage.h"

class Application : public wxApp {
	manage m_manage;
public:
	Application();
	virtual bool OnInit();
};

#endif
