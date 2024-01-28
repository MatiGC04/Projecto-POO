#include<iostream>
#include <string>
#include "Persona.h"
#include "ManejoDeFechas.h"
#include "ClientesEmpleados.h"
using namespace std;

int main (int argc, char *argv[]) {
	/*Persona::Persona(string nom, string ape, string mail, string sex,string tel, 
					 string loc, int dni, int dia, int mes, int anio)/
	persona usuario("angel","palacios","angeluis.0711@gmail.com","hombre","3435023500",
					"Gobernador Enrique Mihura","Paraná","44556041",20,01,1960);

	cout<<usuario.ver_DNI();*/
	
	cliente pedrito("pedro","apellido","sadf@csmj.cs","hombre","3435202135","avenidasiempreviva","sprinfield","4535212",
					4,11,1995,"343215121");
	cout<<pedrito.ver_fecha_pago()<<endl;
	cout<<pedrito.dias_faltantes();
	return 0;	
}

