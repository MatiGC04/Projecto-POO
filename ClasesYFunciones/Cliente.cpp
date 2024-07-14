#include "Cliente.h"
#include <cstring>
#include <fstream>
#include <vector>



/// Implementación del constructor de la clase cliente
cliente::cliente (std::string nom, std::string ape, std::string mail, std::string sex, 
					std::string tel, std::string dir, std::string loc,std::string dni, 
					int dia, int mes, int anio, std::string tel_emergencias): 
	persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes , anio){
	
	
	this->tel_emergencias = tel_emergencias;
	fecha_pago = FechaHoy();
}


fecha cliente::ver_fecha_pago(){
	return fecha_pago;
}

/**
* Realiza una busqueda del plan 
* @param string nombre del plan
* @return iterator de tipo vector<planCliente>
**/	


/**
* Implementación del método para obtener los días faltantes antes del
* vencimiento de la cuota.
* @return si la fecha no esta vencida, retorna la diferencia de dias faltantes 
* antes del vencimiento de esta, sino retorna -1.
**/	
int cliente::dias_faltantes(){
	chequear_cuota();
	if(chequear_cuota()==true){
		return DifDias(FechaHoy(),FechaVencimiento(fecha_pago));
	}
	return -1;
}


///Implementación del método que para saber el estado actual de la cuota.
bool cliente:: chequear_cuota(){
	fecha venc = FechaVencimiento(fecha_pago);
	if(venc<FechaHoy()){
		return false;
	}
	return true;
}


/// Implementación de los métodos para modificar atributos 
void cliente::modificar_tel_em(std::string tel_em_nuevo){
	tel_emergencias=tel_em_nuevo;
}


///Implementación del método para el pago de la cuota
void cliente::pagar_cuota(){
	fecha_pago=FechaHoy();
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


///Implementacion del metodo que lee el registro de un archivo binario
void cliente::leer_en_binario(std::ifstream &archivo){
	registroCliente registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registro));
	nombre = registro.nombre;
	apellido = registro.apellido;
	email = registro.email;
	telefono = registro.telefono;
	direccion = registro.direccion;
	sexo = registro.sexo;
	dni = registro.dni;
	tel_emergencias = registro.telefono_emergencias;
	
	fecha_pago = ConvertFecha(registro.dia_pago, registro.mes_pago, registro.anio_pago);
	fecha_nacimiento = ConvertFecha(registro.dia_nac, registro.mes_nac, registro.anio_nac);
}


bool CriterioNombreApellido(cliente p1, cliente p2){
	std::string txt1 = p1.ver_nombre() + " " + p1.ver_apellido();
	std::string txt2 = p2.ver_nombre() + " " + p2.ver_apellido();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;	
}
	
bool CriterioLocalidad(cliente p1, cliente p2){
	std::string txt1 = p1.ver_loc();
	std::string txt2 = p2.ver_loc();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
bool CriterioEdad(cliente p1, cliente p2){
	return p1.ver_edad() < p2.ver_edad();
}

bool CriterioEmail(cliente p1, cliente p2){
	std::string txt1 = p1.ver_email();
	std::string txt2 = p2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
