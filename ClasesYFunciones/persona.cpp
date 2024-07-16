/**
*@file Persona.cpp
*@brief Implementación de los metodos de la clase persona
**/

#include <persona.h>
#include <string>
#include "Utils.h"
#include <cstring>
#include <fstream>

/// Implementación del constructor de la clase persona
persona::persona(std::string nombre, std::string apellido, std::string email,
				 std::string sexo, std::string telefono, std::string direccion,
				 std::string localidad, std::string dni, int dia, int mes,
				 int anio){
	this->nombre = nombre;
	this->apellido = apellido;
	this->email = email;
	this->sexo = sexo; 
	this->telefono = telefono;
	this->direccion = direccion;
	this->localidad = localidad;
	this->dni = dni;
	fecha_nacimiento.dia=dia;
	fecha_nacimiento.mes=mes;
	fecha_nacimiento.anio=anio;
	
}
/// Implementación del método que valida los datos
std:: string persona::validar_datos(){
	std::string errores = "";
	if(nombre.size()==0){
		errores+="El nombre no puede estar vacio \n";
	}
	if(nombre.size()>100){
		errores+="El nombre es demasiado largo \n";
	}
	if (apellido.size()==0){ 
		errores+="El apellido no puede estar vacio \n";
	}
	if (apellido.size()>256) {
		errores+="El apellido es demasiado largo \n";
	}
	if (telefono.size()>25){
		errores+="El telefono es demasiado largo \n";
	}
	if (direccion.size()>100){ 
		errores+="La direccion es demasiado largo \n";
	}
	if (localidad.size()>100){
		errores+="La localidad es demasiado largo \n";
	}
	if (email.size()>260){
		errores+="El e-mail es demasiado largo \n";
	}
	
	if(fecha_nacimiento.dia<0 || fecha_nacimiento.dia>31){
		errores+="El dia de nacimiento debe estar entre 1 y 31, o vacio \n";
	}
	if(fecha_nacimiento.mes<0 || fecha_nacimiento.mes>12){
		errores+="El mes de nacimiento debe estar entre 1 y 12, o vacio \n";
	}
	if(fecha_nacimiento.anio!=0 && fecha_nacimiento.anio<=1900){
		errores+="El año de nacimiento no debe ser menor a 1900 \n";
	}
	return errores;
}

/// Implementación de los métodos para obtener los atributos de la persona
std::string persona::ver_nombre(){
	return nombre;
}
std::string persona::ver_apellido(){
	return apellido;
}
std::string persona::ver_email(){
	return email;
}
std::string persona::ver_tel(){
	return telefono;
}
std::string persona::ver_dir(){
	return direccion;
}
std::string persona::ver_DNI(){
	return dni;
}
std::string persona::ver_loc(){
	return localidad;
}
std::string persona::ver_sexo(){
	return sexo;
}
int persona::ver_anioN(){
	return fecha_nacimiento.anio;
}
int persona::ver_mesN(){
	return fecha_nacimiento.mes;
}
int persona::ver_diaN(){
	return fecha_nacimiento.dia;
}
int persona::ver_edad(){
	int edad;
	fecha fecha_actual = FechaHoy();
	edad = fecha_actual.anio - fecha_nacimiento.anio;
	if(fecha_nacimiento.mes > fecha_actual.mes){
		edad = edad - 1;
	}else{
		if (fecha_nacimiento.mes == fecha_actual.mes){
			if(fecha_nacimiento.dia > fecha_actual.dia){
				edad = edad - 1;
			}
		}
	}
	return edad;
}


/// Desarrollo de los métodos para modificar los atributos de la persona
void persona::modificar_nombre(std::string nombre){
	this->nombre = nombre;
}
void persona::modificar_apellido(std::string apellido){
	this->apellido = apellido;
}
void persona::modificar_email(std::string email){
	this->email = email;
}
void persona::modificar_tel(std::string telefono){
	this->telefono = telefono;
}
void persona::modificar_dir(std::string direccion){
	this->direccion = direccion;
}
void persona::modificar_loc(std::string localidad){
	this->localidad = localidad;
}
void persona::modificar_sexo(std::string sexo){
	this->sexo = sexo;
}
void persona::modificar_DNI(std::string dni){
	this->dni = dni;
}
void persona::modificar_fecha_nacimiento(int dia, int mes, int anio){
	fecha_nacimiento.dia=dia;
	fecha_nacimiento.mes=mes;
	fecha_nacimiento.anio=anio;
}


