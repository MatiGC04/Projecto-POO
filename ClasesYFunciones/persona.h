#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona{
protected:
	//Datos de una persona
	string nombre; 
	string apellido; 
	string email; 
	string telefono; 
	string direccion; 
	string localidad; 
	string sexo;	
	int DNI; 
	int dia_nac;
	int mes_nac;
	int anio_nac;
	int edad;
public:
		///Constructor de la clase Persona con sus paramentros por defecto
		Persona(string nom = "", string ape = "", string mail = "", string sex = "", 
		string tel = "", string loc = "", int dni = 0, int dia = 0, int mes = 0, int anio = 0); 
		
		string ver_nombre(); ///M�todo para obtener el nombre de la persona
		string ver_apellido(); ///M�todo para obtener el apellido de la persona
		string ver_email(); ///M�todo para obtener el correo eleectronico de la persona
		string ver_tel(); ///M�todo para obtener el n�mero de la persona
		string ver_dir(); ///M�todo para obtener la direcci�n de la persona
		string ver_loc(); ///M�todo para obtener la localidad de la persona
		string ver_sexo(); ///M�todo para obtener el sexo de la persona
		int ver_diaN(); ///M�todo para obtener el d�a de nacimiento de la persona
		int ver_mesN(); ///M�todo para obtener el mes de nacimiento de la persona
		int ver_anioN(); ///M�todo para obtener el a�o de nacimento de la persona
		int ver_edad(); ///M�todo para obtener la edad de la persona
		int ver_DNI(); ///M�todo para obtener el DNI de la persona
};

#endif
