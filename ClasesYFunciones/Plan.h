#ifndef PLAN_H
#define PLAN_H
#include <string>
#include <vector>
#include "Couch.h"
#include <fstream>

struct registroPlan{
	char nombre[100];
	char rutina_base[100];
	int precio;
};


class plan {
	std::string nombre;
	std::vector<couch>p_couchs;
	std::string nombre_rutina_base;
	int precio;
	
public:
	plan(std::string nombre = "", int precio = 0);
	void modificar_precio(int nuevo_precio);
	int ver_precio_plan();
	couch ver_couch_plan(int pos);
	std::string ver_nombre_plan();
	std::string ver_nombre_rutina();
	void leer_en_binario(std::ifstream &archivo);
	void guardar_en_binario(std::ofstream &archivo);
};

#endif

