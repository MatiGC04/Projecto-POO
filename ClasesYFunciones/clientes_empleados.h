#ifndef CLIENTE_H
#define CLIENTE_H

#endif

#include <string>
#include <persona.h>
#include <vector>
using namespace std;


class Couch : public Persona{
private:
	int CBU;
public:
	Couch(string nom, string ape, string mail, string sex,string tel, 
		  string loc, int dni, int dia, int mes, int anio, int CBU=0);
	int verCBU();
};

struct Plan{
	string nombre_plan;
	vector<Couch>C;
	int precio;
};

//sobrecargo operador = para utilizarlo en el constructor del cliente

Plan operator= (Plan x){
	this nombre_plan= x.nombre_plan; //INVESTIGAR PORQUE NO FUNCIONA
	this C=B.C;
	this precio=x.precio;
	return this;
}


class Cliente : public Persona{
private:
	int telefono_emergencias;
	Plan tipo_de_plan; //charclar si tipo de plan será struct o class
	bool estado_pago;
public:
	Cliente(string nom = "", string ape = "", string mail = "", string sex = "", 
			string tel = "", string loc = "", int dni = 0, int dia = 0, int mes = 0, 
			int anio = 0, int temergencias=0, Plan tdplan);
	
	bool ver_deuda();
};

