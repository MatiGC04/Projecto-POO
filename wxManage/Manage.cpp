/**
* @file Manage.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase Manage
**/
#include "Manage.h"
#include <fstream>
#include <vector>

manage::manage(std::string nombre_archivo_couchs, std::string nombre_archivo_clientes, std::string nombre_archivo_suscripciones, std::string nombre_archivo_planes){
	
	this->nombre_archivo_couchs = nombre_archivo_couchs;
	std::ifstream archi_couchs(nombre_archivo_couchs.c_str(),std::ios::binary|std::ios::ate);
	if(archi_couchs.is_open()){
		
		int cantidad_de_couchs = archi_couchs.tellg()/sizeof(registroCouch); 
		vector_de_couchs.resize(cantidad_de_couchs);
		archi_couchs.seekg(0,std::ios::beg);
		
		for(int i=0;i<cantidad_de_couchs;i++) { 
			vector_de_couchs[i].leer_en_binario(archi_couchs);
		}
		archi_couchs.close();
	}
	
	this->nombre_archivo_clientes = nombre_archivo_clientes;
	std::ifstream archi_clientes(nombre_archivo_clientes.c_str(),std::ios::binary|std::ios::ate);
	if(archi_clientes.is_open()){
		
		int cantidad_de_clientes = archi_clientes.tellg()/sizeof(registroCliente);
		vector_de_clientes.resize(cantidad_de_clientes);
		archi_clientes.seekg(0,std::ios::beg);
		
		for(int i = 0; i < cantidad_de_clientes; i++) { 
			vector_de_clientes[i].leer_en_binario(archi_clientes);
		}
		archi_clientes.close();
	}
	
	this->nombre_archivo_suscripciones = nombre_archivo_suscripciones;
	std::ifstream archi_suscripciones(nombre_archivo_suscripciones.c_str(), std::ios::binary | std::ios::ate);
	if(archi_suscripciones.is_open()){
		
		int cantidad_de_suscripciones = archi_suscripciones.tellg()/sizeof(registroSuscripcion);
		vector_de_suscripciones.resize(cantidad_de_suscripciones);
		archi_suscripciones.seekg(0,std::ios::beg);
		
		for(int i = 0; i < cantidad_de_suscripciones; i++) { 
			vector_de_suscripciones[i].leer_en_binario(archi_suscripciones);
		}
		archi_suscripciones.close();
	}
	
	this->nombre_archivo_planes = nombre_archivo_planes;
	std::ifstream archi_planes(nombre_archivo_planes.c_str(),  std::ios::binary | std::ios::ate );
	if(archi_planes.is_open()){
		int cantidad_de_planes = archi_planes.tellg()/sizeof(registroPlan);
		
		vector_de_planes.resize(cantidad_de_planes);
		
		archi_planes.seekg(0, std::ios::beg);
		
		for(int i=0; i<cantidad_de_planes; ++i){
			vector_de_planes[i].leer_en_binario(archi_planes);
		}
		archi_planes.close();
	}
}




bool manage::guardar() {
	
	std::ofstream archi_couchs(nombre_archivo_couchs.c_str(), std::ios::binary|std::ios::trunc);
	if (!archi_couchs.is_open()) return false;
	for (unsigned i = 0; i < vector_de_couchs.size(); i++){
		vector_de_couchs[i].guardar_en_binario(archi_couchs);
	}
	archi_couchs.close();
	
	
	
	std::ofstream archi_clientes(nombre_archivo_clientes.c_str(),std::ios::binary|std::ios::trunc);
	if (!archi_clientes.is_open())return false;
	for (unsigned i = 0; i < vector_de_clientes.size(); i++){
		vector_de_clientes[i].guardar_en_binario(archi_clientes);
	}
	archi_clientes.close();

	
	
	std::ofstream archi_suscripciones(nombre_archivo_suscripciones.c_str(), std::ios::binary|std::ios::trunc);
	if(!archi_suscripciones.is_open()) return false;
	for(unsigned i=0; i<vector_de_suscripciones.size(); ++i){
		vector_de_suscripciones[i].guardar_en_binario(archi_suscripciones);
	}
	archi_suscripciones.close();
	
	
	
	std::ofstream archi_planes(nombre_archivo_planes.c_str(), std::ios::binary|std::ios::trunc);
	if(!archi_planes.is_open()) return false;
	for(unsigned i=0; i<vector_de_planes.size(); ++i){
		vector_de_planes[i].guardar_en_binario(archi_suscripciones);
	}
	archi_planes.close();
	
	return true;

}



///Implemetaciones de métodos para ver la cantidad de clientes, couchs, planes 
///y suscripciones
int manage::cantidadCliente() {
	return vector_de_clientes.size();
}
int manage::cantidadCouch(){
	return vector_de_couchs.size();
}
int manage::cantidadPlanes(){
	return vector_de_planes.size();
}
int manage::cantidadSuscripciones(){
	return vector_de_suscripciones.size();
}


///Implemetacion de métodos para agregar clientes, couchs, planes 
///y suscripciones de los vectores
void manage::agregarCliente(const cliente &cl) {
	vector_de_clientes.push_back(cl);
}
void manage::agregarCouch (const couch &ch){
	vector_de_couchs.push_back(ch);
}
void manage::agregarPlan(const plan &p){
	vector_de_planes.push_back(p);
}
void manage::agregarSuscripcion(const suscripcion &sub){
	vector_de_suscripciones.push_back(sub);
}


///Implemetacion de métodos para borrar clientes, couchs, planes 
///y suscripciones de los vectores
void manage::borrarCliente(int pos) {
	vector_de_clientes.erase(vector_de_clientes.begin()+pos);
}
void manage::borrarCouch(int pos) {
	vector_de_couchs.erase(vector_de_couchs.begin()+pos);
}

void manage::borrarPlan(int pos){
	vector_de_planes.erase(vector_de_planes.begin()+pos);
}
void manage::borrarSuscripcion(int pos){
	vector_de_suscripciones.erase(vector_de_suscripciones.begin()+pos);
}


couch BuscarDNI(std::vector<couch> v_couch, std::string DNI){
	couch ch;
	for(couch aux : v_couch){
		if(aux.ver_DNI()==DNI) return aux;
	}
	return ch;
}

cliente BuscarDNI(std::vector<cliente> v_cliente, std::string DNI){
	cliente cl;
	for(cliente aux : v_cliente){
		if(aux.ver_DNI()==DNI) return aux;
	}
	return cl;
}

plan BuscarPlan(std::vector<plan> v_plan, std::string nombre){
	plan pl;
	for(plan aux : v_plan){
		if(aux.ver_nombre_plan()==nombre) return aux;
	}
	return pl;
}
	
suscripcion BuscarSub(std::vector<suscripcion>v_suscripcion, std::string cliente_DNI, std::string nombre_plan){
	suscripcion sub;
	for(suscripcion aux : v_suscripcion){
		if(aux.ver_nombre_plan()==nombre_plan and aux.ver_DNI_cliente()==cliente_DNI) return aux;
	}
	return sub;
}

cliente manage::ObtenerCliente(int pos){
	return vector_de_clientes[pos];
}














