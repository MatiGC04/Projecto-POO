#include<iostream>
#include <string>
#include "Persona.h"
#include "Utils.h"
#include "Cliente.h"
#include "Couch.h"
#include <ctime>
#include "Suscripcion.h"
#include <fstream>
using namespace std;
/**(std::string nom, std::string ape, std::string mail, 
std::string sex, std::string tel, std::string dir, 
std::string loc, std::string dni, 
int dia, int mes, int anio, std::string tel_emergencias, suscripcion *sub, unsigned cant_subs): 
persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes, anio)*/


int main (int argc, char *argv[]) {
	
	/* Cliente Funciona
	cliente m_cliente("Matias","Godoy","mati04@gmail.ok","M","3432023601",
					  "Bv Galvez","Santa Fe","424563155",04,06,2003,"345412451");
	
	ofstream clientes("clientes.dat",ios::binary|ios::out|ios::app);
	if(!clientes.is_open()){
		cout<<"No se pudo abrir el arhivo"<<endl;
	}
	m_cliente.guardar_en_binario(clientes);
	
	clientes.close();
	
	ifstream clientes_2("clientes.dat",ios::binary|ios::in);
	
	cliente m2_cliente;
	
	m2_cliente.leer_en_binario(clientes_2);
	
	cout<<m2_cliente.ver_apellido()<<" "<<m2_cliente.ver_tel()<<endl;
	*/
	
	plan m_plan("musculacion",12000);
	m_plan.agregar_couch("45532124");
	m_plan.agregar_couch("84422441");
	
	ofstream planes("planes.dat",ios::binary|ios::out|ios::app);
	if(!planes.is_open()){
		cout<<"No se pudo abrir el arhivo"<<endl;
	}
	m_plan.guardar_en_binario(planes);
	
	planes.close();
	
	ifstream planes_2("planes.dat",ios::binary|ios::in);
	
	plan m2_plan;
	
	m2_plan.leer_en_binario(planes_2);
	/*
	cout<<m2_plan.ver_couch_plan(0);
	*/
	
	return 0;	
}

