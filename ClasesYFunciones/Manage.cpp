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
	
	int cantidad_de_couchs = vector_de_couchs.size();
	
	for (int i = 0; i < cantidad_de_couchs; i++){
		vector_de_couchs[i].guardar_en_binario(archi_couchs);
	}
	archi_couchs.close();
	
	
	std::ofstream archi_clientes(nombre_archivo_clientes.c_str(),std::ios::binary|std::ios::trunc);
	if (!archi_clientes.is_open()){ 
		return false;
	}
	
	int cantidad_de_clientes = vector_de_clientes.size();
	
	for (int i = 0; i < cantidad_de_clientes; i++){
		vector_de_clientes[i].guardar_en_binario(archi_clientes);
	}
	archi_clientes.close();

	return true;

}
