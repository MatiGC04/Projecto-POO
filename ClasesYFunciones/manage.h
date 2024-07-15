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
	/// @brief Crea el objeto y carga los datos desde el archivo
	manage(std::string nom_archivo_couchs, std::string nom_archivo_clientes);
	
	/// @brief Guarda los datos en el archivo
	bool guardar();
	
	/// @brief Devuelve la cantida de clientes y couchs   de los vectores
	int cantidadCliente();
	int cantidadCouch();
	
	/// @brief Agrega cliente al arreglo
	void agregarCliente(const cliente &cl);
	/// @brief Agrega couch al arreglo
	void agregarCouch (const couch &ch);
	
	/* chequear
	///@brief Devuelve un registro para ver o modificar
	cliente &operator[](int i);
	couch &operator[](int i);
	*/
	
	/// @brief Métodos para borrar clientes y couch  de los vectores 
	void borrarCliente(int pos);
	void borrarCouch(int pos); //pensar método para actualizar los planes de los clientes en donde se encuentre dicho couch
	
	/// @brief Ordenar vector (falta)
};
#endif
