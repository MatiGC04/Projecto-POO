#ifndef PLAN_H
#define PLAN_H
#include <string>
#include <vector>
#include "Couch.h"

class plan {
	std::string nombre;
	int precio;
	std::vector<couch>p_couchs;
	
	//archivo de texto con una rutina base
public:
	plan(std::string nombre = "", int precio = 0);
	void modificar_precio(int nuevo_precio);
	int ver_precio();
	couch ver_couch(int pos);
	std::string nombre_plan();
};

#endif

