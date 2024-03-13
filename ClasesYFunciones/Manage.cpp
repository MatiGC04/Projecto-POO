/**
* @file Manage.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase Manage
**/
#include <Manage.h>
#include <fstream>
#include <vector>

manage::manage(std::string nom_archivo_couchs, std::string nom_archivo_clientes){
	
	nombre_archivo_couchs = nom_archivo_couchs;
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
	
	nombre_archivo_clientes = nom_archivo_clientes;
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
	
}

bool manage::guardar() {
	
	std::ofstream archi_couchs(nombre_archivo_couchs.c_str(), std::ios::binary|std::ios::trunc);
	if (!archi_couchs.is_open()){ 
		return false;
	}
	
	for (unsigned i = 0; i < vector_de_couchs.size(); i++){
		vector_de_couchs[i].guardar_en_binario(archi_couchs);
	}
	archi_couchs.close();
	
	
	
	std::ofstream archi_clientes(nombre_archivo_clientes.c_str(),std::ios::binary|std::ios::trunc);
	if (!archi_clientes.is_open()){ 
		return false;
	}
	
	for (unsigned i = 0; i < vector_de_clientes.size(); i++){
		vector_de_clientes[i].guardar_en_binario(archi_clientes);
	}
	archi_clientes.close();

	return true;

}
///Implementacion e los metodos para ver la cantidad de clientes y couchs
int manage::cantidadCliente() {
	return vector_de_clientes.size();
}
int manage::cantidadCouch(){
	return vector_de_couchs.size();
}

///Implementaciones de los metodos para agregar couchs y clientes
void manage::agregarCliente(const cliente &cl) {
	vector_de_clientes.push_back(cl);
}

void manage::agregarCouch (const couch &ch){
	vector_de_couchs.push_back(ch);
}

/* chequear
cliente &manage::operator[](int i) {
	return vector_de_clientes[i];
}
couch &manage::operator[](int i) {
	return vector_de_couchs[i];
}*/

///Implemetaciones de métodos para borrar clientes y couchs de los vectores
void manage::borrarCliente(int pos) {
	vector_de_clientes.erase(vector_de_clientes.begin()+pos);
}

void manage::borrarCouch(int pos) {
	vector_de_couchs.erase(vector_de_couchs.begin()+pos);
	//desarrollar metodo de buscar el couch en todas las planillas de los clientes
	//para luego eliminar las rutinas
}
