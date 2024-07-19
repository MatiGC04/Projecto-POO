/**
* @file Suscripcion.h
* @brief Implementaciones de todo lo necesario para trabajar con la clase 
* clase Suscripcion.
*
* 
* Este archivo define la clase Suscripcion, las funciones auxiliares para
* compararlas, ademas del struct de registro para poder guardar y leer
* en archivo binarios.
**/
#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H
#include <vector>
#include "Plan.h"
#include "Utils.h"

/**
* @brief Estructura auxiliar para usar con archivos binarios en la clase Suscripcion.
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de 
* intermediaria para guardar y escribir los datos de una persona.
**/
struct registroSuscripcion{
	char nombre_rutina[100];
	char id_couch[20];
	char id_cliente[20];
	char id_plan[100];
	fecha fecha_pago;
};

class suscripcion{
	
private:
	fecha fecha_pago;
	std::string p_subscrito;
	std::string dni_couch;
	std::string dni_cliente;
	std::string nombre_rutina;
	
public:
	/// Constructor de la clase suscripcion con sus paramentros por defecto
	suscripcion(std::string p_suscrito="0", std::string dni_couch="0", std::string dni_cliente="0"); ///< constructor 
	
	/// Métodos para obtener los atributos de una suscripcion
	fecha ver_fecha_pago();			///< devuelve la fecha en la que se pago
	int dias_faltantes(); 			///< devuelve los dias que le quedan pagos
	std::string ver_DNI_couch();
	std::string ver_DNI_cliente();
	std::string ver_nombre_rutina();
	std::string ver_nombre_plan();
	
	/// Método para obtener el estado actual de la cuota
	bool chequear_cuota(); 	
	
	/// Actualiza la fecha de pago
	void pagar_cuota(); 	
	
	/// Métodos para leer/guardar su registro en un archivo binario
	void leer_en_binario(std::ifstream &archivo);
	void guardar_en_binario(std::ofstream &archivo);
};

#endif
