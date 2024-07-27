/**
* @file Cliente.h
* @brief Implementaciones de todo lo necesario para trabajar con la clase 
* clase cliente
*
* 
* Este archivo define la clase couch, las funciones auxiliares para
* compararlas y el struct de registro para poder guardar y leer
* en archivo binarios
**/
#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Persona.h"
#include <Utils.h>
#include <Couch.h>
#include <vector>
#include "Suscripcion.h"


/**
* @brief Estructura auxiliar para usar con archivos binarios en la clase cliente
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de 
* intermediaria para guardar y escribir los datos de una persona.
**/

struct registroCliente{
	char nombre[100];
	char apellido[100];
	char email[260];
	char telefono[20];
	char direccion[100];
	char localidad[100];
	char sexo[2];
	char dni[20];
	char telefono_emergencias[20];
	fecha fecha_nac;
};


/**
* @brief Clase que representara a un cliente, clase que hereda de persona
*
* Contiene un telefono de emergencia, una estructura de datos planCliente,
* un tipo de dato bool y fecha, para tener un registro del pago que realiza el
* cliente
**/

class cliente : public persona{
private:
	std::string tel_emergencias;
	
public:
	/// Constructor de la clase cliente con sus paramentros por defecto
	cliente(std::string nombre = "", std::string apellido = "",
			std::string email = "", std::string sexo = "", std::string telefono = "",
			std::string direccion = "", std::string localidad = "", std::string dni = "",
			int dia = 0, int mes = 0, int anio = 0, std::string _tel_emergencias="");
	
	/// @brief Metodo que validar que el telefono de emergencia es valido
	std::string validar_datos_cl();
	
	/// @brief Metodo para obtener atributo del dato
	std::string ver_tel_emergencia();
	
	/// @brief Metodos para editar o agregar datos 
	void modificar_tel_em(std::string tel_em_nuevo); 
	
	
	/// @brief Metodos para registrar los datos de la clase
	void guardar_en_binario(std::ofstream &archivo) override; 
	void leer_en_binario(std::ifstream &archivo) override; 
	
	
};

/// @brief Funcion que compara dos clientes por su nombre y apellido
bool CriterioNombreApellido(cliente p1, cliente p2);

/// @brief Funcion que compara dos clientes por su localidad
bool CriterioLocalidad(cliente p1, cliente p2);

/// @brief Funcion que compara dos clientes por su edad
bool CriterioEdad(cliente p1, cliente p2);

/// @brief Funcion que comprar dos clientes por su direccion de correo electronico
bool CriterioEmail(cliente p1, cliente p2);
#endif



















