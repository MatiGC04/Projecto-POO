/**
* @file Suscripcion.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Suscripcion.
**/
#include "suscripcion.h"
#include <fstream>
#include <cstring>
#include <iomanip>

suscripcion::suscripcion(std::string p_subscrito, std::string dni_couch, std::string dni_cliente){
	this->p_subscrito = p_subscrito;
	this->dni_cliente = dni_cliente;
	this->dni_couch = dni_couch;
	fecha_pago = FechaHoy();
	nombre_rutina = FechaArchivo(fecha_pago)+"_"+dni_cliente+"_"+p_subscrito+".txt";
	std::ofstream rutina("RutinasClientes/"+nombre_rutina);
	
	std::string linea;
	
	std::ifstream rutina_base("RutinasBases/rutina"+p_subscrito+".txt");
	
	while(std::getline(rutina_base,linea)){
		rutina<<linea<<std::endl;
	}
	
}

fecha suscripcion::ver_fecha_pago() const{
	return fecha_pago;
}

/**
* Implementación del método para obtener los días faltantes antes del
* vencimiento de la cuota.
* @return si la fecha no esta vencida, retorna la diferencia de dias faltantes 
* antes del vencimiento de esta, sino retorna -1.
**/	
int suscripcion::dias_faltantes() const{
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
}

std::string suscripcion::ver_DNI_couch() const{
	return dni_couch;
}
std::string suscripcion::ver_DNI_cliente()const{ 
	return dni_cliente;
}
std::string suscripcion::ver_nombre_rutina() const{
	return nombre_rutina;
}
std::string suscripcion::ver_nombre_plan() const{
	return p_subscrito;
}

void suscripcion::leer_en_binario(std::ifstream &archivo){
	registroSuscripcion registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registroSuscripcion));
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
	registro.fecha_pago = this->fecha_pago;
	
	archivo.write(reinterpret_cast<char*>(&registro), sizeof(registroSuscripcion));
}

bool suscripcion::estado_suscripcion() const{
	if(FechaVencimiento(fecha_pago) < FechaHoy()){
		return false;
	}else{
		return true;
	}
}

//No estoy seguro de si va a servir pero lo programo y dps si no hace falta
//se descarta, segun yo despues podemos utilizar estas funciones para mandarle
//un puntero a funcion a sort y que ordene el vector de manage con estos criterios

///Una fecha es menor que otra cuando la otra es mas reciente, es decir que
///para ordenar por fechas mas recientes deberiamos hacer lo contrario
bool CriterioSuscripcionFechaPago(suscripcion sub1, suscripcion sub2){	
	return !(sub1.ver_fecha_pago()<sub2.ver_fecha_pago());
}
bool CriterioSuscripcionDNICouch(suscripcion sub1, suscripcion sub2){
	return sub1.ver_DNI_couch()<sub2.ver_DNI_couch();
}
bool CriterioSuscripcionDNICliente(suscripcion sub1, suscripcion sub2){
	return sub1.ver_DNI_cliente()<sub2.ver_DNI_cliente();
}
bool CriterioSuscripcionNombre(suscripcion sub1, suscripcion sub2){
	return sub1.ver_nombre_plan()<sub2.ver_nombre_plan();
}
