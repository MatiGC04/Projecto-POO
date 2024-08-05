/**
* @file Plan.h
* @brief Implementaciones de todo lo necesario para trabajar con la clase 
* clase Plan.
*
* 
* Este archivo define la clase couch, las funciones auxiliares para
* compararlas y el struct de registro para poder guardar y leer
* en archivo binarios
**/
#ifndef PLAN_H
#define PLAN_H


#include <fstream>
#include <string>
#include <vector>
/**
* @brief Estructura auxiliar para usar con archivos binarios en la clase Plan.
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de 
* intermediaria para guardar y escribir los datos de una persona.
*
* Debido al problema de guardar punteros en binario decidimos sobredimensionar
* un char de couchs para poder guardar el id de estos en binario. Este soporta
* hasta 31 couchs por plan
**/

struct registroPlan{
	char nombre[100];
	char rutina_base[100];
	int precio;
	int num_couchs; //tamaño del vector
	char couchs[10][8]; //asumiendo un tamaño máximo para los DNIs, por ejemplo,
	//8 caracteres y un número máximo de 10 couchs
};

class plan {
private:
	/// @brief Atributos de la clase Plan
	std::string nombre;
	std::vector<std::string>p_couchs;
	std::string nombre_rutina_base;
	int precio;
	
public:
	/// @brief Constructor de la clase Plan con sus paramentros por defecto
	plan(std::string nombre = "", int precio = 0);
	
	/// @brief Valida que los datos cargados sean correctos 
	std::string validar_datos() const;
	
	/// @brief Método para modificar el precio del plan
	void modificar_precio(int nuevo_precio);
	
	void operator=(plan pl);
	/// @brief Métodos para obtener los atributos de una suscripcion
	int ver_precio_plan() const; 
	int ver_cant_couchs() const; 
	std::string ver_couch_plan(int pos) const; ///<devuelve identificativo del couch, el DNI
	std::vector<std::string> ver_couchs_plan() const; ///< devuelve el vector completo de couchs
	std::string ver_nombre_plan() const ;
	std::string ver_nombre_rutina() const;
	
	/// @brief Métodos para leer/guardar su registro en un archivo binario
	void leer_en_binario(std::ifstream &archivo);
	void guardar_en_binario(std::ofstream &archivo);
	
	/// @brief Método para agregar un couch al vector
	void agregar_couch(std::string id_couch);
	
	/// @brief Método para eliminar un couch del vector
	void eliminar_couch(std::string id_couch);
	
};
///@brief Funciones para comparar planes por precio y nombre
bool CriterioPrecioPlan(plan p1, plan p2);

bool CriterioNombre(plan p1, plan p2);
#endif

