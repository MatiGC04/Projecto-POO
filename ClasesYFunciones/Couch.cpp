#include "Couch.h"
/**
*@file ClienteAndCouch.cpp
*@brief Implementación de los métodos de la clase couch y la clase cliente
**/

#include <Couch.h>
#include <string>
#include <cstring>
#include <fstream>


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

/// Implementación del método para leer un couch en un archivo binario
void couch::leer_en_binario(std::ifstream &archivo){
	registroCouch registro;
	archivo.read(reinterpret_cast<char*>(&registro), sizeof(registro));
	nombre = registro.nombre;
	apellido = registro.apellido;
	email = registro.email;
	telefono = registro.telefono;
	direccion = registro.direccion;
	sexo = registro.sexo;
	dni = registro.dni;
	cbu = registro.cbu;
	alias = registro.dni;
	fecha_nacimiento = ConvertFecha(registro.dia_nac, registro.mes_nac, registro.anio_nac);
}




bool CriterioNombreApellido(couch c1, couch c2){
	std::string txt1 = c1.ver_nombre() + " " + c1.ver_apellido();
	std::string txt2 = c2.ver_nombre() + " " + c2.ver_apellido();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
bool CriterioLocalidad(couch c1, couch c2){
	std::string txt1 = c1.ver_loc();
	std::string txt2 = c2.ver_loc();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
	
bool CriterioEdad(couch c1, couch c2){
	return c1.ver_edad() < c2.ver_edad();
}
	
bool CriterioEmail(couch c1, couch c2){
	std::string txt1 = c1.ver_email();
	std::string txt2 = c2.ver_email();
	PasarMiniscula(txt1);
	PasarMiniscula(txt2);
	return txt1 < txt2;
}
