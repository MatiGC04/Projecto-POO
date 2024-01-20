#include <persona.h>
#include <string>
#include "ManejoDeFechas.h"
using namespace std;
Persona::Persona(string nom, string ape, string mail, string sex,string tel, 
				 string loc, int dni, int dia, int mes, int anio){
	nombre = nom;
	apellido = ape;
	email = mail;
	sexo = sex; 
	telefono = tel;
	localidad = loc;
	DNI = dni;
	fecha_nacimiento = ConvertFecha(dia,mes,anio);
	
}
///Desarrollo de los métodos para obtener la información de la persona
string Persona::ver_nombre(){
	return nombre;
}
string Persona::ver_apellido(){
	return apellido;
}

string Persona::ver_email(){
	return email;
}
string Persona::ver_tel(){
	return telefono;
}
string Persona::ver_dir(){
	return direccion;
}
string Persona::ver_loc(){
	return localidad;
}
string Persona::ver_sexo(){
	return sexo;
}
int Persona::ver_anioN(){
	return fecha_nacimiento.anio;
}
int Persona::ver_mesN(){
	return fecha_nacimiento.mes;
}
int Persona::ver_diaN(){
	return fecha_nacimiento.dia;
}
int Persona::ver_edad(){
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
int Persona::ver_DNI(){
	return DNI;
}

