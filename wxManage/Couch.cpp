/**
*@file Couch.cpp
*@brief Implementaci�n de los m�todos de la clase Couch.
**/
#include "Couch.h"
#include <cstring>
#include <fstream>
#include "Utils.h"


/// Implementaci�n del constructor de la clase couch
couch::couch(std::string nom, std::string ape, std::string mail, std::string sex,
			 std::string tel, std::string dir, std::string loc, std::string dni,
			 int dia, int mes, int anio, std::string _cbu, std::string _alias):
	persona(nom, ape, mail, sex, tel, dir, loc, dni, dia, mes, anio){
	cbu = _cbu;
	alias = _alias;
}

/// Implementaci�n de los m�todos para obtener los atributos de couch
std::string couch::ver_cbu() const{
	return cbu;
}
std::string couch::ver_alias() const{
	return alias;
}


///Implementacion de los metodos para modificar los atributos de couch
void couch::modificar_cbu(std::string cbu){
	this->cbu = cbu;
}
void couch::modificar_alias(std::string alias){
	this->alias = alias;
}

/// Implementaci�n del m�todo para guardar un couch en un archivo binario
void couch::guardar_en_binario(std::ofstream &archivo){
	registroCouch registro;
	strcpy(registro.nombre,nombre.c_str());
	strcpy(registro.apellido,apellido.c_str());
	strcpy(registro.email,email.c_str());
	strcpy(registro.telefono,telefono.c_str());
	strcpy(registro.direccion,direccion.c_str());
	strcpy(registro.localidad,localidad.c_str());
	
	strcpy(registro.sexo,sexo.c_str());
	
	strcpy(registro.dni,dni.c_str());
	strcpy(registro.cbu,cbu.c_str());
	strcpy(registro.alias,alias.c_str());
	registro.fecha_nac = fecha_nacimiento;
	archivo.write(reinterpret_cast<char*>(&registro),sizeof(registro));
}

/// Implementaci�n del m�todo para leer un couch en un archivo binario
void couch::leer_en_binario(std::ifstream &archivo){
	registroCouch registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registro));
	nombre = registro.nombre;
	apellido = registro.apellido;
	email = registro.email;
	telefono = registro.telefono;
	direccion = registro.direccion;
	localidad = registro.localidad;
	
	sexo = registro.sexo;
	
	dni = registro.dni;
	cbu = registro.cbu;
	alias = registro.alias;
	fecha_nacimiento = registro.fecha_nac;
}

/// Implementacion del metodo que valida los atributos del couch
std::string couch::validar_datos_ch() const{
	std::string errores=validar_datos();
	if(contieneLetra(cbu)) errores+="El CBU no debe contener letras \n";
	if(cbu.size()>22){
		errores+="El cbu es demaciado largo \n";
	}
	if(alias.size()>20){
		errores+="El alias es demaciado largo \n";
	}
	if(alias.size()<6){
		errores+="El alias es demaciado corto \n";
	}
	return errores;
}



/**
* Devuelve true si la combinacion "apellido, nombre" de el primer couch esta
* antes segun el orden alfabetico que el apellido y nombre de el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchNombreApellido(couch c1, couch c2){
	std::string txt1 = c1.ver_apellido() + " " + c1.ver_nombre();
	std::string txt2 = c2.ver_apellido() + " " + c2.ver_nombre();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}	
	
	
/**
* Devuelve true si la localidad de el primer couch esta antes segun el 
* orden alfabetico que la localidad de el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchLocalidad(couch c1, couch c2){
	std::string txt1 = c1.ver_loc();
	std::string txt2 = c2.ver_loc();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
	
/**
* Devuelve true si la edad de el primer couch es mas peque�a que la edad de
* el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchEdad(couch c1, couch c2){
	return c1.ver_edad() < c2.ver_edad();
}

/**
* Devuelve true si el email de el primer couch esta antes segun el 
* orden alfabetico que el email de el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchEmail(couch c1, couch c2){
	std::string txt1 = c1.ver_email();
	std::string txt2 = c2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
	
/**
* Devuelve true si el telefono de el primer couch esta antes segun el 
* orden alfabetico que el telefono de el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchTelefono(couch c1, couch c2){
	return c1.ver_tel()<c2.ver_tel();
}
	
/**
* Devuelve true si el DNI de el primer couch esta antes segun el 
* orden alfabetico que el DNI de el segundo couch.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool CriterioCouchDNI(couch c1, couch c2){
	return c1.ver_DNI()<c2.ver_DNI();
}
