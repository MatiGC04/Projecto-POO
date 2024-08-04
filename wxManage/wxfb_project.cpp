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
	this->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Nuevos logos/Clientes.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetMinSize( wxSize( 200,200 ) );
	m_bitmap1->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Nuevos logos/Couch.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMinSize( wxSize( 200,200 ) );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap2, 0, wxALL, 5 );

	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Nuevos logos/plan.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap3->SetMinSize( wxSize( 200,200 ) );
	m_bitmap3->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_bitmap3, 0, wxALL, 5 );

	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../Logos/Nuevos logos/sus.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
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
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

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

	m_button50 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button50, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


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
	m_grilla_clientes->SetLabelBackgroundColour( wxColour( 151, 210, 187 ) );

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
	m_button50->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickBuscar ), NULL, this );
	m_grilla_clientes->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseClientes::DobleClickFila ), NULL, this );
	m_grilla_clientes->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientes::ClickColumna ), NULL, this );
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
	m_button50->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickBuscar ), NULL, this );
	m_grilla_clientes->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseClientes::DobleClickFila ), NULL, this );
	m_grilla_clientes->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientes::ClickColumna ), NULL, this );
	m_button33->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickSalirClientes ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEditar ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickEliminar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientes::ClickAgregar ), NULL, this );

}

BaseCouchs::BaseCouchs( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

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

	m_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer9->Add( m_buscar, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer9, 0, wxEXPAND, 5 );

	m_grilla_couchs = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla_couchs->CreateGrid( 0, 4 );
	m_grilla_couchs->EnableEditing( false );
	m_grilla_couchs->EnableGridLines( true );
	m_grilla_couchs->EnableDragGridSize( false );
	m_grilla_couchs->SetMargins( 0, 0 );

	// Columns
	m_grilla_couchs->SetColSize( 0, 152 );
	m_grilla_couchs->SetColSize( 1, 79 );
	m_grilla_couchs->SetColSize( 2, 104 );
	m_grilla_couchs->SetColSize( 3, 128 );
	m_grilla_couchs->EnableDragColMove( false );
	m_grilla_couchs->EnableDragColSize( true );
	m_grilla_couchs->SetColLabelValue( 0, wxT("Nombre y Apellido") );
	m_grilla_couchs->SetColLabelValue( 1, wxT("DNI") );
	m_grilla_couchs->SetColLabelValue( 2, wxT("Planes (resp)") );
	m_grilla_couchs->SetColLabelValue( 3, wxT("Telefono") );
	m_grilla_couchs->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla_couchs->EnableDragRowSize( true );
	m_grilla_couchs->SetRowLabelSize( 0 );
	m_grilla_couchs->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	m_grilla_couchs->SetLabelBackgroundColour( wxColour( 151, 210, 187 ) );

	// Cell Defaults
	m_grilla_couchs->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grilla_couchs, 1, wxALL|wxEXPAND|wxTOP, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_button33 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer47->Add( m_button33, 0, wxALL, 5 );


	bSizer10->Add( bSizer47, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer39->Add( m_button9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer39->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button8 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer39->Add( m_button8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer39, 0, 0, 5 );


	bSizer8->Add( bSizer10, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( BaseCouchs::ClickTamanio ) );
	m_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseCouchs::EnterBuscar ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickBuscar ), NULL, this );
	m_grilla_couchs->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseCouchs::DobleClickFila ), NULL, this );
	m_grilla_couchs->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseCouchs::ClickColumna ), NULL, this );
	m_button33->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickSalirCouchs ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickEditar ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickEliminar ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickAgregar ), NULL, this );
}

BaseCouchs::~BaseCouchs()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( BaseCouchs::ClickTamanio ) );
	m_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseCouchs::EnterBuscar ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickBuscar ), NULL, this );
	m_grilla_couchs->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BaseCouchs::DobleClickFila ), NULL, this );
	m_grilla_couchs->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseCouchs::ClickColumna ), NULL, this );
	m_button33->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickSalirCouchs ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickEditar ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickEliminar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchs::ClickAgregar ), NULL, this );

}

BasePlan::BasePlan( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("PLANES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	m_staticText38->SetForegroundColour( wxColour( 0, 0, 0 ) );

	bSizer61->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer39->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );

	wxArrayString m_desplegableChoices;
	m_desplegable = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,25 ), m_desplegableChoices, 0 );
	m_desplegable->SetSelection( 0 );
	m_desplegable->SetMinSize( wxSize( -1,25 ) );
	m_desplegable->SetMaxSize( wxSize( -1,25 ) );

	bSizer70->Add( m_desplegable, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_BOTTOM, 5 );

	borrar = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 25,25 ), wxBU_AUTODRAW|0 );

	borrar->SetBitmap( wxBitmap( wxT("../Logos/eliminar.png"), wxBITMAP_TYPE_ANY ) );
	borrar->SetMinSize( wxSize( 25,25 ) );
	borrar->SetMaxSize( wxSize( 25,25 ) );

	bSizer70->Add( borrar, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_bpButton11 = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 25,25 ), wxBU_AUTODRAW|0 );

	m_bpButton11->SetBitmap( wxBitmap( wxT("../Logos/agregar.png"), wxBITMAP_TYPE_ANY ) );
	m_bpButton11->SetMinSize( wxSize( 25,25 ) );
	m_bpButton11->SetMaxSize( wxSize( 25,25 ) );

	bSizer70->Add( m_bpButton11, 0, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_precio = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer70->Add( m_precio, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );


	bSizer40->Add( bSizer70, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );

	m_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,25 ), wxTE_PROCESS_ENTER );
	m_buscar->SetMinSize( wxSize( -1,25 ) );
	m_buscar->SetMaxSize( wxSize( -1,25 ) );

	bSizer68->Add( m_buscar, 1, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_button201 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,27 ), 0 );

	m_button201->SetBitmap( wxBitmap( wxT("../Logos/buscar.png"), wxBITMAP_TYPE_ANY ) );
	m_button201->SetMinSize( wxSize( 50,27 ) );
	m_button201->SetMaxSize( wxSize( 50,27 ) );

	bSizer68->Add( m_button201, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );


	bSizer40->Add( bSizer68, 1, wxEXPAND, 5 );


	bSizer39->Add( bSizer40, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Rutina base"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	m_staticText34->SetForegroundColour( wxColour( 0, 0, 0 ) );

	bSizer42->Add( m_staticText34, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer41->Add( bSizer42, 1, 0, 5 );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Couchs registrados"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	m_staticText35->SetForegroundColour( wxColour( 0, 0, 0 ) );

	bSizer43->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer41->Add( bSizer43, 1, 0, 5 );


	bSizer39->Add( bSizer41, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );

	m_rutina = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer45->Add( m_rutina, 1, wxALL|wxEXPAND, 5 );


	bSizer44->Add( bSizer45, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );

	m_grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla->CreateGrid( 0, 2 );
	m_grilla->EnableEditing( false );
	m_grilla->EnableGridLines( true );
	m_grilla->EnableDragGridSize( false );
	m_grilla->SetMargins( 0, 0 );

	// Columns
	m_grilla->SetColSize( 0, 209 );
	m_grilla->SetColSize( 1, 170 );
	m_grilla->EnableDragColMove( false );
	m_grilla->EnableDragColSize( true );
	m_grilla->SetColLabelValue( 0, wxT("Nombre y apellido") );
	m_grilla->SetColLabelValue( 1, wxT("DNI") );
	m_grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla->EnableDragRowSize( true );
	m_grilla->SetRowLabelSize( 0 );
	m_grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	m_grilla->SetLabelBackgroundColour( wxColour( 152, 210, 187 ) );

	// Cell Defaults
	m_grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer47->Add( m_grilla, 1, wxALL|wxEXPAND, 5 );


	bSizer44->Add( bSizer47, 1, wxEXPAND, 5 );


	bSizer39->Add( bSizer44, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Guardar rutina"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_button23, 0, wxALL, 5 );


	bSizer48->Add( bSizer51, 1, 0, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	m_button22 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_button22, 0, wxALL, 5 );

	m_agregar_couch = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_agregar_couch, 0, wxALL, 5 );


	bSizer48->Add( bSizer49, 0, 0, 5 );


	bSizer39->Add( bSizer48, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer39 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( BasePlan::CambiarTamanio ) );
	m_desplegable->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BasePlan::CambioSeleccion ), NULL, this );
	borrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBorrarPlan ), NULL, this );
	m_bpButton11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickCrearPlan ), NULL, this );
	m_precio->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBotonPrecio ), NULL, this );
	m_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BasePlan::EnterBuscar ), NULL, this );
	m_button201->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBuscar ), NULL, this );
	m_grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BasePlan::ClickColumna ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickGuardarRutina ), NULL, this );
	m_button22->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickEliminar ), NULL, this );
	m_agregar_couch->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::AgregarCouchToPlan ), NULL, this );
}

BasePlan::~BasePlan()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( BasePlan::CambiarTamanio ) );
	m_desplegable->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BasePlan::CambioSeleccion ), NULL, this );
	borrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBorrarPlan ), NULL, this );
	m_bpButton11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickCrearPlan ), NULL, this );
	m_precio->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBotonPrecio ), NULL, this );
	m_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BasePlan::EnterBuscar ), NULL, this );
	m_button201->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickBuscar ), NULL, this );
	m_grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BasePlan::ClickColumna ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickGuardarRutina ), NULL, this );
	m_button22->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::ClickEliminar ), NULL, this );
	m_agregar_couch->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlan::AgregarCouchToPlan ), NULL, this );

}

BaseSuscripciones::BaseSuscripciones( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("SUSCRIPCIONES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	m_staticText38->SetForegroundColour( wxColour( 0, 0, 0 ) );

	bSizer61->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer58->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetForegroundColour( wxColour( 0, 0, 0 ) );

	bSizer9->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer9->Add( m_buscar, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer58->Add( bSizer9, 0, wxEXPAND, 5 );

	m_grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla->CreateGrid( 0, 7 );
	m_grilla->EnableEditing( false );
	m_grilla->EnableGridLines( true );
	m_grilla->EnableDragGridSize( false );
	m_grilla->SetMargins( 0, 0 );

	// Columns
	m_grilla->SetColSize( 0, 162 );
	m_grilla->SetColSize( 1, 91 );
	m_grilla->SetColSize( 2, 152 );
	m_grilla->SetColSize( 3, 107 );
	m_grilla->SetColSize( 4, 100 );
	m_grilla->SetColSize( 5, 90 );
	m_grilla->SetColSize( 6, 101 );
	m_grilla->EnableDragColMove( false );
	m_grilla->EnableDragColSize( true );
	m_grilla->SetColLabelValue( 0, wxT("Nombre y Apellido (cl)") );
	m_grilla->SetColLabelValue( 1, wxT("DNI (cl)") );
	m_grilla->SetColLabelValue( 2, wxT("Nombre y apellido (ch)") );
	m_grilla->SetColLabelValue( 3, wxT("DNI (ch)") );
	m_grilla->SetColLabelValue( 4, wxT("Plan ") );
	m_grilla->SetColLabelValue( 5, wxT("Fecha de Pago") );
	m_grilla->SetColLabelValue( 6, wxT("Fecha de Venc.") );
	m_grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla->EnableDragRowSize( true );
	m_grilla->SetRowLabelSize( 0 );
	m_grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	m_grilla->SetLabelBackgroundColour( wxColour( 151, 210, 187 ) );

	// Cell Defaults
	m_grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer58->Add( m_grilla, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_button28 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_button28, 0, wxALL, 5 );

	m_button29 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_button29, 0, wxALL, 5 );

	m_button30 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_button30, 0, wxALL, 5 );


	bSizer58->Add( bSizer59, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer58 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseSuscripciones::EnterBuscar ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickBuscar ), NULL, this );
	m_button29->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickAgregar ), NULL, this );
	m_button30->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickEliminar ), NULL, this );
}

BaseSuscripciones::~BaseSuscripciones()
{
	// Disconnect Events
	m_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BaseSuscripciones::EnterBuscar ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickBuscar ), NULL, this );
	m_button29->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickAgregar ), NULL, this );
	m_button30->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripciones::ClickEliminar ), NULL, this );

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

	m_nombre_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_nombre_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer221->Add( m_staticText131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_apellido_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_apellido_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2211;
	bSizer2211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1311 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311->Wrap( -1 );
	bSizer2211->Add( m_staticText1311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DNI_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2211->Add( m_DNI_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer2211, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22111;
	bSizer22111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13111 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13111->Wrap( -1 );
	bSizer22111->Add( m_staticText13111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_sexo_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22111->Add( m_sexo_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer22111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22112;
	bSizer22112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13112 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13112->Wrap( -1 );
	bSizer22112->Add( m_staticText13112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_mail_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22112->Add( m_mail_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer22112, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22113;
	bSizer22113 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13113 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13113->Wrap( -1 );
	bSizer22113->Add( m_staticText13113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_telefono_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22113->Add( m_telefono_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer22113, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22114;
	bSizer22114 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13114 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13114->Wrap( -1 );
	bSizer22114->Add( m_staticText13114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_direccion_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22114->Add( m_direccion_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer22114, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221144;
	bSizer221144 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1311411 = new wxStaticText( this, wxID_ANY, wxT("Localidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311411->Wrap( -1 );
	bSizer221144->Add( m_staticText1311411, 0, wxALL, 5 );

	m_localidad_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221144->Add( m_localidad_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer221144, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221141;
	bSizer221141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131141 = new wxStaticText( this, wxID_ANY, wxT("CBU:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131141->Wrap( -1 );
	bSizer221141->Add( m_staticText131141, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CBU = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221141->Add( m_CBU, 1, wxALL, 5 );


	bSizer21->Add( bSizer221141, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221143;
	bSizer221143 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131143 = new wxStaticText( this, wxID_ANY, wxT("Alias:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131143->Wrap( -1 );
	bSizer221143->Add( m_staticText131143, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_alias = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221143->Add( m_alias, 1, wxALL, 5 );


	bSizer21->Add( bSizer221143, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer221142;
	bSizer221142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131142 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131142->Wrap( -1 );
	bSizer221142->Add( m_staticText131142, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_dia_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_dia_ch, 1, wxALL, 5 );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer221142->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_mes_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_mes_ch, 1, wxALL, 5 );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer221142->Add( m_staticText54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_anio_ch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221142->Add( m_anio_ch, 1, wxALL, 5 );


	bSizer21->Add( bSizer221142, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button24, 0, wxALL, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_button23, 0, wxALL, 5 );


	bSizer21->Add( bSizer76, 1, wxALL|wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer21 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchsAgregar::ClickCancelarRegistro ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchsAgregar::ClickAceptarRegistro ), NULL, this );
}

BaseCouchsAgregar::~BaseCouchsAgregar()
{
	// Disconnect Events
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchsAgregar::ClickCancelarRegistro ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseCouchsAgregar::ClickAceptarRegistro ), NULL, this );

}

BasePlanAgregar_Plan::BasePlanAgregar_Plan( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("Registro Plan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer61->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer52->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer53->Add( m_staticText36, 0, wxALL, 5 );

	m_nombre_plan = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_nombre_plan, 1, wxALL, 5 );


	bSizer52->Add( bSizer53, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("Precio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer54->Add( m_staticText37, 0, wxALL, 5 );

	m_precio_plan = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_precio_plan, 1, wxALL, 5 );


	bSizer52->Add( bSizer54, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	Aceptar = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( Aceptar, 0, wxALL, 5 );

	Cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( Cancelar, 0, wxALL, 5 );


	bSizer52->Add( bSizer55, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer52 );
	this->Layout();
	bSizer52->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	Aceptar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Plan::Boton_aceptar_plan ), NULL, this );
	Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Plan::Boton_cancelar_plan ), NULL, this );
}

BasePlanAgregar_Plan::~BasePlanAgregar_Plan()
{
	// Disconnect Events
	Aceptar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Plan::Boton_aceptar_plan ), NULL, this );
	Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Plan::Boton_cancelar_plan ), NULL, this );

}

BasePlanAgregar_Couch::BasePlanAgregar_Couch( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("COUCHS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	m_grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla->CreateGrid( 0, 4 );
	m_grilla->EnableEditing( false );
	m_grilla->EnableGridLines( true );
	m_grilla->EnableDragGridSize( false );
	m_grilla->SetMargins( 0, 0 );

	// Columns
	m_grilla->SetColSize( 0, 152 );
	m_grilla->SetColSize( 1, 79 );
	m_grilla->SetColSize( 2, 104 );
	m_grilla->SetColSize( 3, 139 );
	m_grilla->EnableDragColMove( false );
	m_grilla->EnableDragColSize( true );
	m_grilla->SetColLabelValue( 0, wxT("Nombre y Apellido") );
	m_grilla->SetColLabelValue( 1, wxT("DNI") );
	m_grilla->SetColLabelValue( 2, wxT("Planes (resp)") );
	m_grilla->SetColLabelValue( 3, wxT("Telefono") );
	m_grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla->EnableDragRowSize( true );
	m_grilla->SetRowLabelSize( 0 );
	m_grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer8->Add( m_grilla, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxHORIZONTAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer126->Add( m_button10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_button8 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer126->Add( m_button8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer10->Add( bSizer126, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer10, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BasePlanAgregar_Couch::DobleClickFila ), NULL, this );
	m_grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BasePlanAgregar_Couch::ClickColumna ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Couch::ClickCancelar ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Couch::ClickAgregar ), NULL, this );
}

BasePlanAgregar_Couch::~BasePlanAgregar_Couch()
{
	// Disconnect Events
	m_grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BasePlanAgregar_Couch::DobleClickFila ), NULL, this );
	m_grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BasePlanAgregar_Couch::ClickColumna ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Couch::ClickCancelar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanAgregar_Couch::ClickAgregar ), NULL, this );

}

BasePlanPrecio::BasePlanPrecio( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer71->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_precio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_precio, 1, wxALL, 5 );


	bSizer70->Add( bSizer71, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxHORIZONTAL );

	buttonxd = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( buttonxd, 0, wxALL|wxALIGN_BOTTOM, 5 );

	button = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( button, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer70->Add( bSizer72, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer70 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	buttonxd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanPrecio::ClickPrecioCancelar ), NULL, this );
	button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanPrecio::ClickAceptarPrecio ), NULL, this );
}

BasePlanPrecio::~BasePlanPrecio()
{
	// Disconnect Events
	buttonxd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanPrecio::ClickPrecioCancelar ), NULL, this );
	button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePlanPrecio::ClickAceptarPrecio ), NULL, this );

}

BaseSuscripcionesAgregar::BaseSuscripcionesAgregar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("Agregar Suscripcion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer61->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer60->Add( bSizer61, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("Planes  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer62->Add( m_staticText39, 0, wxALL, 5 );

	wxArrayString m_planesChoices;
	m_planes = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_planesChoices, 0 );
	m_planes->SetSelection( 0 );
	bSizer62->Add( m_planes, 1, wxALL, 5 );


	bSizer60->Add( bSizer62, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Antes de seleccionar coach ingrese el plan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	bSizer77->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer60->Add( bSizer77, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer621;
	bSizer621 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText391 = new wxStaticText( this, wxID_ANY, wxT("Coachs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText391->Wrap( -1 );
	bSizer621->Add( m_staticText391, 0, wxALL, 5 );

	wxArrayString m_coachsChoices;
	m_coachs = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_coachsChoices, 0 );
	m_coachs->SetSelection( 0 );
	bSizer621->Add( m_coachs, 1, wxALL, 5 );


	bSizer60->Add( bSizer621, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6211;
	bSizer6211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3911 = new wxStaticText( this, wxID_ANY, wxT("Cliente (DNI): "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3911->Wrap( -1 );
	bSizer6211->Add( m_staticText3911, 0, wxALL, 5 );

	m_cliente_DNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6211->Add( m_cliente_DNI, 1, wxALL, 5 );


	bSizer60->Add( bSizer6211, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_button30 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_button30, 0, wxALL, 5 );

	m_button29 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_button29, 0, wxALL, 5 );


	bSizer60->Add( bSizer59, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer60 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_planes->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickDesplegablePlanes ), NULL, this );
	m_coachs->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickDesplegableCoachs ), NULL, this );
	m_button30->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickCancelar ), NULL, this );
	m_button29->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickAceptar ), NULL, this );
}

BaseSuscripcionesAgregar::~BaseSuscripcionesAgregar()
{
	// Disconnect Events
	m_planes->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickDesplegablePlanes ), NULL, this );
	m_coachs->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickDesplegableCoachs ), NULL, this );
	m_button30->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickCancelar ), NULL, this );
	m_button29->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesAgregar::ClickAceptar ), NULL, this );

}

BaseSuscripcionesEditar::BaseSuscripcionesEditar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl36 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer77->Add( m_textCtrl36, 1, wxALL|wxEXPAND, 5 );


	bSizer76->Add( bSizer77, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );

	m_button37 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer78->Add( m_button37, 0, wxALL, 5 );

	m_button38 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer78->Add( m_button38, 0, wxALL, 5 );


	bSizer76->Add( bSizer78, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer76 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesEditar::ClickAceptar ), NULL, this );
	m_button38->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesEditar::ClickCancelar ), NULL, this );
}

BaseSuscripcionesEditar::~BaseSuscripcionesEditar()
{
	// Disconnect Events
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesEditar::ClickAceptar ), NULL, this );
	m_button38->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseSuscripcionesEditar::ClickCancelar ), NULL, this );

}
