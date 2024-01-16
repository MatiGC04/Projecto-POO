#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona{
	string nombre;
	string apellido;
	string email;
	string telefono;
	string direccion;
	string localidad;
	string sexo;
	int dia_nac;
	int mes_nac;
	int anio_nac;
	int edad;
	public:
		Persona(string nom, string ape, string mail, string sex,string tel, string loc, int dia, int mes, int anio);
		
};

#endif
