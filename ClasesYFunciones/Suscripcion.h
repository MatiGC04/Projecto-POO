#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H
#include <vector>
#include "Cliente.h"
#include "Plan.h"
#include "Utils.h"
#include "Couch.h"
///Se elimina suscripcion???

class suscripcion{
private:
	fecha fecha_pago;
	plan p_subscritos;
	cliente c_suscritor;
	couch responsable;
	public:
	fecha ver_fecha_pago(); ///< devuelve la fecha en la que se pago
	int dias_faltantes(); ///< devuelve los dias que le quedan pagos
	bool chequear_cuota(); ///< Método para obtener el estado actual de la cuota
	void pagar_cuota(); ///< actualiza la fecha de pago
	suscripcion(cliente c_suscritor, plan p_suscritos, couch responsable);
	int ver_precio_suscripcion();
	void eliminar_plan_sub(std::string nom_plan);
	bool plan_en_sub(std::string nom_plan);
};

#endif
