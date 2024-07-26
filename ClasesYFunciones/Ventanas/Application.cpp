#include <wx/image.h>
#include "Application.h"
#include "HijaPresentacion.h"

IMPLEMENT_APP(Application)
Application::Application(){
	
}

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaPresentacion *win = new HijaPresentacion(NULL);
	win->Show();
	return true;
}

