#include "Plan.h"

plan::plan(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
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

std::string plan::nombre_plan(){
	return nombre;
}
