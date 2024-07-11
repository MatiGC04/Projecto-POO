/**
* @file Utils.cpp
* @brief Implementacion de utilidades y funciones para el manejo de las fechas.
 
**/
#include "Utils.h"
#include <string>
#include <ctime>

/**
* Utiliza la libreria ctime para obtener la fecha actual (tm_year cuenta a 
* a partir de 1900 y tm_mon desde 0).
* La funcion time devuelve una variable time_t que contiene los segundos
* desde una epoca (31/12/1969 21:00hs, UTC-03:00 Ciudad de buenos aires) hasta 
* hoy.
* La funcion localtime recibe una direccion de una variable time_t y devuelve un 
* puntero a tm (struct que tiene datos como anio, dia, mes y mas).
**/
fecha FechaHoy(){
	time_t hoy = time(0);
	tm *time = localtime(&hoy);	
	fecha aux;
	aux.anio = time->tm_year+1900;
	aux.mes = time->tm_mon+1;
	aux.dia = time->tm_mday;
	aux.time = hoy;
	return aux;
}

	
/**
* Ingresando dia, mes y anio retorna una variable tipo fecha para poder realizar
* operaciones con ella.
* La funcion mktime recibe un puntero a tm y utiliza tm_sec, tm_min, tm_hour, 
* tm_day, tm_mon y tm_year como datos para devolver una variable.
* @param dia, mes y anio de la fecha
* @return variable tipo fecha
**/
fecha ConvertFecha(int dia, int mes, int anio){
	time_t hoy= time(0);
	tm *f=localtime(&hoy);
	f->tm_sec=0;
	f->tm_min=0;
	f->tm_hour=0;
	f->tm_mday=dia;
	f->tm_mon=mes-1;
	f->tm_year=anio-1900;
	fecha fecha1;
	fecha1.dia=dia;
	fecha1.anio=anio;
	fecha1.mes=mes;
	fecha1.time=mktime(f);		
	return fecha1;				

}

	
/**
* Funcion para convertir fecha a string
* @param variable tipo fecha
* @return variable tipo string
**/	
std::string FechaTexto(fecha f1){
	return std::to_string(f1.dia)+"/"+std::to_string(f1.mes)+"/"+
	std::to_string(f1.anio);
}
	
	
/**
* Verifica si el anio es biciesto o no
* @param variable tipo fecha
**/	
bool AnioBiciesto(fecha f1){
	if(f1.anio%100==0){
		if(f1.anio%400==0)return true;
		return false;
	}
	else if(f1.anio%4==0) return true;
	return false;
}

	
/**
* Confirma que la fecha ingresada es valida
* @param variable tipo fecha
**/		
bool ConfirmacionFecha(fecha f1){
	int dias_feb = 28;
	if(AnioBiciesto(f1)) dias_feb = 29;
	if(f1.anio>0){
		return false;
	}
	else if(f1.mes<1 or f1.mes>12){
		return false;
	}
	else switch (f1.mes){
	case 4: case 6: case 9: case 11:
		if(f1.dia<1 or f1.dia>30){
			return false;
		}
		break;
	case 2:
		if (f1.dia>dias_feb){
			return false;
		}
		break;
	default:
		if(f1.dia<1 or f1.dia>31){
			return false;
		}
	}
	return true;
}

	
/**
* Utiliza la funcion difftime de la libreria ctime que devuelve los segundos de
* diferencia entre cada fecha, aplicando una conversion se obtinen los dias 
* y se retorna el valor redondeado hacia abajo.
* Interpretando que F1<F2
* @param dos variables tipo fecha
* @return devuelve un entero, la diferencia de dias entre las fechas
**/	
int DifDias(fecha f1, fecha f2){
	float dif = difftime(f2.time,f1.time);
	dif = (dif)/(60*60*24);
	return int(dif);
}

	
/**
* Calcula la fecha de vencimiento del pago abonado agregandole 31 dias a la 
* fecha en la que pagó.
* @param dato tipo fecha
* @return dato tipo fecha
**/	
fecha FechaVencimiento(fecha f1){
	f1.time = f1.time+31*24*60*60;
	tm *vencimiento = localtime(&f1.time);
	f1.anio = vencimiento->tm_year+1900;
	f1.mes = vencimiento->tm_mon+1;
	f1.dia = vencimiento->tm_mday;
	return f1;
}

	
/**
* Sobrecarga del operador menor 
* @param datos tipo fecha
**/	
bool operator<(fecha f1, fecha f2){
	if(f1.anio<f2.anio){
		return true;
	}
	else if(f1.anio==f2.anio and f1.mes<f2.mes){
		return true;
	}
	else if(f1.mes==f2.mes and f1.dia<f2.dia){
		return true;
	}
	return false;
}


/**
* Sobrecarga del operador igual
* @param datos tipo fecha
**/
bool operator==(fecha f1,fecha f2){
	if(f1.anio!=f2.anio){
		return false;
	}
	else if(f1.mes!=f2.mes){
		return false;
	}
	else if(f1.dia!=f2.dia){
		return false;
	}
	return true;
}


/**
* Sobrecarga del operador de salida para mostrar por pantalla
* @param dato tipo ostream por referencia y variable tipo fecha.
* @return dato tipo ostream que muestra el dato tipo fecha formato dd/mm/aaaa
**/	
std::ostream &operator<<(std::ostream &o, fecha f1){
	o<<f1.dia<<"/"<<f1.mes<<"/"<<f1.anio;
	return o;
}

/**
* Funcion auxiliar que convierte los caracteres de una cadena a minuscula.
* @param variable tipo string 
**/
void PasarMiniscula(std::string &txt){
	int tam = txt.size();
	for(int i=0;i<tam;i++){
		txt[i]=std::tolower(txt[i]);
	}
}
