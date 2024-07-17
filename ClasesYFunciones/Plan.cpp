#include "Plan.h"
#include <fstream>

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
