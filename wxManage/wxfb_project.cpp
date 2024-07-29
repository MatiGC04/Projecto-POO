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

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Clientes2.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetMinSize( wxSize( 200,200 ) );
	m_bitmap1->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Coachs2.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMinSize( wxSize( 200,200 ) );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap2, 0, wxALL, 5 );

	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Planes.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap3->SetMinSize( wxSize( 200,200 ) );
	m_bitmap3->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap3, 0, wxALL, 5 );

	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Suscripciones.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
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

BaseClientes::BaseClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("CLIENTES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer9->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer9->Add( m_buscar, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer9, 0, wxEXPAND, 5 );

	m_grilla_clientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla_clientes->CreateGrid( 0, 5 );
	m_grilla_clientes->EnableEditing( false );
	m_grilla_clientes->EnableGridLines( true );
	m_grilla_clientes->EnableDragGridSize( false );
	m_grilla_clientes->SetMargins( 0, 0 );

	// Columns
	m_grilla_clientes->SetColSize( 0, 145 );
	m_grilla_clientes->SetColSize( 1, 74 );
	m_grilla_clientes->SetColSize( 2, 132 );
	m_grilla_clientes->SetColSize( 3, 136 );
	m_grilla_clientes->SetColSize( 4, 153 );
	m_grilla_clientes->EnableDragColMove( false );
	m_grilla_clientes->EnableDragColSize( true );
	m_grilla_clientes->SetColLabelValue( 0, wxT("Apellido y nombre") );
	m_grilla_clientes->SetColLabelValue( 1, wxT("DNI") );
	m_grilla_clientes->SetColLabelValue( 2, wxT("Email") );
	m_grilla_clientes->SetColLabelValue( 3, wxT("Planes suscritos") );
	m_grilla_clientes->SetColLabelValue( 4, wxT("Telefono de emergencias") );
	m_grilla_clientes->SetColLabelSize( 30 );
	m_grilla_clientes->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla_clientes->EnableDragRowSize( true );
	m_grilla_clientes->SetRowLabelSize( 1 );
	m_grilla_clientes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla_clientes->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grilla_clientes, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_button33 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer47->Add( m_button33, 0, wxALL, 5 );


	bSizer10->Add( bSizer47, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button8 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer48, 0, 0, 5 );


	bSizer8->Add( bSizer10, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( BaseClientes::ClickTamanio ) );
	m_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseClientes::EnterBuscar ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickBuscar ), NULL, this );
	m_grilla_clientes->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseClientes::DobleClickFila ), NULL, this );
	m_grilla_clientes->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientes::ClickFila ), NULL, this );
	m_button33->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickSalirClientes ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEditar ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEliminar ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickAgregar ), NULL, this );
}

BaseClientes::~BaseClientes()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( BaseClientes::ClickTamanio ) );
	m_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseClientes::EnterBuscar ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickBuscar ), NULL, this );
	m_grilla_clientes->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseClientes::DobleClickFila ), NULL, this );
	m_grilla_clientes->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientes::ClickFila ), NULL, this );
	m_button33->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickSalirClientes ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEditar ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEliminar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickAgregar ), NULL, this );

}

BaseCouchs::BaseCouchs( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
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

	m_grilla_couchs = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla_couchs->CreateGrid( 5, 5 );
	m_grilla_couchs->EnableEditing( true );
	m_grilla_couchs->EnableGridLines( true );
	m_grilla_couchs->EnableDragGridSize( false );
	m_grilla_couchs->SetMargins( 0, 0 );

	// Columns
	m_grilla_couchs->SetColSize( 0, 152 );
	m_grilla_couchs->SetColSize( 1, 80 );
	m_grilla_couchs->SetColSize( 2, 80 );
	m_grilla_couchs->SetColSize( 3, 80 );
	m_grilla_couchs->SetColSize( 4, 80 );
	m_grilla_couchs->EnableDragColMove( false );
	m_grilla_couchs->EnableDragColSize( true );
	m_grilla_couchs->SetColLabelValue( 0, wxT("Nombre y Apellido") );
	m_grilla_couchs->SetColLabelValue( 1, wxT("DNI") );
	m_grilla_couchs->SetColLabelValue( 2, wxT("Email") );
	m_grilla_couchs->SetColLabelValue( 3, wxT("CBU") );
	m_grilla_couchs->SetColLabelValue( 4, wxT("Alias") );
	m_grilla_couchs->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla_couchs->EnableDragRowSize( true );
	m_grilla_couchs->SetRowLabelSize( 0 );
	m_grilla_couchs->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla_couchs->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grilla_couchs, 1, wxALL|wxEXPAND|wxTOP, 5 );

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

	m_nombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_nombre, 1, wxALL, 5 );


	bSizer21->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer221->Add( m_staticText131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_apellido, 1, wxALL, 5 );


	bSizer21->Add( bSizer221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2211;
	bSizer2211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1311 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311->Wrap( -1 );
	bSizer2211->Add( m_staticText1311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2211->Add( m_DNI, 1, wxALL, 5 );


	bSizer21->Add( bSizer2211, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22111;
	bSizer22111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13111 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13111->Wrap( -1 );
	bSizer22111->Add( m_staticText13111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_sexo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22111->Add( m_sexo, 1, wxALL, 5 );


	bSizer21->Add( bSizer22111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22112;
	bSizer22112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13112 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13112->Wrap( -1 );
	bSizer22112->Add( m_staticText13112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_mail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22112->Add( m_mail, 1, wxALL, 5 );


	bSizer21->Add( bSizer22112, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22113;
	bSizer22113 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13113 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13113->Wrap( -1 );
	bSizer22113->Add( m_staticText13113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_telefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22113->Add( m_telefono, 1, wxALL, 5 );


	bSizer21->Add( bSizer22113, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer222;
	bSizer222 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText132 = new wxStaticText( this, wxID_ANY, wxT("Localidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText132->Wrap( -1 );
	bSizer222->Add( m_staticText132, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_localidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer222->Add( m_localidad, 1, wxALL, 5 );


	bSizer21->Add( bSizer222, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22114;
	bSizer22114 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13114 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13114->Wrap( -1 );
	bSizer22114->Add( m_staticText13114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_direccion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22114->Add( m_direccion, 1, wxALL, 5 );


	bSizer21->Add( bSizer22114, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221141;
	bSizer221141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131141 = new wxStaticText( this, wxID_ANY, wxT("Telefono #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131141->Wrap( -1 );
	bSizer221141->Add( m_staticText131141, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_telefono2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221141->Add( m_telefono2, 1, wxALL, 5 );


	bSizer21->Add( bSizer221141, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221142;
	bSizer221142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131142 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131142->Wrap( -1 );
	bSizer221142->Add( m_staticText131142, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_dia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_dia, 1, wxALL, 5 );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer221142->Add( m_staticText53, 0, wxALL, 5 );

	m_mes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_mes, 1, wxALL, 5 );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer221142->Add( m_staticText54, 0, wxALL, 5 );

	m_anio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_anio, 1, wxALL, 5 );


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

	// Connect Events
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesAgregar::ClickCancelarRegistro ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesAgregar::ClickAceptarRegistro ), NULL, this );
}

BaseClientesAgregar::~BaseClientesAgregar()
{
	// Disconnect Events
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesAgregar::ClickCancelarRegistro ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesAgregar::ClickAceptarRegistro ), NULL, this );

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
