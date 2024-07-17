#ifndef PLAN_H
#define PLAN_H
#include <string>
#include <vector>
#include "Couch.h"
#include <fstream>

class plan {
	std::string nombre;
	int precio;
	std::vector<couch>p_couchs;
	std::string nombre_rutina_base;
	
public:
	plan(std::string nombre = "", int precio = 0);
	void modificar_precio(int nuevo_precio);
	int ver_precio_plan();
	couch ver_couch_plan(int pos);
	std::string ver_nombre_plan();
	std::string ver_nombre_rutina();
};

#endif

