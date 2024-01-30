/**
*@file ClienteAndCouch.cpp
*@brief Implementación de los métodos de la clase couch y la clase cliente
**/

#include <ClienteAndCouch.h>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;


/// Implementación del constructor de la clase couch
couch::couch(std::string nom, std::string ape, std::string mail, std::string sex,
	std::string tel, std::string dir, std::string loc, std::string dni,
	int dia, int mes, int anio, std::string _cbu, std::string _alias):
	persona(nom, ape, mail, sex, tel, dir, loc, dni, dia, mes, anio){
	cbu=_cbu;
	alias=_alias;
}

/// Implementación de los métodos para obtener los atributos de couch
std::string couch::ver_cbu(){
	return cbu;
}
std::string couch::ver_alias(){
	return alias;
}

/// Implementación del método para guardar un couch en un archivo binario
void couch::guardar_en_binario(std::ofstream &archivo){
	registroCouch registro;
	strcpy(registro.nombre,nombre.c_str());
	strcpy(registro.apellido,apellido.c_str());
	strcpy(registro.email,email.c_str());
	strcpy(registro.telefono,telefono.c_str());
	strcpy(registro.direccion,direccion.c_str());
	strcpy(registro.sexo,sexo.c_str());
	strcpy(registro.dni,dni.c_str());
	strcpy(registro.cbu,cbu.c_str());
	strcpy(registro.alias,alias.c_str());
	registro.dia_nac = fecha_nacimiento.dia;
	registro.mes_nac = fecha_nacimiento.mes;
	registro.anio_nac = fecha_nacimiento.anio;
	archivo.write(reinterpret_cast<char*>(&registro),sizeof(registro));
}



/// Implementación del constructor de la clase cliente
cliente::cliente(std::string nom, std::string ape, std::string mail,
				std::string sex, std::string tel, std::string dir, 
				std::string loc,std::string dni, int dia, int mes, int anio,
				std::string tel_emergencias): persona(nom, ape, mail , sex, tel,
				dir, loc, dni, dia, mes , anio){
	
	
	this->tel_emergencias = tel_emergencias;
	
	//si se carga un nuevo cliente es porque ya pago la mensualidad por lo tanto
	//actualizo la fecha del pago al dia actual
	fecha_pago = FechaHoy();	
	
	//estado_pago = true;
}

///Implementación de los métodos para obtener los atributos de Cliente
/*bool cliente::ver_estado_pago(){
return estado_pago;
}*/

fecha cliente::ver_fecha_pago(){
	return fecha_pago;
}

planCliente cliente::ver_plan(int pos){
	return planes[pos];
}

planCliente cliente:: ver_plan(std::string _nombre_plan){
	for(unsigned i=0; i<planes.size(); i++){
		if(planes[i].nombre_plan == _nombre_plan){ //&& planes[i].couch_cargo.ver_nombre()==c.ver_nombre()){
			return planes[i];
		}
	}
}


///Implementación de los métodos para modificar atributos 
void cliente::modificar_tel_em(std::string tel_em_nuevo){
	tel_emergencias=tel_em_nuevo;
}

void modificar_plan(int pos, planCliente nuevo_plan){
	//NOTE:creo que con el dato de nuevo_plan bastaría
} 


///Implementación del método para agregar un plan a un cliente 
void cliente::agregar_plan(planCliente plan){
	planes.push_back(plan);
}


/**
* Implementación del método para obtener los días faltantes antes del vencimiento de la cuota.
* @return si la fecha no esta vencida, retorna la diferencia de dias faltantes antes del vencimiento de esta,
* sino retorna -1;
**/	
int cliente::dias_faltantes(){
	chequear_cuota();
	if(chequear_cuota()==true){
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
	}
	return -1;
}


///Implementación del método para el pago de la cuota
void cliente::pagar_cuota(){
	//estado_pago=true;
	fecha_pago=FechaHoy();
}


///Implementación del método que para saber el estado actual de la cuota.
bool cliente:: chequear_cuota(){
	fecha venc = FechaVencimiento(fecha_pago);
	if(venc<FechaHoy()){
		//estado_pago = false;
		return false;
	}
	return true;
}


///Implementación del metódo que guarda el registro en un archivo binario
void cliente::guardar_en_binario(std::ofstream &archivo){
	registroCliente registro;
	strcpy(registro.nombre,nombre.c_str());
	strcpy(registro.apellido,apellido.c_str());
	strcpy(registro.email,email.c_str());
	strcpy(registro.telefono,telefono.c_str());
	strcpy(registro.direccion,direccion.c_str());
	strcpy(registro.sexo,sexo.c_str());
	strcpy(registro.dni,dni.c_str());
	strcpy(registro.telefono_emergencias,tel_emergencias.c_str());
	
	registro.dia_pago = fecha_pago.dia;
	registro.mes_pago = fecha_pago.mes;
	registro.anio_pago = fecha_pago.anio;
	
	registro.dia_nac = fecha_nacimiento.dia;
	registro.mes_nac = fecha_nacimiento.mes;
	registro.anio_nac = fecha_nacimiento.anio;
	
	archivo.write(reinterpret_cast<char*>(&registro),sizeof(registro));
}


///Implementación de los Criterios de comparación	
bool CriterioNombreApellido(cliente p1, cliente p2){
	std::string txt1= p1.ver_nombre()+ " " + p1.ver_apellido();
	std::string txt2= p2.ver_nombre()+ " " + p2.ver_apellido();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
	
}
	
bool CriterioLocalidad(cliente p1, cliente p2){
	std::string txt1= p1.ver_loc();
	std::string txt2= p2.ver_loc();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
}
	
bool CriterioEdad(cliente p1, cliente p2){
	return p1.ver_edad()<p2.ver_edad();
}
	
bool CriterioEmail(cliente p1, cliente p2){
	std::string txt1= p1.ver_email();
	std::string txt2= p2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
}
	
bool CriterioNombreApellido(couch c1, couch c2){
	std::string txt1= c1.ver_nombre() + " " + c1.ver_apellido();
	std::string txt2= c2.ver_nombre() + " " + c2.ver_apellido();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
}
	
bool CriterioLocalidad(couch c1, couch c2){
	std::string txt1= c1.ver_loc();
	std::string txt2= c2.ver_loc();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
}
	
bool CriterioEdad(couch c1, couch c2){
	return c1.ver_edad()<c2.ver_edad();
}
	
bool CriterioEmail(couch c1, couch c2){
	std::string txt1= c1.ver_email();
	std::string txt2= c2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;
}
	

