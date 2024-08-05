/**
* @file Persona.h
* @brief Declaracion de la clase persona.
**/
#ifndef PERSONA_H
#define PERSONA_H


#include "Utils.h"
#include <string>

/**
* @brief Clase Abstracta que representa a una persona. 
*
* Contiene los atributos que se guardan de cada persona, metodos para definirlos
* obtenerlos y modificarlos. Ademas contiene dos metodos virtuales puros para 
* poder guardar y leer desde un archivo binario.
**/

class persona{
protected:
	std::string nombre; ///< nombre de la persona
	std::string apellido; ///< apellido de la persona
	std::string email; ///< mail de la persona
	std::string telefono; ///< telefono de la persona
	std::string direccion; ///< direccion de la persona
	std::string localidad; ///< localidad de la persona
	std::string sexo; ///< sexo de la persona
	std::string dni; ///< DNI de la persona
	fecha fecha_nacimiento; ///< fecha de nacimiento de la persona
public:
		/// Inicializa los datos de una persona a partir de los datos ingresados
		persona(std::string nombre = "", std::string apellido = "", std::string email = "", std::string sexo = "", 
		std::string telefono = "", std::string direccion = "", std::string localidad = "", std::string dni = "",
		int dia = 0, int mes = 0, int anio = 0); 
		
		/// Valida que los datos cargados sean correctos 
		std::string validar_datos() const;
		
		
		std::string ver_nombre() const; ///< devuelve el nombre de la persona
		std::string ver_apellido() const; ///< devuelve el apellido de la persona
		std::string ver_email() const; ///< devuelve el mail de la persona
		std::string ver_tel() const; ///< devuelve el telefono de la persona
		std::string ver_dir() const; ///< devuelve la direccion de la persona
		std::string ver_loc() const; ///< devuelve la localidad de la persona
		std::string ver_sexo() const; ///< devuelve el sexo de la persona
		std::string ver_DNI() const; ///< devuelve el DNI de la persona
		int ver_diaN() const; ///< devuelve el dia de nacimiento de la persona 
		int ver_mesN() const; ///< devuelve el mes de nacimiento de la persona
		int ver_anioN() const; ///< devuelve el anio de nacimiento de la persona
		int ver_edad() const; ///< devuelve la edad de la persona 
		
		
		void modificar_nombre(std::string nom) ; ///< modifica el nombre de la persona
		void modificar_apellido(std::string ape); ///< modifica el apellido de la persona
		void modificar_email(std::string mail); ///< modifica el mail de la persona
		void modificar_tel(std::string tel); ///< modifica el telefono de la persona
		void modificar_dir(std::string dir); ///< modifica la direccion de la persona
		void modificar_loc(std::string loc); ///< modifica la localidad de la persona
		void modificar_sexo(std::string sexo); ///< modifica el sexo de la persona 
		void modificar_DNI(std::string dni); ///< modifica el DNI de la persona 
		void modificar_fecha_nacimiento(int dia, int mes, int anio); ///< modifica la fecha de nacimiento de la persona 
		
		
		/// Método virtual puro que guarda su registro en un archivo binario
		virtual void guardar_en_binario(std::ofstream &archivo)=0 ;
		
		/// Método virtual puro que lee un registro de un archivo binario
		virtual void leer_en_binario(std::ifstream &archivo)=0;

};

#endif
