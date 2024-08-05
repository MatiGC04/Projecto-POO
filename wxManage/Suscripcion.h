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
	/// @brief Atributos de la clase Suscripcion
	fecha fecha_pago;
	/// @brief Nombre del plan subscripto
	std::string p_subscrito;
	/// @brief DNI's de couchs y cliente, para una posterior busqueda
	std::string dni_couch;
	std::string dni_cliente;
	/// @brief Nombre de la rutina, que es una concatenacion de los datos
	std::string nombre_rutina;
	
public:
	/// @brief Constructor de la clase suscripcion con sus paramentros por defecto
	suscripcion(std::string p_suscrito="0", std::string dni_couch="0", std::string dni_cliente="0"); ///< constructor 
	
	/// @brief  Métodos para obtener los atributos de una suscripcion
	fecha ver_fecha_pago() const;			///< devuelve la fecha en la que se pago
	int dias_faltantes() const; 			///< devuelve los dias que le quedan pagos
	std::string ver_DNI_couch() const;
	std::string ver_DNI_cliente() const;
	std::string ver_nombre_rutina() const;
	std::string ver_nombre_plan() const;
	
	bool estado_suscripcion() const;
	
	/// @brief Métodos para leer/guardar su registro en un archivo binario
	void leer_en_binario(std::ifstream &archivo);
	void guardar_en_binario(std::ofstream &archivo);
};

bool CriterioSuscripcionFecha(suscripcion sub1, suscripcion sub2);
bool CriterioSuscripcionDNICouch(suscripcion sub1, suscripcion sub2);
bool CriterioSuscripcionDNICliente(suscripcion sub1, suscripcion sub2);
bool CriterioSuscripcionPlan(suscripcion sub1, suscripcion sub2);

#endif
