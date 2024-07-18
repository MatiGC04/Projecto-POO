#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H
#include <vector>
#include "Plan.h"
#include "Utils.h"

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
	suscripcion(std::string p_suscrito="0", std::string dni_couch="0", std::string dni_cliente="0"); ///< constructor 
	
	/// Métodos para obtener los atributos de una suscripcion
	
	fecha ver_fecha_pago();			///< devuelve la fecha en la que se pago
	int dias_faltantes(); 			///< devuelve los dias que le quedan pagos
	//std::string ver_couch_responsable(); 	///< devuelve el couch a cargo de la sub (va en manage)
	plan obtener_plan(); 			///< devuelve el plan de la sub
	
	bool chequear_cuota(); 	///< Método para obtener el estado actual de la cuota
	void pagar_cuota(); 	///< actualiza la fecha de pago
	
	void leer_en_binario(std::ifstream &archivo);
	void guardar_en_binario(std::ofstream &archivo);
};

#endif
