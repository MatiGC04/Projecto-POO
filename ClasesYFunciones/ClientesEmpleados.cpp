#include <ClientesEmpleados.h>

#include <string>


///Metodos Couch

couch::couch(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, std::string loc, std::string dni, int dia, 
			int mes, int anio, std::string _cbu, std::string _alias): persona(nom, ape, mail, sex, tel, dir, loc, dni, dia, mes, anio){
	cbu=_cbu;
	alias=_alias;
}


std::string couch::ver_cbu(){
	return cbu;
}

std::string couch::ver_alias(){
	return alias;
}


///Metodos Cliente


cliente::cliente(std::string nom, std::string ape, std::string mail, std::string sex, std::string tel, std::string dir, 
				 std::string loc,std::string dni, int dia, int mes, int anio, std::string tel_emergencias): 
				persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes , anio){
	
	
	this->tel_emergencias = tel_emergencias;
	
	//si se carga un nuevo cliente es porque ya pago la mensualidad por lo tanto actualizo la fecha del pago al dia actual
	fecha_pago = FechaHoy();	
	estado_pago = true;
}


void cliente::agregar_plan(planCliente plan){
	planes.push_back(plan);
}

void cliente:: chequear_cuota(){
	/*fecha hoy = FechaHoy();
	int delta_dias = DifDias(fecha_pago, hoy);
	
	if(delta_dias>31){
		estado_pago = false;
	}*/
	fecha venc = FechaVencimiento(fecha_pago);
	if(venc<FechaHoy()){
		estado_pago = false;
	}
}



int cliente::dias_faltantes(){
	chequear_cuota();
	if(estado_pago==true){
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
	}
	return -1;
}


void cliente::pagar_cuota(){
	estado_pago=true;
	fecha_pago=FechaHoy();
}



bool cliente::ver_estado_pago(){
	return estado_pago;
}

fecha cliente::ver_fecha_pago(){
	return fecha_pago;
}

planCliente cliente::ver_plan(int pos){
	return planes[pos];
}
///NOTE: "Creeria que no es necesario pedir un couch c"
planCliente cliente:: ver_plan(std::string _nombre_plan, couch c){
	for(unsigned i=0; i<planes.size(); i++){
		if(planes[i].nombre_plan == _nombre_plan && planes[i].couch_cargo.ver_nombre()==c.ver_nombre()){
			return planes[i];
		}
	}
}




