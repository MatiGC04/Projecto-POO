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
	time_t hoy = time(nullptr);
	tm *time = localtime(&hoy);	
	fecha fech_aux;
	fech_aux.anio = time->tm_year+1900;
	fech_aux.mes = time->tm_mon+1;
	fech_aux.dia = time->tm_mday;
	return fech_aux;
}


//insertar documentacion
time_t ObtenerTime(fecha fech){
	time_t hoy = time(nullptr);
	tm *f=localtime(&hoy);
	f->tm_sec=0;
	f->tm_min=0;
	f->tm_hour=0;
	f->tm_mday=fech.dia;
	f->tm_mon=fech.mes-1;
	f->tm_year=fech.anio-1900;
	return mktime(f);				

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

std::string FechaArchivo(fecha f1){
	return std::to_string(f1.dia)+"_"+std::to_string(f1.mes)+"_"+
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
	
	float dif = difftime(ObtenerTime(f2),ObtenerTime(f1));
	dif = (dif)/(60*60*24);
	return int(dif);
}

	
/**
* Calcula la fecha de vencimiento del pago abonado agregandole 31 dias a la 
* fecha en la que paga.
* @param dato tipo fecha
* @return dato tipo fecha
**/	
fecha FechaVencimiento(fecha f1){
	time_t time_pago = ObtenerTime(f1);
	time_pago = time_pago + 31*24*60*60;
	tm *vencimiento = localtime(&time_pago);
	fecha fech_pago;
	fech_pago.anio = vencimiento->tm_year + 1900;
	fech_pago.mes = vencimiento->tm_mon + 1;
	fech_pago.dia = vencimiento->tm_mday;
	return fech_pago;
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
