#include<iostream>
#include <string>
#include "persona.h"
#include "ManejoDeFechas.h"
#include "clientes_empleados.h"
using namespace std;

int main (int argc, char *argv[]) {
	/*Persona::Persona(string nom, string ape, string mail, string sex,string tel, 
					 string loc, int dni, int dia, int mes, int anio)*/
	persona usuario("angel","palacios","angeluis.0711@gmail.com","hombre","3435023500",
					"Gobernador Enrique Mihura","Paraná","44556041",20,01,1960);
	cout<<usuario.ver_DNI();
	
	
	/*cliente c1("angel","palacios","angeluis.0711@gmail.com","hombre","3435023500",
			   "Gobernador Enrique Mihura","Paraná","44556041",20,01,1960,"323232323");*/
	
	/*cout<<c1.dias_faltantes();*/
	return 0;
}

