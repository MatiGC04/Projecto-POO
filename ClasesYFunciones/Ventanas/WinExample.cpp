#include "WinExample.h"

WinExample::WinExample(wxWindow *parent) : wxfbExample(parent){
	
}

void WinExample::OnButtonClose( wxCommandEvent& event ) { 
	Close();
}
