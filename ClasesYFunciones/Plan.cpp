#include "Plan.h"

plan::plan(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
}

void plan::modificar_precio(int nuevo_precio){
	precio = nuevo_precio;
}
int plan::ver_precio(){
	return precio;
}
