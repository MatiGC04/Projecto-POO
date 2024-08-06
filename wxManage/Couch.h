/**
* @file Couch.h
* @brief Implementaciones de todo lo necesario para trabajar con la clase 
* clase couch.
*
* 
* Este archivo define la clase cliente y la clase couch, las funciones
* auxiliares para compararlas y el struct de registro para poder guardar
* y leer en archivo binarios
**/
#ifndef COUCH_H
#define COUCH_H

#include "Persona.h"
#include <string>

/**
* @brief Estructura auxiliar para usar con archivos binarios en la clase couch
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de 
* intermediaria para guardar y escribir los datos de una persona.
**/

struct registroCouch{
	char nombre[100];
	char apellido[100];
	char email[260];
	char telefono[25];
	char direccion[100];
	char localidad[100];
	char sexo[2];
	char dni[20];
	char cbu[22];
	char alias[20];
	fecha fecha_nac;
};

/**
* @brief Clase que representara a un couch, clase que hereda de persona
*
* Contiene el cbu del couch y su alias, ya que son datos que el usuario
* necesitará almacenar para realizar los pagos
**/

class couch : public persona{
private:
	/// @brief Cbu del couch
	std::string cbu;
	/// @brief Alias del couch
	std::string alias;
	
public:
	
	/// @brief Constructor de la clase couch con sus paramentros por defecto
	couch(std::string nombre = "", std::string apellido = "",
	std::string email = "", std::string sexo = "", std::string telefono = "",
	std::string direccion = "", std::string localidad = "", std::string dni = "",
	int dia = 0, int mes = 0, int anio = 0, std::string _cbu = "",
	std::string _alias = "");
	
	/// @brief  Métodos para obtener los atributos de couch
	std::string ver_cbu() const;
	std::string ver_alias() const;
	
	/// @brief Metodos para editar cbu y alias del couch
	void modificar_cbu(std::string cbu);
	void modificar_alias(std::string alias);
	
	/// @brief Método que guarda su registro en un archivo binario
	void guardar_en_binario(std::ofstream &archivo) override;
	
	/// @brief Metodo que lee un registro de un archivo binario
	void leer_en_binario(std::ifstream &archivo) override;
	
	/// @brief Metodo que validar que cbu y alias esten ingresados correctamente
	std::string validar_datos_ch() const;
	
};

///@brief Funcion que compara dos couch por su nombre y apellido
bool CriterioCouchNombreApellido(couch c1, couch c2);
///@brief Funcion que compara dos couchs por su localidad
bool CriterioCouchLocalidad(couch c1, couch c2);
///@brief Funcion que compara dos couch por su edad
bool CriterioCouchEdad(couch c1, couch c2);
///@brief Funcion que compara dos couch por su email
bool CriterioCouchEmail(couch c1, couch c2);
///@brief Funcion que compara dos couch por su telefono
bool CriterioCouchTelefono(couch c1, couch c2);
///@brief Funcion que compara dos couch por su DNI
bool CriterioCouchDNI(couch c1, couch c2);
#endif

