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
		
		string ver_nombre(); ///Método para obtener el nombre de la persona
		string ver_apellido(); ///Método para obtener el apellido de la persona
		string ver_email(); ///Método para obtener el correo eleectronico de la persona
		string ver_tel(); ///Método para obtener el número de la persona
		string ver_dir(); ///Método para obtener la dirección de la persona
		string ver_loc(); ///Método para obtener la localidad de la persona
		string ver_sexo(); ///Método para obtener el sexo de la persona
		int ver_diaN(); ///Método para obtener el día de nacimiento de la persona
		int ver_mesN(); ///Método para obtener el mes de nacimiento de la persona
		int ver_anioN(); ///Método para obtener el año de nacimento de la persona
		int ver_edad(); ///Método para obtener la edad de la persona
		int ver_DNI(); ///Método para obtener el DNI de la persona
};

#endif
