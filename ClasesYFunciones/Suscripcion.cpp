#include "suscripcion.h"
#include <fstream>
suscripcion::suscripcion(plan p_subscrito, std::string dni_couch, std::string dni_cliente){
	this->p_subscrito = p_subscrito;
	this->dni_cliente = dni_cliente;
	this->dni_couch = dni_couch;
	fecha_pago=FechaHoy();
	nombre_rutina = FechaTexto(fecha_pago)+"_"+dni_cliente+"_"+p_subscrito.ver_nombre_plan();
	std::ofstream rutina(nombre_rutina);
}

fecha suscripcion::ver_fecha_pago(){
	return fecha_pago;
}

/**
* Implementación del método para obtener los días faltantes antes del
* vencimiento de la cuota.
* @return si la fecha no esta vencida, retorna la diferencia de dias faltantes 
* antes del vencimiento de esta, sino retorna -1.
**/	
int suscripcion::dias_faltantes(){
	chequear_cuota();
	if(chequear_cuota()==true){
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
	}
	return -1;
}

///Implementación del método que para saber el estado actual de la cuota.
bool suscripcion:: chequear_cuota(){
	fecha venc = FechaVencimiento(fecha_pago);
	if(venc<FechaHoy()){
		return false;
	}
	return true;
}

///Implementación del método para el pago de la cuota
void suscripcion::pagar_cuota(){
	fecha_pago=FechaHoy();
}

int suscripcion::ver_precio_suscripcion(){
	return p_subscrito.ver_precio_plan();
}

plan suscripcion::obtener_plan(){
	return p_subscrito;
}


