#include <clientes_empleados.h>

#include <string>


///Metodos de class Couch
couch::couch(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, std::string loc, int dni, int dia, 
			int mes, int anio, std::string _cbu,std::string _alias): persona(nom, ape, mail , sex, tel, dir, loc, dni,dia, mes , anio){
	
	cbu=_cbu;
	alias=_alias;
	
	
}


std::string couch::ver_cbu(){return cbu;}

std::string couch::ver_alias(){return alias;}


////////////////////////////////////////////////////////////////////////

///Metodos class Cliente

cliente::cliente(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, 
				 std::string loc, int dni, int dia, int mes, int anio, std::string _tel_emergencias): 
	persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes , anio){
	
	
	tel_emergencias=_tel_emergencias;
	
	fecha_pago= FechaHoy();	///si se carga un nuevo cliente es porque ya pago la mensualidad por lo tanto actualizo la fecha del pago al dia actual
	estado_pago=true;
}


void cliente::agregar_plan(planCliente _plan){
	planes.push_back(_plan);
}

///retornar los dias que falta para que se venza la cuota

int cliente::dias_faltantes(){
	
	chequear_cuota();
	if(estado_pago==true){
		int deltadias;
		return deltadias=DifDias(fecha_pago,FechaHoy());
	}
	return -1;
}


bool cliente::ver_estado_pago(){
	return estado_pago;
}

void cliente:: chequear_cuota(){
	fecha hoy =FechaHoy();
	int delta_dias= DifDias(fecha_pago, hoy);
	
	if(delta_dias>31){
		estado_pago=false;
	}
}
//
void cliente::pagar_cuota(){
	estado_pago=true;
	
	//Falta chequear la sobrecarga del operador = del sturct Fecha
	fecha_pago=FechaHoy();
}
