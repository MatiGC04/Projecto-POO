#include "Plan.h"
#include <fstream>
#include <cstring>
using namespace std;

plan::plan(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
	nombre_rutina_base = "rutina"+nombre+".txt";
	std::ofstream rutina_base(nombre_rutina_base);
}

void plan::modificar_precio(int nuevo_precio){
	precio = nuevo_precio;
}

int plan::ver_precio_plan(){
	return precio;
}

couch plan::ver_couch_plan(int pos){
	return p_couchs[pos];
}

std::string plan::ver_nombre_plan(){
	return nombre;
}

std::string plan::ver_nombre_rutina(){
	return nombre_rutina_base;
}

void plan::leer_en_binario(std::ifstream &archivo){
	registroPlan registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registroPlan));
	this->nombre = registro.nombre;
	this->nombre_rutina_base = registro.rutina_base;
	this->precio = registro.precio;
}

void plan::guardar_en_binario(std::ofstream &archivo){
	registroPlan registro;
	strcpy(registro.nombre, this->nombre.c_str());
	strcpy(registro.rutina_base, this->nombre_rutina_base.c_str());
	registro.precio = this->precio;
	archivo.write(reinterpret_cast<char*>(&registro), sizeof(registroPlan));
}

//No estoy seguro de si va a servir pero lo programo y dps si no hace falta
//se descarta, segun yo despues podemos utilizar estas funciones para mandarle
//un puntero a funcion a sort y que ordene el vector de manage con estos criterios
bool CriterioPrecioPlan(plan p1, plan p2){
	return p1.ver_precio_plan()<p2.ver_precio_plan();
}
bool CriterioNombre(plan p1, plan p2){
	return p1.ver_nombre_plan()<p2.ver_nombre_plan();
}

