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
	
	fecha ver_fecha_pago();			///< devuelve la fecha en la que se pago
	int ver_precio_suscripcion(); 	///< devuelve el precio de la sub
	int dias_faltantes(); 			///< devuelve los dias que le quedan pagos
	couch ver_couch_responsable(); 	///< devuelve el couch a cargo de la sub
	plan obtener_plan(); 			///< devuelve el plan de la sub
	
	bool chequear_cuota(); 	///< Método para obtener el estado actual de la cuota
	void pagar_cuota(); 	///< actualiza la fecha de pago
};

#endif
