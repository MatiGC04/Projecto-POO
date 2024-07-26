///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bmpbuttn.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class BasePresentacion
///////////////////////////////////////////////////////////////////////////////
class BasePresentacion : public wxFrame
{
	private:

	protected:
		wxBitmapButton* m_bpButton1;
		wxBitmapButton* m_bpButton11;
		wxBitmapButton* m_bpButton111;
		wxBitmapButton* m_bpButton1111;
		wxButton* m_button2;
		wxButton* m_button23;
		wxButton* m_button22;
		wxButton* m_button21;

	public:

		BasePresentacion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 940,450 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BasePresentacion();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseClientes
///////////////////////////////////////////////////////////////////////////////
class BaseClientes : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button23;
		wxGrid* m_grid1;
		wxButton* m_button24;
		wxButton* m_button25;
		wxButton* m_button26;

	public:

		BaseClientes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 955,488 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseClientes();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAgregarCliente
///////////////////////////////////////////////////////////////////////////////
class BaseAgregarCliente : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textCtrl22;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_textCtrl23;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_textCtrl24;
		wxStaticText* m_staticText55;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText56;
		wxTextCtrl* m_textCtrl26;
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textCtrl27;
		wxStaticText* m_staticText58;
		wxTextCtrl* m_textCtrl28;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_textCtrl14;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_textCtrl15;
		wxButton* m_button27;
		wxButton* m_button28;

	public:

		BaseAgregarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAgregarCliente();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAgregarCouch
///////////////////////////////////////////////////////////////////////////////
class BaseAgregarCouch : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textCtrl22;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_textCtrl23;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_textCtrl24;
		wxStaticText* m_staticText55;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText56;
		wxTextCtrl* m_textCtrl26;
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textCtrl27;
		wxStaticText* m_staticText571;
		wxTextCtrl* m_textCtrl271;
		wxStaticText* m_staticText58;
		wxTextCtrl* m_textCtrl28;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_textCtrl14;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_textCtrl15;
		wxButton* m_button27;
		wxButton* m_button28;

	public:

		BaseAgregarCouch( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAgregarCouch();

};

