#include "subscripcion.h"
subscripcion::subscripcion(cliente c_subscritor, std::vector<plan> p_subscritos){
	this->c_subscritor = c_subscritor;
	this->p_subscritos = p_subscritos;
}

subscripcion::ver_precio_subscripcion(){
	int precio;
	for( unsigned i=0; i<p_subscritos.size() ; ++i ){
		precio = precio + p_subscritos[i].ver_precio();
	}
	return precio;
}
