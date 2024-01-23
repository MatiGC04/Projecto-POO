#ifndef CLIENTE_H
#define CLIENTE_H

#endif

#include <string>
#include <persona.h>
#include <ManejoDeFechas.h>
#include <vector>





class couch : public persona{
private:
	int cbu;
	std::string alias;
public:
	couch(std::string, std::string, std::string, std::string, std::string, std::string, std::string, int, int, int, int,  //<-atributos Persona 
			int CBU=0);//<-atributo Couch 
	int ver_cbu();
	std::string ver_alias();
};

///
struct plan{
	std::string nombre_plan;
	std::vector<couch> C;
	int precio;
	
	
	//sobrecargo operador =
	plan operator= (plan copia){
		nombre_plan=copia.nombre_plan;
		C=copia.C;
		precio=copia.precio;
		/*
		El return *this permite asignaciones en cadena:
		Por ejemplo, si tienes tres objetos Plan llamados a, b y c, puedes escribir a = b = c;. Esto funciona de la siguiente manera:
		
		Primero, b = c se evalúa. El operador de asignación copia el contenido de c en b y luego devuelve una referencia a b.
		Luego, a = (b = c) se evalúa. Ahora, b = c es simplemente b (porque el operador de asignación devolvió una referencia a b). 
		Entonces, esencialmente estás haciendo a = b, que de nuevo copia el contenido y devuelve una referencia a a.
		
		Si no tuvieras return *this en tu operador de asignación, no podrías hacer asignaciones en cadena porque el operador 
		de asignación no tendría un valor de retorno válido. Por lo tanto, return *this es necesario para permitir este tipo 
		de operaciones en C++.*/
		return *this;
	}
};





///

class cliente : public persona{
private:
	std::string tel_emergencias;
	plan tipo_de_plan; 
	
	bool estado_pago;
	
	//registro el pago del cliente
	fecha fecha_pago;
	
	//plantear si se desea agregar un archivo .text 
	//o binary para que cada cliente tenga su rutina
public:
	cliente(std::string, std::string, std::string, std::string, 
			std::string, std::string, std::string, int, int, int, 
			int, std::string);
	
	void agregar_plan(plan t_plan);
	
	//calcular cuantos dias falta para que se venza 
	int dias_faltantes();
	
	//devuelve si el cliente esta en estado de deuda o no
	bool debe();
	
	//el cliente paga la deuda
	void pagar_cuota();
	
	//ver estado de cuota
	void chequear_cuota();
};

