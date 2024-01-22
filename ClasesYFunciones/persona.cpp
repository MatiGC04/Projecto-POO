#include <persona.h>
#include <string>
#include "ManejoDeFechas.h"

persona::persona(std::string nom, std::string ape, std::string mail, std::string sexo, std::string tel, 
				 std::string dir, std::string loc, int dni, int dia, int mes, int anio){
	nombre = nom;
	apellido = ape;
	email = mail;
	this->sexo = sexo; 
	telefono = tel;
	direccion = dir;
	localidad = loc;
	DNI = dni;
	fecha_nacimiento = ConvertFecha(dia,mes,anio);
	
}
///Desarrollo de los métodos para obtener la información de la persona
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
	Fecha fecha_actual = FechaHoy();
	edad = fecha_actual.anio - fecha_nacimiento.anio;
	if(fecha_nacimiento.mes > fecha_actual.mes){
		edad = edad-1;
	}else{
		if (fecha_nacimiento.mes == fecha_actual.mes){
			if(fecha_nacimiento.dia > fecha_actual.dia){
				edad = edad-1;
			}
		}
	}
	return edad;
}
int persona::ver_DNI(){
	return DNI;
}
void persona::modificar_nombre(std::string nom){
	nombre = nom;
}
void persona::modificar_apellido(std::string ape){
	apellido = ape;
}
void persona::modificar_email(std::string mail){
	email = mail;
}
void persona::modificar_tel(std::string tel){
	telefono = tel;
}
void persona::modificar_dir(std::string dir){
	direccion = dir;
}
void persona::modificar_loc(std::string loc){
	localidad = loc;
}
void persona::modificar_sexo(std::string sexo){
	this->sexo = sexo;
}

void persona::modificar_DNI(int dni){
	DNI = dni;
}
void persona::modificar_fecha_nacimiento(int dia, int mes, int anio){
	fecha_nacimiento = ConvertFecha(dia,mes,anio);
}
