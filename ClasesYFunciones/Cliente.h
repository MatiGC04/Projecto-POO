#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <Persona.h>
#include <Utils.h>
#include <Couch.h>
#include <vector>


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
	fecha fecha_pago;
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
	fecha fecha_pago;
public:
	/// Constructor de la clase cliente con sus paramentros por defecto
	cliente(std::string nombre = "", std::string apellido = "",
			std::string email = "", std::string sexo = "", std::string telefono = "",
			std::string direccion = "", std::string localidad = "", std::string dni = "",
			int dia = 0, int mes = 0, int anio = 0, std::string _tel_emergencias="");
	
	///Obtener atributos o datos a partir de atributos
	void modificar_tel_em(std::string tel_em_nuevo); ///< actualiza el numero de emergencia
	void guardar_en_binario(std::ofstream &archivo) override; ///< guarda los registros del cliente en un binario
	void leer_en_binario(std::ifstream &archivo) override; ///< lee los registros del cliente desde un binario
	
	
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



















