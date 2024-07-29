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
	/// @brief Atributos de una persona
	std::string nombre; 
	std::string apellido; 
	std::string email; 
	std::string telefono; 
	std::string direccion; 
	std::string localidad; 
	std::string sexo;	
	std::string dni; 
	fecha fecha_nacimiento;
public:
		/// @brief Constructor de la clase persona con sus paramentros por defecto
		persona(std::string nombre = "", std::string apellido = "", std::string email = "", std::string sexo = "", 
		std::string telefono = "", std::string direccion = "", std::string localidad = "", std::string dni = "",
		int dia = 0, int mes = 0, int anio = 0); 
		
		/// @brief Valida que los datos cargados sean correctos 
		std::string validar_datos() const;
		
		/// @brief Métodos para obtener los atributos de una persona
		std::string ver_nombre() const;
		std::string ver_apellido() const;
		std::string ver_email() const;
		std::string ver_tel() const;
		std::string ver_dir() const;
		std::string ver_loc() const;
		std::string ver_sexo() const;
		std::string ver_DNI() const;
		int ver_diaN() const;
		int ver_mesN() const;
		int ver_anioN() const;
		int ver_edad() const;
		
		
		/// @brief Métodos para modificar los atributos de una persona
		void modificar_nombre(std::string nom) ;
		void modificar_apellido(std::string ape);
		void modificar_email(std::string mail);
		void modificar_tel(std::string tel);
		void modificar_dir(std::string dir);
		void modificar_loc(std::string loc);
		void modificar_sexo(std::string sexo);
		void modificar_DNI(std::string dni);
		void modificar_fecha_nacimiento(int dia, int mes, int anio);
		
		
		/// @brief Método virtual puro que guarda su registro en un archivo binario
		virtual void guardar_en_binario(std::ofstream &archivo)=0 ;
		
		/// @brief Método virtual puro que lee un registro de un archivo binario
		virtual void leer_en_binario(std::ifstream &archivo)=0;

};

#endif
