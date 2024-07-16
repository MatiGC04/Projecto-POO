#include "Cliente.h"
#include <cstring>
#include <fstream>
#include <vector>
#include "Suscripcion.h"
#include "Plan.h"
#include "Couch.h"

/// Implementación del constructor de la clase cliente
cliente::cliente (std::string nom, std::string ape, std::string mail, 
				  std::string sex, std::string tel, std::string dir, 
				  std::string loc, std::string dni, 
				  int dia, int mes, int anio, std::string tel_emergencias, suscripcion *sub, unsigned cant_subs): 
	persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes, anio){
	this->tel_emergencias = tel_emergencias;
	for(unsigned i=0 ; i<cant_subs ; ++i){
		subs.push_back(*(sub+i));
	}
}

std::string cliente::ver_tel_emergencia(){
	return tel_emergencias;
}

int cliente::ver_precio_total(){
	int precio=0;
	for(unsigned i=0; i<subs.size(); ++i){
		precio = precio + subs[i].ver_precio_suscripcion();
	}
	return precio;
}

void cliente::eliminar_sub(int pos){
	auto it=subs.begin();
	advance(it, pos);
	subs.erase(it);
}

std::string cliente::ver_subscripcion(int pos){
	std::string txt_aux = "";
	plan plan_aux = subs[pos].obtener_plan();
	couch couch_aux = subs[pos].ver_couch_responsable();
	
	txt_aux = txt_aux + couch_aux.ver_nombre() + couch_aux.ver_apellido() + " ";
	txt_aux = txt_aux + plan_aux.nombre_plan() + " ";
	txt_aux = txt_aux + FechaTexto( subs[pos].ver_fecha_pago() );
	return txt_aux;
}
/// Implementación de los metodos para agregar suscripciones
void cliente::agregar_sub(suscripcion sub){
	subs.push_back(sub);
}

/// Implementación de los métodos para modificar atributos 
void cliente::modificar_tel_em(std::string tel_em_nuevo){
	tel_emergencias=tel_em_nuevo;
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
	registro.fecha_nac = fecha_nacimiento;
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
	fecha_nacimiento = registro.fecha_nac;
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
