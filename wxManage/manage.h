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
enum CriterioOrdenClientes { ORDEN_APELLIDO_Y_NOMBRE, ORDEN_DNI, ORDEN_EMAIL, ORDEN_PLANES_SUSCRITOS, ORDEN_TELEFONO_EMERGENCIAS };
enum CriterioOrdenCouchs { ORDEN_APENOMB, O_DNI, ORDEN_PLANES_RESPONSABLES, ORDEN_TELEFONO};
enum CriterioOrdenSuscripcion { O_APENOM_CL, O_DNI_CL, O_APENOM_CH, O_DNI_CH, O_PLAN, O_FECH_PAGO, O_FECH_VENC };


class manage{
private:
	/// @brief Nombre del archivo de donde se leen y escriben los datos referentes a los coachs
	std::string nombre_archivo_couchs;
	
	/// @brief Nombre del archivo de donde se leen y escriben los datos referentes a los clientes
	std::string nombre_archivo_clientes;
	
	/// @brief Nombre del archivo de donde se leen y escriben los datos referentes a las suscripciones
	std::string nombre_archivo_suscripciones;
	
	/// @brief Nombre del archivo de donde se leen y escriben los datos referentes a los planes
	std::string nombre_archivo_planes;
	
	
	/// @brief Contenedor para los datos de los coachs
	std::vector<couch> vector_de_couchs;

	/// @brief Contenedor para los datos de los clientes
	std::vector<cliente> vector_de_clientes;
	
	/// @brief Contenedor para los datos de las suscripciones
	std::vector<suscripcion> vector_de_suscripciones;
	
	/// @brief Contenedor para los datos de los planes
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
	
	/// @brief Metodos para buscar un cliente o couch por su DNI
	cliente buscarClientesDNI(std::string DNI, int pos=0) const;
	couch buscarCouchsDNI(std::string DNI, int pos=0) const;
	
	/// @brief Metodo para buscar la posicion en la que se encuentra un couch por su DNI
	int buscarPosCouchsDNI(std::string DNI, int pos=0) const;
	
	/// @brief Metodos para buscar por su nombre  por su nombre
	plan buscarPlanNombre(std::string DNI, int pos=0) const;
	suscripcion buscarSub(std::string DNI, std::string nombre_plan, int pos=0) const;
	
	/// @brief Metodos para buscar la posicion en la que se encuentra por su nombre
	int buscarClientesNombre(std::string nombre, int pos=0) const;
	int buscarCouchsNombre(std::string nombre, int pos=0) const;
	int buscarCouchsNombre(int pos_plan, std::string nombre, int pos=0);
	int buscarClientesEnSub(std::string nomape, int pos=0);
	
	/// @brief Metodos para devolver un dato de los vectores
	cliente &ObtenerCliente(int pos);
	suscripcion &obtenerSuscripcion(int pos);
	couch &obtenerCouch(int pos);
	plan &obtenerPlan(int plan);
	
	/// @brief Metodos para saber en que planes esta suscripto un Cliente, devuelve como string
	std::string planesSuscritos(std::string dni_cliente) const;
	std::string planesResponsables(std::string dni_couch) const;
	
	/// @brief Metodos que nos permite saber cuales couchs estan o no en un plan (IN/OUT)
	std::vector<couch> CouchsInPlan(int pos_plan);
	std::vector<couch> CouchsOutPlan(int pos_plan);
	
	/// @brief Metodos que nos permite ordenar los datos de las distintas entidades por medio de criterios
	void OrdenarClientes(CriterioOrdenClientes criterio);
	void OrdenarCouchs(CriterioOrdenCouchs criterio);
	void OrdenarSuscripciones(CriterioOrdenSuscripcion criterio);
};
#endif
