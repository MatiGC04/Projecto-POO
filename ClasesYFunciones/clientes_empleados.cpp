#include <clientes_empleados.h>

#include <string>
///Metodos class Cliente

Cliente::Cliente(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, 
			std::string loc, int dni, int dia, int mes, int anio, int temergencias=0): 
			persona(nom, ape, mail , sex, tel, dir, loc, dni,dia, mes , anio){
	estado_pago=true;
	tel_emergencias=temergencias;
	
	//si se carga un nuevo cliente es porque ya pago la mensualidad
	//por lo tanto actualizo la fecha del pago al dia actual
	fecha_pago= FechaHoy();
}


void Cliente::agregar_plan(Plan t_plan){
	tipo_de_plan= t_plan;
}

///retornar los dias que falta para que se venza la cuota
int Cliente::dias_faltantes(){
	Fecha hoy =FechaHoy();
	
	return DifDias(fecha_pago, hoy);
}

bool Cliente::debe(){
	return estado_pago;
}

void Cliente:: chequear_cuota(){
	Fecha hoy =FechaHoy();
	int delta_dias= DifDias(fecha_pago, hoy);
	
	if(delta_dias>31){
		estado_pago=false;
	}
}
//
void Cliente::pagar_cuota(){
	estado_pago=true;
	
	//Falta chequear la sobrecarga del operador = del sturct Fecha
	fecha_pago=FechaHoy();
}


///Metodos de class Couch
int Couch::ver_cbu(){return cbu;}

std::string Couch::ver_alias(){return alias;}


