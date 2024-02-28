#ifndef MANAGE_H
#define MANAGE_H
#include "Couch.h"
#include "Cliente.h"
#include <vector>


class manage{
private:
	
	std::string nombre_archivo_couchs;
	
	std::string nombre_archivo_clientes;
	
	std::vector<couch> vector_de_couchs;

	std::vector<cliente> vector_de_clientes;

public:
	
	manage(std::string nom_archivo_couchs, std::string nom_archivo_clientes);
	
	bool guardar();
	
	///Métodos para borrar couch y clientes de los vectores 
	void borrar_cliente(int pos);
	void borrar_couch(int pos); //pensar método para actualizar los planes de los clientes en donde se encuentre dicho couch
	
};
#endif
