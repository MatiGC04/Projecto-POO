/**
* @file Plan.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Plan.
**/
#include "Plan.h"
#include <fstream>
#include <cstring>
#include <string>

/// Implementaci�n del constructor de la clase Plan
plan::plan(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
	nombre_rutina_base = "rutina"+nombre+".txt";
	std::ofstream rutina_base("RutinasBases/"+nombre_rutina_base);
}

/**
* Implementacion del metodo que valida los datos ingresados.
* El vector de couchs no es necesario pq ya posee un metodo propio
* la clase cliente.
**/
std::string plan::validar_datos(){
	std::string errores = "";
	
	if(nombre.size()==0){
		errores+="El nombre no puede estar vacio \n";
	}
	if(nombre_rutina_base.size()==0){
		errores+="La rutina no puede estar vacia \n";
	}
	if(precio<0){
		errores+="El precio no puede ser negativo \n";
	}
	if(p_couchs.size()==0){
		errores+="Falta un couch responsable del plan \n";
	}
	return errores;
}

/// Implementaci�n del metodo para modificar el precio del plan.
void plan::modificar_precio(int nuevo_precio){
	if(nuevo_precio>=0){ //si el precio es negativo no se modifica 
	precio = nuevo_precio;
	}
}

///Implementaci�nes de los m�todos para obtener los atributos.
int plan::ver_precio_plan(){
	return precio;
}

std::string plan::ver_couch_plan(int pos){
	return p_couchs[pos];
}

std::vector<std::string> plan::ver_couchs_plan(){
	return p_couchs;
}

std::string plan::ver_nombre_plan(){
	return nombre;
}

std::string plan::ver_nombre_rutina(){
	return nombre_rutina_base;
}


///Implementaci�n del met�do que leer el registro en un archivo binario.
void plan::leer_en_binario(std::ifstream &archivo){
	registroPlan registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registroPlan));
	this->nombre = registro.nombre;
	this->nombre_rutina_base = registro.rutina_base;
	this->precio = registro.precio;
	
	p_couchs.erase(p_couchs.begin(), p_couchs.end()); // asegurarse de que el vector est� vac�o antes de
	//agregar elementos
	
	for (int i = 0; i < registro.num_couchs; ++i) {
		std::string id_couch(registro.couchs[i],10);
		p_couchs.push_back(id_couch);
	}
	
}

///Implementaci�n del met�do que guarda el registro en un archivo binario.
void plan::guardar_en_binario(std::ofstream &archivo){
	registroPlan registro;
	strcpy(registro.nombre, this->nombre.c_str());
	strcpy(registro.rutina_base, this->nombre_rutina_base.c_str());
	registro.precio = this->precio;
	
	registro.num_couchs = p_couchs.size();
	
	
	for (int i = 0; i < p_couchs.size(); ++i) {
		std::strcpy(registro.couchs[i], p_couchs[i].c_str());
	}
	
	archivo.write(reinterpret_cast<char*>(&registro), sizeof(registroPlan));
}

void plan::agregar_couch(std::string id_couch){
	p_couchs.push_back(id_couch);
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
