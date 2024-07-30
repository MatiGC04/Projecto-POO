/**
*@file Manage.cpp
*@brief Implementación de los métodos de la clase Manage.
**/
#ifndef MANAGE_H
#define MANAGE_H
#include "Couch.h"
#include "Cliente.h"
#include <vector>
#include "Suscripcion.h"
#include "Plan.h"

/// @brief enumeración para los posibles criterios de ordenamiento para la ventana
///  clientes con el fin de pasar como argumento al método, queda más legible que un número
enum CriterioOrdenClientes { ORDEN_APELLIDO_Y_NOMBRE, ORDEN_DNI, ORDEN_EMAIL, ORDEN_PLANES_SUSCRITOS, ORDEN_TELEFONO_EMERGENCIAS };

class manage{
private:
	/// @brief Atributos de la clase Manage
	std::string nombre_archivo_couchs;
	
	std::string nombre_archivo_clientes;
	
	std::string nombre_archivo_suscripciones;
	
	std::string nombre_archivo_planes;
	
	std::vector<couch> vector_de_couchs;

	std::vector<cliente> vector_de_clientes;
	
	std::vector<suscripcion> vector_de_suscripciones;
	
	std::vector<plan> vector_de_planes;
	
	
public:
	/// @brief Instancia objetos apartir de datos leidos de los archivos 
	manage(std::string nombre_archivo_couchs, std::string nombre_archivo_clientes, std::string nombre_archivo_suscripciones, std::string nombre_archivo_planes);
	
	/// @brief Guarda los datos almacenados en los arreglos dentro de un archivo binario
	bool guardar();
	
	/// @brief Devuelve la cantidad de clientes, couchs, planes y suscripciones de los vectores correspondientes
	int cantidadCliente() const;
	int cantidadCouch() const;
	int cantidadPlanes() const;
	int cantidadSuscripciones() const;
	
	/// @brief Metodos para agregar clientes, couchs, planes y suscripciones a sus arreglos correspondientes
	void agregarCliente(const cliente &cl);
	void agregarCouch (const couch &ch);
	void agregarPlan(const plan &p);
	void agregarSuscripcion(const suscripcion &sub);
	
	/// @brief Métodos para borrar clientes, couchs, planes y suscripciones  de los arreglos correspondientes 
	void borrarCliente(int pos);
	void borrarCouch(int pos);
	void borrarPlan(int pos);
	void borrarSuscripcion(int pos);
	
	cliente buscarClientesDNI(std::string DNI, int pos=0) const;
	couch buscarCouchsDNI(std::string DNI, int pos=0) const;
	plan buscarPlanNombre(std::string DNI, int pos=0) const;
	suscripcion buscarSub(std::string DNI, std::string nombre_plan, int pos=0) const;
	int buscarClientesNombre(std::string nombre, int pos=0) const;
	
	
	cliente &ObtenerCliente(int pos);
	suscripcion &obtenerSuscripcion(int pos);
	couch &obtenerCouch(int pos) ;
	plan &obtenerPlan(int plan) ;
	
	std::string planesSuscritos(std::string dni_cliente) const;
	
	std::string planesResponsables(std::string dni_couch) const;
	
	
	/// @brief Ordenar vector (falta)
	void OrdenarClientes(CriterioOrdenClientes criterio);

};
#endif
