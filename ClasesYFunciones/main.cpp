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
	
	return 0;	
}
///Prueba de la clase suscripcion (Funciona)
/*
ifstream couchs_2("couchs.dat",ios::binary|ios::in);
couch m2_couch;
m2_couch.leer_en_binario(couchs_2);

ifstream clientes_2("clientes.dat",ios::binary|ios::in);
cliente m2_cliente;
m2_cliente.leer_en_binario(clientes_2);

ifstream planes_2("planes.dat",ios::binary|ios::in);
plan m2_plan;
m2_plan.leer_en_binario(planes_2);


suscripcion m_suscripcion(m2_plan.ver_nombre_plan(),m2_couch.ver_DNI(),m2_cliente.ver_DNI());


cout<<"Plan Subscrito: "<<m_suscripcion.ver_nombre_plan()<<"      Fecha de pago: "<<FechaTexto(m_suscripcion.ver_fecha_pago());
cout<<"      Dias faltantes: "<<m_suscripcion.dias_faltantes()<<endl;
cout<<"Couch acargo: "<<m_suscripcion.ver_DNI_couch()<<"      Cliente: "<<m_suscripcion.ver_DNI_cliente()<<endl;

cout<<endl<<endl<<endl;

ofstream suscripciones("suscripciones.dat",ios::binary|ios::out|ios::app);
if(!suscripciones.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}

m_suscripcion.guardar_en_binario(suscripciones);

suscripciones.close();

suscripcion m2_suscripcion;

ifstream suscripciones_2("suscripciones.dat",ios::binary|ios::in);

m2_suscripcion.leer_en_binario(suscripciones_2);


cout<<"Plan Subscrito: "<<m2_suscripcion.ver_nombre_plan()<<"      Fecha de pago: "<<FechaTexto(m2_suscripcion.ver_fecha_pago());
cout<<"      Dias faltantes: "<<m2_suscripcion.dias_faltantes()<<endl;
cout<<"Couch acargo: "<<m2_suscripcion.ver_DNI_couch()<<"      Cliente: "<<m2_suscripcion.ver_DNI_cliente()<<endl;
*/

///Prueba de la clase Cliente (Funciona)
/*
cliente m_cliente("Matias","Godoy","mati04@gmail.ok","M","3432023601",
"Bv Galvez","Santa Fe","424563155",04,06,2003,"345412451");

ofstream clientes("clientes.dat",ios::binary|ios::out|ios::app);
if(!clientes.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}
m_cliente.guardar_en_binario(clientes);

clientes.close();
*/
///Prueba de la clase Couch (Funciona)
/*
couch m_couch("Angel","Palacios","angeluis.0711@gmail.com","H","3435023500",
"GobernadorEnriqueMihura2630","Parana","44556041",07,11,2002,
"25153121444","angel.pala.07");

ofstream couchs("couchs.dat",ios::binary|ios::out|ios::app);
if(!couchs.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}
m_couch.guardar_en_binario(couchs);

couchs.close();
*/
///Prueba de la clase plan (Funciona)
/*
plan m_plan("musculacion",12000);
m_plan.agregar_couch("45532124");
m_plan.agregar_couch("84422441");

ofstream planes("planes.dat",ios::binary|ios::out|ios::app);
if(!planes.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}
m_plan.guardar_en_binario(planes);

planes.close();
*/
