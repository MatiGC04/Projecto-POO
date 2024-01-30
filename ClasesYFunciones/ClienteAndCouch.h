/**
* @file ClienteAndCouch.h
* @brief Implementaciones de todo lo necesario para trabajar con la clase 
* cliente y la clase couch
*
* Este archivo define la clase cliente y la clase couch, las funciones
* auxiliares para compararlas y el struct de registro para poder guardar
* y leer en archivo binarios
**/

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <Persona.h>
#include <Utils.h>
#include <vector>

/**
* @brief Estructura auxiliar para usar con archivos binarios en la clase couch
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de 
* intermediaria para guardar y escribir los datos de una persona.
**/

struct registroCouch{
	char nombre[256];
	char apellido[256];
	char email[256];
	char telefono[256];
	char direccion[256];
	char localidad[256];
	char sexo[256];
	char dni[256];
	char cbu[256];
	char alias[256];
	int dia_nac, mes_nac, anio_nac;
};

/**
* @brief Clase que representara a un couch, clase que hereda de persona
*
* Contiene el cbu del couch y su alias, ya que son datos que el usuario
* necesitará almacenar para realizar los pagos
**/

class couch : public persona{
private:
	/// Atributos de couch
	std::string cbu;
	std::string alias;
	
public:
	/// Constructor de la clase couch con sus paramentros por defecto
	couch(std::string, std::string, std::string, std::string, std::string,
	std::string, std::string, std::string, int, int, int,std::string _cbu = "",
	std::string _alias = "");
	
	/// Métodos para obtener los atributos de couch
	std::string ver_cbu();
	std::string ver_alias();
	
	/// Método que guarda su registro en un archivo binario
	void guardar_en_binario(std::ofstream &archivo) override;
};


/**
* @brief struct que permite almacenar la informacion del plan que el cliente
* elige. Esta compuesta por el nombre del plan, el couch a cargo, el precio, y
* por ultimo la rutina del cliente
*/
struct planCliente{
	std::string nombre_plan;
	couch couch_cargo;
	int precio;
	
	planCliente operator= (planCliente copia){
		nombre_plan = copia.nombre_plan;
		couch_cargo = copia.couch_cargo;
		precio = copia.precio;
		/*
		El return *this permite asignaciones en cadena:
		Por ejemplo, si tienes tres objetos Plan llamados a, b y c, puedes
		escribir a = b = c;. Esto funciona de la siguiente manera:
		
		*Primero, b = c se evalúa. El operador de asignación copia el contenido
		de c en b y luego devuelve una referencia a b. Luego, a = (b = c) se
		evalúa. Ahora, b = c es simplemente b (porque el operador de asignación 
		devolvió una referencia a b). Entonces, esencialmente estás haciendo
		a = b, que de nuevo copia el contenido y devuelve una referencia a a.
		
		*Si no tuvieras return *this en tu operador de asignación, no podrías
		hacer asignaciones en cadena porque el operador de asignación no tendría
		un valor de retorno válido. Por lo tanto, return *this es necesario para
		permitir este tipo de operaciones en C++.*/
		return *this;
	}
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
	char nombre[256];
	char apellido[256];
	char email[256];
	char telefono[256];
	char direccion[256];
	char localidad[256];
	char sexo[256];
	char dni[256];
	char telefono_emergencias[256];
	char estado_pago[256];
	int dia_pago, mes_pago, anio_pago;
	int dia_nac, mes_nac, anio_nac;
};

/**
* @brief Clase que representara a un cliente, clase que hereda de persona
*
* Contiene un telefono de emergencia, una estructura de datos planCliente,
* un tipo de dato bool y fecha, para tener un registro del pago que realiza el
* cliente
*
* NOTE: como la variable bool estado_pago, esta ligada directamente al atributo fecha_pago, 
* propongo quitarla y dejar solo la fecha del pago y cada vez que el usuario consulte
* su mensualidad, solo invoque el metodo chequear_cuota().
* Por eso mismo comenté el atributo estado_pago y el método ver_estado_pago().
**/

class cliente : public persona{
private:
	/// Atributos de la clase cliente
	std::string tel_emergencias;
	std::vector<planCliente>planes; 
	//bool estado_pago; 
	fecha fecha_pago;
	
public:
	/// Constructor de la clase cliente con sus paramentros por defecto
	cliente(std::string, std::string, std::string, std::string, 
			std::string, std::string, std::string, std::string, int, int, 
			int, std::string _tel_emergencias="");
	
	/// Métodos para obtener los atributos de un cliente
	//bool ver_estado_pago();
	fecha ver_fecha_pago();
	planCliente ver_plan(int pos);
	planCliente ver_plan(std::string _nombre_plan);
	
	/// Métodos para modificar los atributos de Cliente	void modificar_tel_em(std::string tel_em_nuevo);
	void modificar_plan(int pos, planCliente nuevo_plan);
	
	/// Método para agregar un plan al cliente
	void agregar_plan(planCliente plan);
	
	/// Método para obtener los días faltantes antes del vencimiento de la cuota
	int dias_faltantes();
	
	/// Método para el pago de la cuota
	void pagar_cuota();
	
	/// Método para obtener el estado actual de la cuota
	bool chequear_cuota();
	
	/// Método que guarda su registro en un archivo binario
	void guardar_en_binario(std::ofstream &archivo) override;
	
	
	
};

///Criterios de comparacion
bool CriterioNombreApellido(cliente p1, cliente p2);

bool CriterioLocalidad(cliente p1, cliente p2);

bool CriterioEdad(cliente p1, cliente p2);

bool CriterioEmail(cliente p1, cliente p2);

bool CriterioNombreApellido(couch c1, couch c2);

bool CriterioLocalidad(couch c1, couch c2);

bool CriterioEdad(couch c1, couch c2);

bool CriterioEmail(couch c1, couch c2);



#endif
