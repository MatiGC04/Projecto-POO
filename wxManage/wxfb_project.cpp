///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

wxfbExample::wxfbExample( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetMinSize( wxSize( 200,200 ) );
	m_bitmap1->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMinSize( wxSize( 200,200 ) );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap2, 0, wxALL, 5 );

	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap3->SetMinSize( wxSize( 200,200 ) );
	m_bitmap3->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap3, 0, wxALL, 5 );

	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap4->SetMinSize( wxSize( 200,200 ) );
	m_bitmap4->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap4, 0, wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button2->SetMinSize( wxSize( 200,-1 ) );
	m_button2->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button2, 1, wxALL, 5 );

	m_button3 = new wxButton( this, wxID_ANY, wxT("Couchs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3->SetMinSize( wxSize( 200,-1 ) );
	m_button3->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button3, 1, wxALL, 5 );

	m_button4 = new wxButton( this, wxID_ANY, wxT("Planes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button4->SetMinSize( wxSize( 200,-1 ) );
	m_button4->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button4, 1, wxALL, 5 );

	m_button5 = new wxButton( this, wxID_ANY, wxT("Suscripciones"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button5->SetMinSize( wxSize( 200,-1 ) );
	m_button5->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button5, 1, wxALL, 5 );


	bSizer1->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

wxfbExample::~wxfbExample()
{
}
