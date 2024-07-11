#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <Persona.h>
#include <Utils.h>
#include <Couch.h>
#include <vector>

/**
* @brief struct que permite almacenar la informacion del plan que el cliente
* elige. Esta compuesta por el nombre del plan, el couch a cargo, el precio, y
* por ultimo la rutina del cliente
*/
struct planCliente{
	std::string nombre_plan;
	couch couch_cargo;
	int precio;
};

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
	int dia_pago, mes_pago, anio_pago;
	int dia_nac, mes_nac, anio_nac;
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
	
	std::vector<planCliente> planes; 
	fecha fecha_pago;
	std::string tel_emergencias;
	
public:
	/// Constructor de la clase cliente con sus paramentros por defecto
	cliente(std::string nombre = "", std::string apellido = "",
			std::string email = "", std::string sexo = "", std::string telefono = "",
			std::string direccion = "", std::string localidad = "", std::string dni = "",
			int dia = 0, int mes = 0, int anio = 0, std::string _tel_emergencias="");
	
	///Obtener atributos o datos a partir de atributos
	fecha ver_fecha_pago(); ///< devuelve la fecha en la que se pago
	planCliente ver_plan(int pos); ///< devuelve el plan de acuerdo a la posicion
	std::vector<planCliente>::iterator ver_plan(std::string _nombre_plan); ///< devuelve el plan a partir del nombre del mismo
	int dias_faltantes(); ///< devuelve los dias que le quedan pagos
	bool chequear_cuota(); ///< Método para obtener el estado actual de la cuota
	
	
	
	void pagar_cuota(); ///< actualiza la fecha de pago
	void modificar_tel_em(std::string tel_em_nuevo); ///< actualiza el numero de emergencia
	void modificar_plan(int pos, planCliente nuevo_plan); ///< atualiza el plan en la posicion enviada 
	void agregar_plan(planCliente plan); ///< agrega un plan 
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



















