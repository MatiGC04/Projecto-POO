#include "suscripcion.h"
#include <fstream>
#include <cstring>
using namespace std;
suscripcion::suscripcion(std::string p_subscrito, std::string dni_couch, std::string dni_cliente){
	this->p_subscrito = p_subscrito;
	this->dni_cliente = dni_cliente;
	this->dni_couch = dni_couch;
	fecha_pago=FechaHoy();
	nombre_rutina = FechaTexto(fecha_pago)+"_"+dni_cliente+"_"+p_subscrito;
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


plan suscripcion::obtener_plan(){
	return p_subscrito;
}

void suscripcion::leer_en_binario(std::ifstream &archivo){
	registroSuscripcion registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registro));
	this->nombre_rutina = registro.nombre_rutina;
	this->dni_cliente = registro.id_cliente;
	this->dni_couch = registro.id_couch;
	this->p_subscrito = registro.id_plan;
	this->fecha_pago = registro.fecha_pago;
}
void suscripcion::guardar_en_binario(std::ofstream &archivo){
	registroSuscripcion registro;
	strcpy(registro.nombre_rutina, this->nombre_rutina.c_str());
	strcpy(registro.id_couch, this->dni_couch.c_str());
	strcpy(registro.id_cliente, this->dni_cliente.c_str());
	strcpy(registro.id_plan, this->p_subscrito.c_str());
	
	this->fecha_pago = registro.fecha_pago;
	archivo.write(reinterpret_cast<char*>(&registro), sizeof(registro));
}
