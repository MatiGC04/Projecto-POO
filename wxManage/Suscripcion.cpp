/**
* @file Suscripcion.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Suscripcion.
**/
#include "suscripcion.h"
#include <fstream>
#include <cstring>
#include <iomanip>

/**
* @brief Constructor de la clase suscripcion
*
* Toma los valores de string de los parametros y los guarda en los atributos
* de la clase, ademas crea la rutina como un archivo de texto y este le copia
* los datos de la rutina del plan base
*
* @param std::string p_subscrito Cadena que representa el plan susbcrito
*		 std::string dni_couch Cadena que representa el dni del coach responsable
*		 std::string dni_cliente Cadena que representa el dni del cliente
**/ 
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
/**
* @brief Metodo para obtener la fecha de pago
* @return fecha fecha_pago Retorna la fecha pago
*/
fecha suscripcion::ver_fecha_pago() const{
	return fecha_pago;
}

/**
* @brief Método para obtener los días faltantes antes del vencimiento de la 
* cuota.
* 
* @return si la fecha no esta vencida, retorna la diferencia de dias faltantes 
* antes del vencimiento de esta, sino retorna -1.
**/	
int suscripcion::dias_faltantes() const{
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
}

/**
* @brief Metodo para obtener el dni del coach
* @return std::string dni_couch Retorna el dni del coach 
*/
std::string suscripcion::ver_DNI_couch() const{
	return dni_couch;
}

/**
* @brief Metodo para obtener el dni del cliente
* @return std::string dni_cliente Retorna el dni del cliente
*/
std::string suscripcion::ver_DNI_cliente()const{ 
	return dni_cliente;
}

/**
* @brief Metodo para obtener el nombre de la rutina
* @return std::string nombre_rutina Retorna el nombre de la rutina
*/
std::string suscripcion::ver_nombre_rutina() const{
	return nombre_rutina;
}

/**
* @brief Metodo para obtener el nombre del plan subscrito
* @return std::string p_subscrito Retorna el nombre del plan subscrito
*/
std::string suscripcion::ver_nombre_plan() const{
	return p_subscrito;
}

/**
* @brief Metodo para leer un registro de una suscripcion desde un binario
*
* Este metodo lee el contenido del archivo en un registroSuscripcion y copia
* los valores en los atributos de la suscripcion
*
* @param std::ifstream &archivo Recibe un archivo del cual leer una suscripcion
*/

void suscripcion::leer_en_binario(std::ifstream &archivo){
	registroSuscripcion registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registroSuscripcion));
	this->nombre_rutina = registro.nombre_rutina;
	this->dni_cliente = registro.id_cliente;
	this->dni_couch = registro.id_couch;
	this->p_subscrito = registro.id_plan;
	this->fecha_pago = registro.fecha_pago;
}

/**
* @brief Metodo para guardar un registro de una suscripcion desde un binario
*
* Este metodo guarda los valores de los atributos en un registroSuscripcion
* para luego guardarlo en un archivo binario
*
* @param std::ofstream &archivo Recibe un archivo en el cual se guardara un 
* 		 registro
*/

void suscripcion::guardar_en_binario(std::ofstream &archivo){
	registroSuscripcion registro;
	strcpy(registro.nombre_rutina, this->nombre_rutina.c_str());
	strcpy(registro.id_couch, this->dni_couch.c_str());
	strcpy(registro.id_cliente, this->dni_cliente.c_str());
	strcpy(registro.id_plan, this->p_subscrito.c_str());
	registro.fecha_pago = this->fecha_pago;
	
	archivo.write(reinterpret_cast<char*>(&registro), sizeof(registroSuscripcion));
}

/**
* @brief Metodo para saber si la suscripcion esta vencida
*
* @return 'true' si la fecha de vencimiento es mayor al día de hoy, 'false'
*		  en caso contrario
*/

bool suscripcion::estado_suscripcion() const{
	if(FechaVencimiento(fecha_pago) < FechaHoy()){
		return false;
	}else{
		return true;
	}
}


/**
* @brief Funcion para comparar dos suscripciones 'sub1' y 'sub2' por su fecha
* de pago
*
* Una fecha es menor que otra cuando la otra es mas reciente, es decir que 
* para ordenar por fechas mas recientes deberiamos hacer lo contrario
*
* @return 'true' si la fecha de sub1 es mas reciente a la fecha de sub2, 'false'
* 		  en caso contrario
*/
bool CriterioSuscripcionFecha(suscripcion sub1, suscripcion sub2){	
	return !(sub1.ver_fecha_pago()<sub2.ver_fecha_pago());
}
/**
* @brief Funcion para comparar dos suscripciones 'sub1' y 'sub2' por los DNI
* de los coachs
*
* @return 'true' si el DNI del coach de sub1 es menor al DNI del coach de sub2,
* 		  'false' en caso contrario
*/	
bool CriterioSuscripcionDNICouch(suscripcion sub1, suscripcion sub2){
	return sub1.ver_DNI_couch()<sub2.ver_DNI_couch();
}
/**
* @brief Funcion para comparar dos suscripciones 'sub1' y 'sub2' por los DNI
* de los clientes
*
* @return 'true' si el DNI del cliente de sub1 es menor al DNI del cliente de sub2,
* 		  'false' en caso contrario
*/		
bool CriterioSuscripcionDNICliente(suscripcion sub1, suscripcion sub2){
	return sub1.ver_DNI_cliente()<sub2.ver_DNI_cliente();
}
/**
* @brief Funcion para comparar dos suscripciones 'sub1' y 'sub2' por el nombre
* del plan asociado
*
* @return 'true' si el plan de la sub1 es menor al plan de sub2, 'false' en caso
* 		  contrario
*/		
bool CriterioSuscripcionPlan(suscripcion sub1, suscripcion sub2){
	return sub1.ver_nombre_plan()<sub2.ver_nombre_plan();
}
