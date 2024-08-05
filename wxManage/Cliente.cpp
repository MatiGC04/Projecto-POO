/**
* @file Cliente.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Cliente.
**/
#include "Cliente.h"
#include <cstring>
#include <fstream>
#include "Utils.h"

/// Implementacion del constructor de la clase cliente
cliente::cliente (std::string nom, std::string ape, std::string mail, 
				  std::string sex, std::string tel, std::string dir, 
				  std::string loc, std::string dni, 
				  int dia, int mes, int anio, std::string tel_emergencias): 
	persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes, anio){
	this->tel_emergencias = tel_emergencias;
}


/// Implementacion del metodo que valida los atributos del cliente
std::string cliente::validar_datos_cl() const{
	std::string error=validar_datos();
	if(contieneLetra(tel_emergencias)) error+="El telefono de emergencias no debe contener letras \n";
	if(tel_emergencias.size()>25){
		error+="El telefono de emergencias es demaciado largo \n";
	}if(tel_emergencias==""){
		error+="El telefono de emergencias esta vacio \n";
	}
	return error;
}


/// Implementacion del metodo para ver el tel de emergencia del cliente
std::string cliente::ver_tel_emergencia() const{
	return tel_emergencias;
}


/// Implementación del metodo para modificar el tel de emergencia del cliente
void cliente::modificar_tel_em(std::string tel_em_nuevo){
	tel_emergencias=tel_em_nuevo;
}


///Implementación del metódo que guarda el registro de un cliente en un archivo binario
void cliente::guardar_en_binario(std::ofstream &archivo){
	registroCliente registro;
	strcpy(registro.nombre,nombre.c_str());
	strcpy(registro.apellido,apellido.c_str());
	strcpy(registro.email,email.c_str());
	strcpy(registro.telefono,telefono.c_str());
	strcpy(registro.direccion,direccion.c_str());
	strcpy(registro.sexo,sexo.c_str());
	strcpy(registro.dni,dni.c_str());
	strcpy(registro.localidad, localidad.c_str());
	strcpy(registro.telefono_emergencias,tel_emergencias.c_str());
	registro.fecha_nac = fecha_nacimiento;
	archivo.write(reinterpret_cast<char*>(&registro),sizeof(registro));
}


///Implementacion del metodo que lee el registro de un cliente de un archivo binario
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
	localidad = registro.localidad;
	tel_emergencias = registro.telefono_emergencias;
	fecha_nacimiento = registro.fecha_nac;
}


/**
* Devuelve true si la combinacion "apellido, nombre" de el primer cliente esta
* antes segun el orden alfabetico que el apellido y nombre de el segundo cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioClientesNombreApellido(cliente p1, cliente p2){
	std::string txt1 = p1.ver_apellido() + " " + p1.ver_nombre();
	std::string txt2 = p2.ver_apellido() + " " + p2.ver_nombre();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1<txt2;	
}

	
/**
* Devuelve true si el email de el primer cliente esta antes segun el 
* orden alfabetico que el email de el segundo cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioClientesEmail(cliente p1, cliente p2){
	std::string txt1 = p1.ver_email();
	std::string txt2 = p2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}

	
/**
* Devuelve true si el DNI de el primer cliente esta antes segun el 
* orden alfabetico que el DNI de el segundo cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioClientesDNI(cliente p1, cliente p2){
	std::string txt1 = p1.ver_DNI();
	std::string txt2 = p2.ver_DNI();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
	
/**
* Devuelve true si el telefono de eme. de el primer cliente esta antes segun el 
* orden alfabetico que el telefono de eme. de el segundo cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioClientesTelefonoEmergencias(cliente p1, cliente p2){
	std::string txt1 = p1.ver_tel_emergencia();
	std::string txt2 = p2.ver_tel_emergencia();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}

/// Implementacion de sobrecarga del operador == para validar si dos clientes son iguales
bool cliente::operator==(cliente cl){
	if(this->nombre!=cl.ver_nombre()){
		return false;
	}
	if(this->apellido!=cl.ver_apellido()){
		return false;
	}
	if(this->email!=cl.ver_email()){
		return false;
	}
	if(this->sexo!=cl.ver_sexo()){
		return false;
	}
	if(this->telefono!=cl.ver_tel()){
		return false;
	}
	if(this->direccion!=cl.ver_dir()){
		return false;
	}
	if(this->localidad!=cl.ver_loc()){
		return false;
	}
	if(this->dni!=cl.ver_DNI()){
		return false;
	}
	fecha aux;
	aux.dia=cl.ver_diaN();
	aux.mes=cl.ver_mesN();
	aux.anio=cl.ver_anioN();
	if(!(this->fecha_nacimiento==aux)){
		return false;
	}
	if(this->tel_emergencias!=cl.ver_tel_emergencia()){
		return false;
	}
	return true;
}
	
