///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

BasePresentacion::BasePresentacion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Clientes.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetMinSize( wxSize( 200,200 ) );
	m_bitmap1->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Coachs.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMinSize( wxSize( 200,200 ) );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap2, 0, wxALL, 5 );

	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Planes.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap3->SetMinSize( wxSize( 200,200 ) );
	m_bitmap3->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap3, 0, wxALL, 5 );

	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Suscripciones.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
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

	// Connect Events
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickClientes ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickCouchs ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickPlanes ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickSuscripciones ), NULL, this );
}

BasePresentacion::~BasePresentacion()
{
	// Disconnect Events
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickClientes ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickCouchs ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickPlanes ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePresentacion::ClickSuscripciones ), NULL, this );

}

BaseClientes::BaseClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("CLIENTES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer9->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer9, 0, wxEXPAND, 5 );

	m_grilla_clientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla_clientes->CreateGrid( 5, 5 );
	m_grilla_clientes->EnableEditing( true );
	m_grilla_clientes->EnableGridLines( true );
	m_grilla_clientes->EnableDragGridSize( false );
	m_grilla_clientes->SetMargins( 0, 0 );

	// Columns
	m_grilla_clientes->EnableDragColMove( false );
	m_grilla_clientes->EnableDragColSize( true );
	m_grilla_clientes->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla_clientes->EnableDragRowSize( true );
	m_grilla_clientes->SetRowLabelSize( 0 );
	m_grilla_clientes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla_clientes->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grilla_clientes, 1, wxEXPAND|wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button8 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer10, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseClientes::~BaseClientes()
{
}

BaseCouchs::BaseCouchs( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("COUCHS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer9->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer9, 0, wxEXPAND, 5 );

	m_grid2 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid2->CreateGrid( 5, 5 );
	m_grid2->EnableEditing( true );
	m_grid2->EnableGridLines( true );
	m_grid2->EnableDragGridSize( false );
	m_grid2->SetMargins( 0, 0 );

	// Columns
	m_grid2->EnableDragColMove( false );
	m_grid2->EnableDragColSize( true );
	m_grid2->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid2->EnableDragRowSize( true );
	m_grid2->SetRowLabelSize( 0 );
	m_grid2->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid2->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grid2, 1, wxEXPAND|wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button8 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer10, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseCouchs::~BaseCouchs()
{
}

BaseClientesAgregar::BaseClientesAgregar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("REGISTRO CLIENTE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer21->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer22->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_textCtrl6, 1, wxALL, 5 );


	bSizer21->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer221->Add( m_staticText131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_textCtrl61, 1, wxALL, 5 );


	bSizer21->Add( bSizer221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2211;
	bSizer2211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1311 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311->Wrap( -1 );
	bSizer2211->Add( m_staticText1311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl611 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2211->Add( m_textCtrl611, 1, wxALL, 5 );


	bSizer21->Add( bSizer2211, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22111;
	bSizer22111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13111 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13111->Wrap( -1 );
	bSizer22111->Add( m_staticText13111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6111 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22111->Add( m_textCtrl6111, 1, wxALL, 5 );


	bSizer21->Add( bSizer22111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22112;
	bSizer22112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13112 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13112->Wrap( -1 );
	bSizer22112->Add( m_staticText13112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6112 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22112->Add( m_textCtrl6112, 1, wxALL, 5 );


	bSizer21->Add( bSizer22112, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22113;
	bSizer22113 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13113 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13113->Wrap( -1 );
	bSizer22113->Add( m_staticText13113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6113 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22113->Add( m_textCtrl6113, 1, wxALL, 5 );


	bSizer21->Add( bSizer22113, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22114;
	bSizer22114 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13114 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13114->Wrap( -1 );
	bSizer22114->Add( m_staticText13114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6114 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22114->Add( m_textCtrl6114, 1, wxALL, 5 );


	bSizer21->Add( bSizer22114, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221141;
	bSizer221141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131141 = new wxStaticText( this, wxID_ANY, wxT("Telefono #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131141->Wrap( -1 );
	bSizer221141->Add( m_staticText131141, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61141 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221141->Add( m_textCtrl61141, 1, wxALL, 5 );


	bSizer21->Add( bSizer221141, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221142;
	bSizer221142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131142 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131142->Wrap( -1 );
	bSizer221142->Add( m_staticText131142, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61142 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl61142, 1, wxALL, 5 );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer221142->Add( m_staticText53, 0, wxALL, 5 );

	m_textCtrl43 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl43, 1, wxALL, 5 );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer221142->Add( m_staticText54, 0, wxALL, 5 );

	m_textCtrl44 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl44, 1, wxALL, 5 );


	bSizer21->Add( bSizer221142, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button24, 0, wxALL|wxALIGN_BOTTOM, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button23, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer21->Add( bSizer76, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer21 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseClientesAgregar::~BaseClientesAgregar()
{
}

BaseCouchsAgregar::BaseCouchsAgregar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("REGISTRO COUCH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer21->Add( m_staticText12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer22->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_textCtrl6, 1, wxALL, 5 );


	bSizer21->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer221->Add( m_staticText131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_textCtrl61, 1, wxALL, 5 );


	bSizer21->Add( bSizer221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2211;
	bSizer2211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1311 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311->Wrap( -1 );
	bSizer2211->Add( m_staticText1311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl611 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2211->Add( m_textCtrl611, 1, wxALL, 5 );


	bSizer21->Add( bSizer2211, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22111;
	bSizer22111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13111 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13111->Wrap( -1 );
	bSizer22111->Add( m_staticText13111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6111 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22111->Add( m_textCtrl6111, 1, wxALL, 5 );


	bSizer21->Add( bSizer22111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22112;
	bSizer22112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13112 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13112->Wrap( -1 );
	bSizer22112->Add( m_staticText13112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6112 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22112->Add( m_textCtrl6112, 1, wxALL, 5 );


	bSizer21->Add( bSizer22112, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22113;
	bSizer22113 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13113 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13113->Wrap( -1 );
	bSizer22113->Add( m_staticText13113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6113 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22113->Add( m_textCtrl6113, 1, wxALL, 5 );


	bSizer21->Add( bSizer22113, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22114;
	bSizer22114 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13114 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13114->Wrap( -1 );
	bSizer22114->Add( m_staticText13114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6114 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22114->Add( m_textCtrl6114, 1, wxALL, 5 );


	bSizer21->Add( bSizer22114, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221141;
	bSizer221141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131141 = new wxStaticText( this, wxID_ANY, wxT("CBU:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131141->Wrap( -1 );
	bSizer221141->Add( m_staticText131141, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61141 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221141->Add( m_textCtrl61141, 1, wxALL, 5 );


	bSizer21->Add( bSizer221141, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221143;
	bSizer221143 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131143 = new wxStaticText( this, wxID_ANY, wxT("Alias:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131143->Wrap( -1 );
	bSizer221143->Add( m_staticText131143, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61143 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221143->Add( m_textCtrl61143, 1, wxALL, 5 );


	bSizer21->Add( bSizer221143, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221142;
	bSizer221142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131142 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131142->Wrap( -1 );
	bSizer221142->Add( m_staticText131142, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl61142 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl61142, 1, wxALL, 5 );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer221142->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl43 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl43, 1, wxALL, 5 );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer221142->Add( m_staticText54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl44 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_textCtrl44, 1, wxALL, 5 );


	bSizer21->Add( bSizer221142, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button24, 0, wxALL, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button23, 0, wxALL, 5 );


	bSizer21->Add( bSizer76, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer21 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseCouchsAgregar::~BaseCouchsAgregar()
{
}
