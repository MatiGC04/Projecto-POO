#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H
#include <vector>
#include "Plan.h"
#include "Utils.h"
///Se elimina suscripcion???

class suscripcion{
	
private:
	fecha fecha_pago;
	plan p_subscritos;
	couch responsable;
	
public:
	suscripcion(plan p_suscritos, couch responsable); ///< constructor 
	
	/// Métodos para obtener los atributos de una suscripcion
	
	fecha ver_fecha_pago(); ///< devuelve la fecha en la que se pago
	int ver_precio_suscripcion();
	int dias_faltantes(); ///< devuelve los dias que le quedan pagos
	couch ver_couch_responsable();
	plan obtener_plan();
	
	bool chequear_cuota(); ///< Método para obtener el estado actual de la cuota
	void pagar_cuota(); ///< actualiza la fecha de pago
	
	void eliminar_plan_sub(std::string nom_plan);
	bool plan_en_sub(std::string nom_plan);
};

#endif
