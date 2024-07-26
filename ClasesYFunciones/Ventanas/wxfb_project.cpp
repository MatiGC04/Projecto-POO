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
	this->SetSizeHints( wxSize( 940,450 ), wxSize( 940,450 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_bpButton1 = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200,200 ), wxBU_AUTODRAW|0 );
	m_bpButton1->SetMinSize( wxSize( 200,200 ) );
	m_bpButton1->SetMaxSize( wxSize( 200,200 ) );

	bSizer4->Add( m_bpButton1, 0, wxALL, 5 );

	m_bpButton11 = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200,200 ), wxBU_AUTODRAW|0 );
	m_bpButton11->SetMinSize( wxSize( 200,200 ) );
	m_bpButton11->SetMaxSize( wxSize( 200,200 ) );

	bSizer4->Add( m_bpButton11, 0, wxALL, 5 );

	m_bpButton111 = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200,200 ), wxBU_AUTODRAW|0 );
	m_bpButton111->SetMinSize( wxSize( 200,200 ) );
	m_bpButton111->SetMaxSize( wxSize( 200,200 ) );

	bSizer4->Add( m_bpButton111, 0, wxALL, 5 );

	m_bpButton1111 = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200,200 ), wxBU_AUTODRAW|0 );
	m_bpButton1111->SetMinSize( wxSize( 200,200 ) );
	m_bpButton1111->SetMaxSize( wxSize( 200,200 ) );

	bSizer4->Add( m_bpButton1111, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_button2->SetMinSize( wxSize( 200,-1 ) );
	m_button2->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button2, 0, wxALL, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Couchs"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_button23->SetMinSize( wxSize( 200,-1 ) );
	m_button23->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button23, 0, wxALL, 5 );

	m_button22 = new wxButton( this, wxID_ANY, wxT("Planes"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_button22->SetMinSize( wxSize( 200,-1 ) );
	m_button22->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button22, 0, wxALL, 5 );

	m_button21 = new wxButton( this, wxID_ANY, wxT("Suscripciones"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_button21->SetMinSize( wxSize( 200,-1 ) );
	m_button21->SetMaxSize( wxSize( 200,-1 ) );

	bSizer3->Add( m_button21, 0, wxALL, 5 );


	bSizer2->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );
}

BasePresentacion::~BasePresentacion()
{
}

BaseClientes::BaseClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer6->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button23, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer5->Add( bSizer6, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_grid1 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 0, 4 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->SetColSize( 0, 239 );
	m_grid1->SetColSize( 1, 235 );
	m_grid1->SetColSize( 2, 183 );
	m_grid1->SetColSize( 3, 288 );
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelValue( 0, wxT("Nombre y apellido") );
	m_grid1->SetColLabelValue( 1, wxT("DNI") );
	m_grid1->SetColLabelValue( 2, wxT("Fecha de pago") );
	m_grid1->SetColLabelValue( 3, wxT("Telefono de emergencias") );
	m_grid1->SetColLabelValue( 4, wxEmptyString );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 0 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( m_grid1, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button24, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button25 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button25, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button26 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer5->Add( bSizer8, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer5 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseClientes::~BaseClientes()
{
}

BaseAgregarCliente::BaseAgregarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("REGISTRO CLIENTE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL, 5 );


	bSizer9->Add( bSizer10, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer12->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer121->Add( m_staticText51, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_textCtrl21, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer121, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer122;
	bSizer122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	bSizer122->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl22 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer122->Add( m_textCtrl22, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer122, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer123->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl23 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer123->Add( m_textCtrl23, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer123, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer124->Add( m_staticText54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl24 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer124->Add( m_textCtrl24, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer124, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	bSizer125->Add( m_staticText55, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl25 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer125->Add( m_textCtrl25, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer125, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer126->Add( m_staticText56, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl26 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer126->Add( m_textCtrl26, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer126, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Telefono(eme):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer127->Add( m_staticText57, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl27 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer127->Add( m_textCtrl27, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer127, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText58 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimieto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	bSizer128->Add( m_staticText58, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl28 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl28, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer128->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl14 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl14, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer128->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl15 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl15, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer128, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	m_button27 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_button27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button28 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_button28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer33, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer9 );
	this->Layout();
	bSizer9->Fit( this );

	this->Centre( wxBOTH );
}

BaseAgregarCliente::~BaseAgregarCliente()
{
}

BaseAgregarCouch::BaseAgregarCouch( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("REGISTRO COUCH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL, 5 );


	bSizer9->Add( bSizer10, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer12->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer121->Add( m_staticText51, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_textCtrl21, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer121, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer122;
	bSizer122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	bSizer122->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl22 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer122->Add( m_textCtrl22, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer122, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer123->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl23 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer123->Add( m_textCtrl23, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer123, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer124->Add( m_staticText54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl24 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer124->Add( m_textCtrl24, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer124, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	bSizer125->Add( m_staticText55, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl25 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer125->Add( m_textCtrl25, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer125, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer126->Add( m_staticText56, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl26 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer126->Add( m_textCtrl26, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer126, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Alias:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer127->Add( m_staticText57, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl27 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer127->Add( m_textCtrl27, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer127, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1271;
	bSizer1271 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText571 = new wxStaticText( this, wxID_ANY, wxT("CBU:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText571->Wrap( -1 );
	bSizer1271->Add( m_staticText571, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl271 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1271->Add( m_textCtrl271, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer1271, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText58 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimieto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	bSizer128->Add( m_staticText58, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl28 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl28, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer128->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl14 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl14, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer128->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl15 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_textCtrl15, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer128, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	m_button27 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_button27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button28 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_button28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( bSizer33, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer9 );
	this->Layout();
	bSizer9->Fit( this );

	this->Centre( wxBOTH );
}

BaseAgregarCouch::~BaseAgregarCouch()
{
}
