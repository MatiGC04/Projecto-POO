#ifndef WIN_EXAMPLE_H
#define WIN_EXAMPLE_H
#include "wxfb_project.h"

class WinExample : public wxfbExample {
public:
	WinExample(wxWindow *parent=NULL);
	void OnButtonClose(wxCommandEvent &evt);
};

#endif
