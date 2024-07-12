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
	ver_precio_subscripcion();
};

#endif
