#include "suscripcion.h"
suscripcion::suscripcion(cliente c_suscritor, plan p_subscritos, couch responsable){
	this->c_suscritor = c_suscritor;
	this->p_subscritos = p_subscritos;
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
/*
int suscripcion::ver_precio_suscripcion(){
	int precio;
	for( unsigned i=0 ; i<p_subscritos.size() ; ++i ){
		precio = precio + p_subscritos[i].ver_precio();
	}
	return precio;
}

/*
void suscripcion::eliminar_plan_sub(std::string nom_plan){ //notar que esta funcion no hace nada si el plan no esta en la subscripcion
	for( auto it = p_subscritos.begin() ; it != p_subscritos.end() ; ++it ){
			
		if( (*it).nombre_plan() == nom_plan ){
			p_subscritos.erase(it);
		}
	}
}

bool suscripcion::plan_en_sub(std::string nom_plan){
	for( auto it= p_subscritos.begin() ; it != p_subscritos.end() ; ++it ){
		if((*it).nombre_plan() == nom_plan){
			return true;
		}
	}
	return false;
}
*/
