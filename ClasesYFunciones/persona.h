#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "ManejoDeFechas.h"
class persona{
protected:
	//Datos de una persona
	std::string nombre; 
	std::string apellido; 
	std::string email; 
	std::string telefono; 
	std::string direccion; 
	std::string localidad; 
	std::string sexo;	
	int DNI; 
	fecha fecha_nacimiento;
public:
		///Constructor de la clase Persona con sus paramentros por defecto
		persona(std::string nom = "", std::string ape = "", std::string mail = "", std::string sexo = "", 
		std::string tel = "", std::string dir = "", std::string loc = "", int dni = 0, int dia = 0, int mes = 0, int anio = 0); 
		
		std::string ver_nombre(); ///Método para obtener el nombre de la persona
		std::string ver_apellido(); ///Método para obtener el apellido de la persona
		std::string ver_email(); ///Método para obtener el correo eleectronico de la persona
		std::string ver_tel(); ///Método para obtener el número de la persona
		std::string ver_dir(); ///Método para obtener la dirección de la persona
		std::string ver_loc(); ///Método para obtener la localidad de la persona
		std::string ver_sexo(); ///Método para obtener el sexo de la persona
		int ver_diaN(); ///Método para obtener el día de nacimiento de la persona
		int ver_mesN(); ///Método para obtener el mes de nacimiento de la persona
		int ver_anioN(); ///Método para obtener el año de nacimento de la persona
		int ver_edad(); ///Método para obtener la edad de la persona
		int ver_DNI(); ///Método para obtener el DNI de la persona
		
		
		void modificar_nombre(std::string nom);
		void modificar_apellido(std::string ape);
		void modificar_email(std::string mail);
		void modificar_tel(std::string tel);
		void modificar_dir(std::string dir);
		void modificar_loc(std::string loc);
		void modificar_sexo(std::string sexo);
		void modificar_DNI(int dni);
		void modificar_fecha_nacimiento(int dia, int mes, int anio);
		

};

#endif
