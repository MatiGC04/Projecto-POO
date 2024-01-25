/**
* @file Cliente_Couch.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Cliente y la clase couch
*
* Este archivo define la clase Cliente y la clase Couch, las constantes que se usan en los atributos
**/

#ifndef CLIENTE_H
#define CLIENTE_H

#endif

#include <string>
#include <persona.h>
#include <ManejoDeFechas.h>
#include <vector>


/**
* @brief Clase que representara a los empleados
* Contiene el cbu del couch y su alias, ya que son datos que el usuario necesitará almacenar para realizar los pagos
**/
class couch : public persona{
private:
	std::string cbu;
	std::string alias;
public:
	
	///Inicializa los datos del Couch 
	couch(std::string, std::string, std::string, std::string, std::string, std::string, std::string, int, int, int, int,  //<-atributos Persona 
		  std::string _cbu = "", std::string _alias = "");//<-atributo Couch
	
	///Metodos que devuelven los datos guardados
	std::string ver_cbu();
	std::string ver_alias();
};

/**
* @brief struct que permite almacenar la informacion del plan que el cliente elige
* Esta compuesta por el nombre del plan, el couch a cargo, el precio, y por ultimo la rutina del cliente
*/
struct planCliente{
	std::string nombre_plan;
	couch couch_a_cargo;
	int precio;
	
	
	
	planCliente operator= (planCliente copia){
		nombre_plan=copia.nombre_plan;
		couch_a_cargo=copia.couch_a_cargo;
		precio=copia.precio;
		/*
		El return *this permite asignaciones en cadena:
		Por ejemplo, si tienes tres objetos Plan llamados a, b y c, puedes escribir a = b = c;. Esto funciona de la siguiente manera:
		
		*	Primero, b = c se evalúa. El operador de asignación copia el contenido de c en b y luego devuelve una referencia a b.
		Luego, a = (b = c) se evalúa. Ahora, b = c es simplemente b (porque el operador de asignación devolvió una referencia a b). 
		Entonces, esencialmente estás haciendo a = b, que de nuevo copia el contenido y devuelve una referencia a a.
		
		*	Si no tuvieras return *this en tu operador de asignación, no podrías hacer asignaciones en cadena porque el operador 
		de asignación no tendría un valor de retorno válido. Por lo tanto, return *this es necesario para permitir este tipo 
		de operaciones en C++.*/
		return *this;
	}
};
/**
* @brief Clase que representa a los clientes que asistiran al gimnasio
* Contiene un telefono de emergencia, una estructura de datos planCliente, y un tipo de dato bool y fecha, para tener un registro del
* pago que realiza el cliente, para que luego controlar el vencimiento de la mensualidad
**/
class cliente : public persona{
private:
	std::string tel_emergencias;
	std::vector<planCliente>planes; 
	
	//registro el pago del cliente
	bool estado_pago;
	fecha fecha_pago;
	
	/*plantear si se desea agregar un archivo .text 
	  o binary para que cada cliente tenga su rutina */
public:
	cliente(std::string, std::string, std::string, std::string, 
			std::string, std::string, std::string, int, int, int, 
			int, std::string _tel_emergencias="");
	
	void agregar_plan(planCliente t_plan);
	
	///Calcula cuantos dias falta para que se venzas 
	int dias_faltantes();
	
	///Metodos que devuelven los datos guardados
	bool ver_estado_pago();
	
	///Cuando el cliente realiza el pago se actualiza el estado_pago, y la fehca del pago
	void pagar_cuota();
	
	///Controlar si la mensualidad esta vencida o no
	void chequear_cuota();
};



