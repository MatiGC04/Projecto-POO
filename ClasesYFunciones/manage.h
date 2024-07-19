#ifndef MANAGE_H
#define MANAGE_H
#include "Couch.h"
#include "Cliente.h"
#include <vector>
#include "Suscripcion.h"
#include "Plan.h"


class manage{
private:
	
	std::string nombre_archivo_couchs;
	
	std::string nombre_archivo_clientes;
	
	std::string nombre_archivo_suscripciones;
	
	std::string nombre_archivo_planes;
	
	std::vector<couch> vector_de_couchs;

	std::vector<cliente> vector_de_clientes;
	
	std::vector<suscripcion> vector_de_suscripciones;
	
	std::vector<plan> vector_de_planes;
	
	
public:
	/// @brief Crea el objeto y carga los datos desde el archivo
	manage(std::string nombre_archivo_couchs, std::string nombre_archivo_clientes, std::string nombre_archivo_suscripciones, std::string nombre_archivo_planes);
	
	/// @brief Guarda los datos en el archivo
	bool guardar();
	
	/// @brief Devuelve la cantida de clientes y couchs   de los vectores
	int cantidadCliente();
	int cantidadCouch();
	int cantidadSuscripciones();
	int cantidadPlanes();
	
	/// @brief Agrega cliente al arreglo
	void agregarCliente(const cliente &cl);
	/// @brief Agrega couch al arreglo
	void agregarCouch (const couch &ch);
	void agregarPlan(const plan &p);
	void agregarSuscripcion(const suscripcion &sub);
	
	/// @brief Métodos para borrar clientes y couch  de los vectores 
	void borrarCliente(int pos);
	void borrarCouch(int pos);
	void borrarSuscripcion(int pos);
	void borrarPlan(int pos); 
	/// @brief Ordenar vector (falta)
};
#endif
