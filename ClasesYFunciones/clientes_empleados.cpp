#include <clientes_empleados.h>

#include <string>
using namespace std;
///Metodos class Cliente

Cliente::Cliente(string nom, string ape, string mail, string sex,string tel, 
			 string loc, int dni, int dia, int mes, int anio,/*<-atributos de clase persona*/ 
			 int temergencias): Persona(nom, ape, mail , 
																	   sex, tel, loc, dni,
																	   dia, mes , anio){
	estado_pago=true;
	telefono_emergencias=temergencias;
	
	
	/*tipo_de_plan.nombre_plan= tdplan.nombre_plan;
	tipo_de_plan.precio=tdplan.precio;
	tipo_de_plan.C=tdplan.C;*/
}

bool Cliente::ver_deuda(){return estado_pago;}

void Cliente::agregar_plan(Plan t_plan){
	tipo_de_plan.nombre_plan = t_plan.nombre_plan;
	tipo_de_plan.C = t_plan.C;
	tipo_de_plan.precio = t_plan.precio;
}
///Metodos de class Couch
int Couch::verCBU(){return CBU;}
