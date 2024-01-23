#include <clientes_empleados.h>

#include <string>
///Metodos class Cliente

cliente::cliente(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, 
			std::string loc, int dni, int dia, int mes, int anio, std::string temergencias=""): 
			persona(nom, ape, mail , sex, tel, dir, loc, dni,dia, mes , anio){
	estado_pago=true;
	tel_emergencias=temergencias;
	
	//si se carga un nuevo cliente es porque ya pago la mensualidad
	//por lo tanto actualizo la fecha del pago al dia actual
	fecha_pago= FechaHoy();
}


void cliente::agregar_plan(plan t_plan){
	tipo_de_plan= t_plan;
}

///retornar los dias que falta para que se venza la cuota
int cliente::dias_faltantes(){
	int delta_dias= DifDias(fecha_pago,FechaHoy());
	
	
	//si la diferencia de dias supera los 31 dias, es porque la fecha del pago se venció
	//el estado_pago es falso-> a delta_dias, le resto 31 para que me muestre la cantidad de dias que lleva  vencida
	if(estado_pago==false){
		delta_dias=delta_dias-31;
		//delta_dias=(-1)*delta_dias;
		return delta_dias;
	}
	return delta_dias;
}

bool cliente::debe(){
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


///Metodos de class Couch
int couch::ver_cbu(){return cbu;}

std::string couch::ver_alias(){return alias;}


