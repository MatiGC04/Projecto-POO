#include <wx/image.h>
#include "Application.h"
#include "WinExample.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	WinExample *win = new WinExample(NULL);
	win->Show();
	return true;
}

