#include<iostream>
#include <string>
#include "Persona.h"
#include "Utils.h"
#include "Cliente.h"
#include "Couch.h"
#include <ctime>
#include "Suscripcion.h"
#include <fstream>
#include "manage.h"
using namespace std;
/**(std::string nom, std::string ape, std::string mail, 
std::string sex, std::string tel, std::string dir, 
std::string loc, std::string dni, 
int dia, int mes, int anio, std::string tel_emergencias, suscripcion *sub, unsigned cant_subs): 
persona(nom, ape, mail , sex, tel, dir, loc, dni, dia, mes, anio)*/


int main (int argc, char *argv[]) {

	int x=1;
	std::string nombre;
	std::string apellido;
	std::string email;
	std::string sexo;
	std::string telefono;
	std::string direccion;
	std::string localidad;
	std::string dni;
	int dia_n;
	int mes_n;
	int anio_n;
	std::string cbu;
	std::string alias;
	
	
	
	ofstream couchs("couchs.dat",ios::binary|ios::out|ios::app);
	if(!couchs.is_open()){
		cout<<"No se pudo abrir el arhivo"<<endl;
	}
	
	while(x != 0){
		
		cout<<"couch: "<<endl;
		cout<<"Nombre: "; cin>>nombre;
		cout<<"Apellido: "; cin>>apellido;
		cout<<"Email: "; cin>>email;
		cout<<"Sexo: "; cin>>sexo;
		cout<<"Telefono: "; cin>>telefono;
		cin.ignore();
		cout<<"Direccion: "; getline(cin,direccion);
		cout<<"Localidad: "; cin>>localidad;
		cout<<"DNI: "; cin>>dni;
		cout<<"Dia nacimiento: "; cin>>dia_n;
		cout<<"Mes nacimiento: "; cin>>mes_n;
		cout<<"Anio nacimiento: "; cin>>anio_n;
		cout<<"CBU: "; cin>>cbu;
		cout<<"Alias: "; cin>>alias;
		
		couch cou(nombre,apellido,email,sexo,telefono,direccion,localidad,
				  dni,dia_n,mes_n,anio_n,cbu,alias);
		
		cou.guardar_en_binario(couchs);
		
		cout<<"Si quiere salir aprete 0: "; cin>>x;
	}	
	
	/*
	manage mister_manage("couchs.dat","clientes.dat","suscripciones.dat","planes.dat");
	
	for(int i=0;i<mister_manage.cantidadSuscripciones();i++){
		cout<<"Plan: "<<mister_manage.obtenerSuscripcion(i).ver_nombre_plan()<<endl;
		cout<<"Dni_coach: "<<mister_manage.obtenerSuscripcion(i).ver_DNI_couch()<<endl;
		cout<<"Dni_client: "<<mister_manage.obtenerSuscripcion(i).ver_DNI_cliente()<<endl;
	}
	*/
	return 0;	
}

///crear suscripciones
/*
int x=1;
std::string plan;
std::string dni_coach;
std::string dni_client;

ofstream suscripciones("suscripciones.dat",ios::binary|ios::out|ios::app);
if(!suscripciones.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}

while(x != 0){

cout<<"Agregar suscripcion: "<<endl;

cout<<"Plan: "; cin>>plan; cout<<"Dni_coach: "; cin>>dni_coach; cout<<"Dni_client: "; cin>>dni_client;

suscripcion sus(plan,dni_coach,dni_client);

sus.guardar_en_binario(suscripciones);

cout<<"Si quiere salir aprete 0: "; cin>>x;
}	

manage mister_manage("couchs.dat","clientes.dat","suscripciones.dat","planes.dat");

for(int i=0;i<mister_manage.cantidadSuscripciones();i++){
cout<<"Plan: "<<mister_manage.obtenerSuscripcion(i).ver_nombre_plan()<<endl;
cout<<"Dni_coach: "<<mister_manage.obtenerSuscripcion(i).ver_DNI_couch()<<endl;
cout<<"Dni_client: "<<mister_manage.obtenerSuscripcion(i).ver_DNI_cliente()<<endl;
}

cout<<endl<<endl<<endl;

cout<<mister_manage.planesSuscritos("44556041");
*/

///Crear planes
/*
int x=1;
std::string m_plan;
int precio;

ofstream m_planes("planes.dat",ios::binary|ios::out|ios::app);
if(!m_planes.is_open()){
cout<<"No se pudo abrir el arhivo"<<endl;
}

while(x != 0){
int k = 1;
std::string dni_couch;

cout<<"Agregar Plan: "<<endl;

cout<<"Plan: "; cin>>m_plan; cout<<"Precio: "; cin>>precio;

plan k_plan(m_plan,precio);

while(k != 0){
cout<<"Agregar couch al plan: "<<endl;
cin>>dni_couch;
k_plan.agregar_couch(dni_couch);
cout<<"(couch)Si quiere salir aprete 0: "; cin>>k;
}


k_plan.guardar_en_binario(m_planes);

cout<<"Si quiere salir aprete 0: "; cin>>x;
}	
*/	


/*
manage mister_manage("couchs.dat","clientes.dat","suscripciones.dat","planes.dat");
/*
for(int i=0;i<mister_manage.cantidadPlanes();i++){
cout<<"Plan: "<<mister_manage.obtenerPlan(i).ver_nombre_plan()<<endl;
cout<<"Precio: "<<mister_manage.obtenerPlan(i).ver_precio_plan()<<endl;
cout<<"Nombre rutina: "<<mister_manage.obtenerPlan(i).ver_nombre_rutina()<<endl;
}

cout<<endl<<endl<<endl;

cout<<mister_manage.planesResponsables("44556041");
/*
for(int i=0;i<mister_manage.cantidadPlanes();i++) { 
plan m_plan = mister_manage.obtenerPlan(i);

std::vector<std::string> auxiliar_couchs = m_plan.ver_couchs_plan();

for(int j=0;j<auxiliar_couchs.size();j++){
cout<<"Plan"<<i<<" "<<auxiliar_couchs[j]<<endl;
}

}
*/

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
