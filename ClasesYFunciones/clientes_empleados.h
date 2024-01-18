#ifndef CLIENTE_H
#define CLIENTE_H

#endif

#include <string>
#include <persona.h>
#include <ManejoDeFechas.h>
#include <vector>
using namespace std;



class Couch : public Persona{
private:
	int cbu;
	string alias;
public:
	Couch(string, string , string , string, string ,string, int , int , int , int ,  //<-atributos Persona 
			int CBU=0);//<-atributo Couch 
	int ver_cbu();
	string ver_alias();
};

///
struct Plan{
	string nombre_plan;
	vector<Couch>C;
	int precio;
	
	
	//sobrecargo operador =
	Plan operator= (Plan copia){
		nombre_plan=copia.nombre_plan;
		C=copia.C;
		precio=copia.precio;
		
		return *this;
	}
};





///

class Cliente : public Persona{
private:
	int telefono_emergencias;
	Plan tipo_de_plan; //charclar si tipo de plan será struct o class
	
	bool estado_pago;
	
	//registro el pago del cliente
	Fecha pago;
	
	//plantear si se desea agregar un archivo .text 
	//o binary para que cada cliente tenga su rutina
public:
	Cliente(string , string , string , string , 
			string , string, int, int, int, 
			int, int );
	void agregar_plan(Plan t_plan);
	
	//calcular cuantos dias falta para que se venza 
	Fecha vencimiento();
	
	//devuelve si el cliente esta en estado de deuda o no
	bool debe();
	//el cliente paga la deuda
	void pagar_cuota();
};

