#include <persona.h>
#include <string>
using namespace std;
Persona::Persona(string nom, string ape, string mail, string sex,string tel, 
				 string loc, int dni, int dia, int mes, int anio){
	nombre = nom;
	apellido = ape;
	email = mail;
	sexo = sex; 
	telefono = tel;
	localidad = loc;
	dia_nac = dia;
	mes_nac = mes;
	anio_nac = anio;
	DNI = dni;
	/*edad = funcion para obtener la fecha actual
	calcular en base a la fecha actual y el nacimiento la edad
	*/
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
	return anio_nac;
}
int Persona::ver_mesN(){
	return mes_nac;
}
int Persona::ver_diaN(){
	return dia_nac;
}
int Persona::ver_edad(){
	return edad;
}
int Persona::ver_DNI(){
	return DNI;
}

