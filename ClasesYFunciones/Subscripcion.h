#ifndef SUBSCRIPCION_H
#define SUBSCRIPCION_H
#include <vector>
#include "Cliente.h"
#include "Plan.h"
class subscripcion{
private:
	std::vector<plan> p_subscritos;
	cliente c_subscritor;
	public:
	subscripcion(cliente c_subscritor, std::vector<plan> p_subscritos);
	int ver_precio_subscripcion();
	void eliminar_plan_sub(std::string nom_plan);
	bool plan_en_sub(std::string nom_plan);
};

#endif
