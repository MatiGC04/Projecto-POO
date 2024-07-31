/**
* @file Manage.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase Manage
**/
#include "Manage.h"
#include <fstream>
#include <algorithm>

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
int manage::cantidadCliente() const{
	return vector_de_clientes.size();
}
int manage::cantidadCouch() const{
	return vector_de_couchs.size();
}
int manage::cantidadPlanes() const{
	return vector_de_planes.size();
}
int manage::cantidadSuscripciones() const{
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


couch manage::buscarCouchsDNI(std::string DNI, int pos) const{
	couch ch;
	for(unsigned i=pos; i<vector_de_couchs.size(); i++){
		if(vector_de_couchs[i].ver_DNI()==DNI) return vector_de_couchs[i];
	}
	return ch;
}

cliente manage::buscarClientesDNI(std::string DNI, int pos) const{
	cliente cl;
	for(unsigned i=pos; i<vector_de_clientes.size(); i++){
		if(vector_de_clientes[i].ver_DNI()==DNI) return vector_de_clientes[i];
	}
	return cl;
}

plan manage::buscarPlanNombre(std::string nombre, int pos) const{
	plan pl;
	
	for(unsigned i=pos; i<vector_de_planes.size(); i++){
		if(vector_de_planes[i].ver_nombre_plan()==nombre) return vector_de_planes[i];
	}
	return pl;
}
	
suscripcion manage::buscarSub(std::string cliente_DNI, std::string nombre_plan, int pos) const{
	suscripcion sub;
	for(unsigned i=pos; i<vector_de_suscripciones.size(); i++){
		if(vector_de_suscripciones[i].ver_nombre_plan()==nombre_plan 
		and vector_de_suscripciones[i].ver_DNI_cliente()==cliente_DNI) return vector_de_suscripciones[i];
	}
	return sub;
}

cliente &manage::ObtenerCliente(int pos){
	return vector_de_clientes[pos];
}

suscripcion &manage::obtenerSuscripcion(int pos) {
	return vector_de_suscripciones[pos];
}

couch &manage::obtenerCouch(int pos) {
	return vector_de_couchs[pos];
}

plan &manage::obtenerPlan(int pos) {
	return vector_de_planes[pos];
}


std::string manage::planesSuscritos(std::string dni_cliente) const{
	
	std::string planes = "";
	
	for(unsigned i = 0;i < vector_de_suscripciones.size();i++) { 
		
		if(vector_de_suscripciones[i].ver_DNI_cliente() == dni_cliente && vector_de_suscripciones[i].estado_suscripcion()){
			planes += vector_de_suscripciones[i].ver_nombre_plan() + " ";
		}
		
	}
	
	return planes;
}
std::string manage::planesResponsables(std::string dni_couch) const{
	
	std::string planes = "";
	
	for(int i = 0;i < vector_de_planes.size();i++) {
		
		for(int j=0;j<vector_de_planes[i].ver_couchs_plan().size();j++) { 
			
			if(vector_de_planes[i].ver_couch_plan(j) == dni_couch){
				planes += vector_de_planes[i].ver_nombre_plan() + " ";
				break;
			}
			
		}
		
	}
	
	return planes;
}
int manage::buscarClientesNombre(std::string nomape, int pos) const{
	PasarMiniscula(nomape);
	if(nomape==""){
		return -1;
	}
	for(unsigned i=pos; i<vector_de_clientes.size(); i++){
		cliente cl = vector_de_clientes[i];
		std::string aux=cl.ver_apellido() + ", " + cl.ver_nombre();
		PasarMiniscula(aux);
		if(aux.find(nomape,0)!=std::string::npos) return i;
	}
	return -1;
}


void manage::OrdenarClientes(CriterioOrdenClientes criterio){
	auto CriterioClientesPlanesSuscritos = [this](const cliente &a, const cliente &b)->bool{
		std::string aux1=this->planesSuscritos(a.ver_DNI());
		std::string aux2=this->planesSuscritos(b.ver_DNI());
		PasarMiniscula(aux1);
		PasarMiniscula(aux2);
		return aux1< aux2;
	};
	switch(criterio){
	case ORDEN_APELLIDO_Y_NOMBRE:
		sort(vector_de_clientes.begin(), vector_de_clientes.end(), CriterioClientesNombreApellido); break;
	case ORDEN_DNI:
		sort(vector_de_clientes.begin(), vector_de_clientes.end(), CriterioClientesDNI); break;
	case ORDEN_EMAIL:
		sort(vector_de_clientes.begin(), vector_de_clientes.end(), CriterioClientesEmail); break;
	case ORDEN_TELEFONO_EMERGENCIAS:
		sort(vector_de_clientes.begin(), vector_de_clientes.end(), CriterioClientesTelefonoEmergencias); break;
		//lambda 
	case ORDEN_PLANES_SUSCRITOS:
		std::sort(vector_de_clientes.begin(), vector_de_clientes.end(), CriterioClientesPlanesSuscritos);
		break;
	}
	this->guardar();
}








