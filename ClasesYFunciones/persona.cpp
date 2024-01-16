#include <persona.h>
#include <string>
using namespace std;
Persona::Persona(string nom, string ape, string mail, string sex,string tel, 
				 string loc, int dia, int mes, int anio){
	nombre = nom;
	apellido = ape;
	email = mail;
	sexo = sex; 
	telefono = tel;
	localidad = loc;
	dia_nac = dia;
	mes_nac = mes;
	anio_nac = anio;
}
