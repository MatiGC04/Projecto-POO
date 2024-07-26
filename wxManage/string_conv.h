#ifndef STRING_CONV_H
#define STRING_CONV_H
#include <wx/string.h>

/**
* Usualmente en ZinjaI y con std::string, los caracteres se almacenan más o menos,
* según el código ascii (en realidad, según una norma iso-8859-1). En esta forma
* de codificacion, cada caracter se codifica con un solo byte, y entonces solo
* tenemos 255 caracteres diferentes. Cuando queremos poder representar otros
* caracteres como simbolos matematicos, letras con acentos/tildes/diéresis/etc,
* letras griegas/arabicas/chinas/etc... tenemos que pasar a usar otras codificaciones
* mas complejas, donde los caracteres ocupen más de un byte. wx utiliza internamente
* una de estas más complejas (usualmente UTF-8).
*
* Estas funciones que siguen hacen las conversiones necesarias para pasar de una
* a otra codificacion. En ambas coinciden los primeros 127 caracteres (porque la
* tabla ascii original era de 7bits por caracter), pero varian en el resto, que 
* incluye por ejemplo acentos y eñes. Por esto, si no se hace la conversión adecuada,
* la cadena podría parecer vacía.
**/

/// para convertir un c-string, o una constante, a wxString
inline wxString c_to_wx(const char *c_str) { return wxString::From8BitData(c_str); }

/// para convertir un std::string a wxString
inline wxString std_to_wx(const std::string &std_str) { return wxString::From8BitData(std_str.c_str()); }

/// para convertir wxString a std::string
inline std::string wx_to_std(const wxString &wx_str) { return static_cast<const char*>(wx_str.To8BitData()); }

#endif
