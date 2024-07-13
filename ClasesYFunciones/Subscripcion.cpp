#include "subscripcion.h"
subscripcion::subscripcion(cliente c_subscritor, std::vector<plan> p_subscritos){
	this->c_subscritor = c_subscritor;
	this->p_subscritos = p_subscritos;
}

int subscripcion::ver_precio_subscripcion(){
	int precio;
	for( unsigned i=0 ; i<p_subscritos.size() ; ++i ){
		precio = precio + p_subscritos[i].ver_precio();
	}
	return precio;
}
void subscripcion::eliminar_plan_sub(std::string nom_plan){ //notar que esta funcion no hace nada si el plan no esta en la subscripcion
	for( auto it = p_subscritos.begin() ; it != p_subscritos.end() ; ++it ){
			
		if( (*it).nombre_plan() == nom_plan ){
			p_subscritos.erase(it);
		}
	}

}

bool subscripcion::plan_en_sub(std::string nom_plan){
	for( auto it= p_subscritos.begin() ; it != p_subscritos.end() ; ++it ){
		if((*it).nombre_plan() == nom_plan){
			return true;
		}
	}
	return false;
}
