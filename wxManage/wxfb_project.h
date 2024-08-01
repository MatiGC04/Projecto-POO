///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/choice.h>
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class BasePresentacion
///////////////////////////////////////////////////////////////////////////////
class BasePresentacion : public wxFrame
{
	private:

	protected:
		wxStaticBitmap* m_bitmap1;
		wxStaticBitmap* m_bitmap2;
		wxStaticBitmap* m_bitmap3;
		wxStaticBitmap* m_bitmap4;
		wxButton* m_button2;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;

		// Virtual event handlers, override them in your derived class
		virtual void ClickClientes( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCouchs( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickPlanes( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickSuscripciones( wxCommandEvent& event ) { event.Skip(); }


	public:

		BasePresentacion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 906,368 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BasePresentacion();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseClientes
///////////////////////////////////////////////////////////////////////////////
class BaseClientes : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_buscar;
		wxButton* m_button50;
		wxGrid* m_grilla_clientes;
		wxButton* m_button33;
		wxButton* m_button9;
		wxButton* m_button10;
		wxButton* m_button8;

		// Virtual event handlers, override them in your derived class
		virtual void ClickTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickFila( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickColumna( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickSalirClientes( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseClientes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 660,472 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseClientes();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseCouchs
///////////////////////////////////////////////////////////////////////////////
class BaseCouchs : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_buscar;
		wxButton* m_button7;
		wxGrid* m_grilla_couchs;
		wxButton* m_button33;
		wxButton* m_button9;
		wxButton* m_button10;
		wxButton* m_button8;

		// Virtual event handlers, override them in your derived class
		virtual void ClickTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickFila( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickColumna( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickSalirCouchs( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseCouchs( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 482,455 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseCouchs();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BasePlan
///////////////////////////////////////////////////////////////////////////////
class BasePlan : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxChoice* m_desplegable;
		wxBitmapButton* m_bpButton21;
		wxBitmapButton* m_bpButton11;
		wxButton* m_precio;
		wxTextCtrl* m_textCtrl291;
		wxButton* m_button201;
		wxStaticText* m_staticText34;
		wxStaticText* m_staticText35;
		wxStaticText* m_staticText50;
		wxGrid* m_grilla;
		wxButton* m_button23;
		wxButton* m_button22;
		wxButton* m_agregar_couch;

		// Virtual event handlers, override them in your derived class
		virtual void CambioSeleccion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonPrecio( wxCommandEvent& event ) { event.Skip(); }
		virtual void AgregarCouchToPlan( wxCommandEvent& event ) { event.Skip(); }


	public:

		BasePlan( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 686,430 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BasePlan();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseSus
///////////////////////////////////////////////////////////////////////////////
class BaseSus : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxGrid* m_grid7;
		wxButton* m_button28;
		wxButton* m_button29;
		wxButton* m_button30;

	public:

		BaseSus( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseSus();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseClientesAgregar
///////////////////////////////////////////////////////////////////////////////
class BaseClientesAgregar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_nombre;
		wxStaticText* m_staticText131;
		wxTextCtrl* m_apellido;
		wxStaticText* m_staticText1311;
		wxTextCtrl* m_DNI;
		wxStaticText* m_staticText13111;
		wxTextCtrl* m_sexo;
		wxStaticText* m_staticText13112;
		wxTextCtrl* m_mail;
		wxStaticText* m_staticText13113;
		wxTextCtrl* m_telefono;
		wxStaticText* m_staticText132;
		wxTextCtrl* m_localidad;
		wxStaticText* m_staticText13114;
		wxTextCtrl* m_direccion;
		wxStaticText* m_staticText131141;
		wxTextCtrl* m_telefono2;
		wxStaticText* m_staticText131142;
		wxTextCtrl* m_dia;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_mes;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_anio;
		wxButton* m_button24;
		wxButton* m_button23;

		// Virtual event handlers, override them in your derived class
		virtual void ClickCancelarRegistro( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarRegistro( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseClientesAgregar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 690,450 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseClientesAgregar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseCouchsAgregar
///////////////////////////////////////////////////////////////////////////////
class BaseCouchsAgregar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_nombre_ch;
		wxStaticText* m_staticText131;
		wxTextCtrl* m_apellido_ch;
		wxStaticText* m_staticText1311;
		wxTextCtrl* m_DNI_ch;
		wxStaticText* m_staticText13111;
		wxTextCtrl* m_sexo_ch;
		wxStaticText* m_staticText13112;
		wxTextCtrl* m_mail_ch;
		wxStaticText* m_staticText13113;
		wxTextCtrl* m_telefono_ch;
		wxStaticText* m_staticText13114;
		wxTextCtrl* m_direccion_ch;
		wxStaticText* m_staticText1311411;
		wxTextCtrl* m_localidad_ch;
		wxStaticText* m_staticText131141;
		wxTextCtrl* m_CBU;
		wxStaticText* m_staticText131143;
		wxTextCtrl* m_alias;
		wxStaticText* m_staticText131142;
		wxTextCtrl* m_dia_ch;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_mes_ch;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_anio_ch;
		wxButton* m_button24;
		wxButton* m_button23;

		// Virtual event handlers, override them in your derived class
		virtual void ClickCancelarRegistro( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarRegistro( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseCouchsAgregar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 613,494 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseCouchsAgregar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BasePlanAgregar_P
///////////////////////////////////////////////////////////////////////////////
class BasePlanAgregar_P : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_textCtrl31;
		wxStaticText* m_staticText37;
		wxTextCtrl* m_textCtrl32;
		wxGrid* m_grid5;
		wxButton* m_button24;
		wxButton* m_button25;

	public:

		BasePlanAgregar_P( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BasePlanAgregar_P();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BasePlanAgregar_Couch
///////////////////////////////////////////////////////////////////////////////
class BasePlanAgregar_Couch : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_buscar;
		wxButton* m_button7;
		wxGrid* m_grilla;
		wxButton* m_button10;
		wxButton* m_button8;

		// Virtual event handlers, override them in your derived class
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickFila( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickColumna( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BasePlanAgregar_Couch( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 496,350 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BasePlanAgregar_Couch();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog5
///////////////////////////////////////////////////////////////////////////////
class MyDialog5 : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxStaticText* m_staticText39;
		wxChoice* m_choice3;
		wxStaticText* m_staticText391;
		wxChoice* m_choice31;
		wxStaticText* m_staticText3911;
		wxTextCtrl* m_textCtrl33;
		wxButton* m_button29;
		wxButton* m_button30;

	public:

		MyDialog5( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialog5();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BasePlanPrecio
///////////////////////////////////////////////////////////////////////////////
class BasePlanPrecio : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText45;
		wxTextCtrl* m_precio;
		wxButton* buttonxd;
		wxButton* button;

		// Virtual event handlers, override them in your derived class
		virtual void ClickPrecioCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarPrecio( wxCommandEvent& event ) { event.Skip(); }


	public:

		BasePlanPrecio( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 325,144 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BasePlanPrecio();

};

