#ifndef PLAN_H
#define PLAN_H
#include <string>

class plan {
	std::string nombre;
	int precio;
	//archivo de texto con una rutina base
public:
	plan(std::string nombre = "", int precio = 0);
	void modificar_precio(int nuevo_precio);
	int ver_precio();
};

#endif

