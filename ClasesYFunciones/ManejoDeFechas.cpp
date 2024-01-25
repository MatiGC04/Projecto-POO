/**
* @file ManejoDeFechas.cpp
* @brief Implementaciones de funciones para el manejo de las fechas 
**/
#include <ManejoDeFechas.h>
#include <string>
#include <ctime>

/**
* Utiliza la libreria ctime para obtener la fecha actual (tm_year cuenta a 
* a partir de 1900 y tm_mon desde 0.
* La funcion time(nullptr) devuelve una variable time_t que contiene los 
* segundos desde una epoca(01/01/1969 21:00hs) hasta hoy.
* La funcion localtime recibe una direccion de una variable time_t y devuelve
* un puntero a tm (struct que tiene datos como anio, dia, mes y mas).
**/
fecha FechaHoy(){
	time_t hoy= time(0);		///
	tm *time = localtime(&hoy);	///
	fecha aux;
	aux.anio= time->tm_year+1900;
	aux.mes= time->tm_mon+1;
	aux.dia= time->tm_mday;
	aux.time= hoy;
	return aux;
}

/**
* Ingresando dia, mes y anio retorna una variable tipo fecha para poder realizar
* operaciones con ella.
* La funcion mktime recibe un puntero a tm y utiliza tm_sec, tm_min, tm_hour, 
* tm_day, tm_mon y tm_year como datos para devolver una variable.
* @param dia, mes y año de la fecha
* @return variable tipo fecha
**/
fecha ConvertFecha(int dia, int mes, int anio){
	time_t hoy= time(0);
	tm *F=localtime(&hoy);
	F->tm_sec=0;
	F->tm_min=0;
	F->tm_hour=0;
	F->tm_mday=dia;
	F->tm_mon=mes-1;
	F->tm_year=anio-1900;
	fecha Fecha1;
	Fecha1.dia=dia;
	Fecha1.anio=anio;
	Fecha1.mes=mes;
	Fecha1.time=mktime(F);		
	return Fecha1;				

}
	
/**
* Funcion para convertir fecha a string
* @param variable tipo fecha
* @return variable tipo string
**/	
std::string Fecha_a_texto(fecha F1){
	return std::to_string(F1.dia)+"/"+std::to_string(F1.mes)+"/"+std::to_string(F1.anio);
}
	
	
/**
* Verifica si el anio es biciesto o no
* @param variable tipo fecha
**/	
bool AnioBiciesto(fecha F1){
	if(F1.anio%100==0){
		if(F1.anio%400==0)return true;
		return false;
	}
	else if(F1.anio%4==0) return true;
	return false;
}

/**
* Confirma que la fecha ingresada es valida
* @param variable tipo fecha
**/		
bool ConfirmacionFecha(fecha F1){
	int DiasFeb=28;
	if(AnioBiciesto(F1)) DiasFeb=29;
	if(F1.anio>0){
		return false;
	}
	else if(F1.mes<1 or F1.mes>12){
		return false;
	}
	else switch (F1.mes){
	case 4: case 6: case 9: case 11:
		if(F1.dia<1 or F1.dia>30){
			return false;
		}
		break;
	case 2:
		if (F1.dia>DiasFeb){
			return false;
		}
		break;
	default:
		if(F1.dia<1 or F1.dia>31){
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
int DifDias(fecha F1, fecha F2){
	float dif=difftime(F2.time,F1.time);
	dif= (dif)/(60*60*24);
	return int(dif);
}

/**
* Calcula la fecha de vencimiento del pago abonado agregandole 31 dias a la 
* fecha en la que pagó.
* @param dato tipo fecha
* @return dato tipo fecha
**/	
fecha FechaVencimiento(fecha F1){
	F1.time=F1.time+31*24*60*60;
	tm *vencimiento=localtime(&F1.time);
	F1.anio=vencimiento->tm_year+1900;
	F1.mes=vencimiento->tm_mon+1;
	F1.dia=vencimiento->tm_mday;
	return F1;
}

/**
* Sobrecarga del operador menor 
* @param datos tipo fecha
**/	
bool operator<(fecha F1, fecha F2){
	if(F1.anio<F2.anio){
		return true;
	}
	else if(F1.anio==F2.anio and F1.mes<F2.mes){
		return true;
	}
	else if(F1.mes==F2.mes and F1.dia<F2.dia){
		return true;
	}
	return false;
}


/**
* Sobrecarga del operador igual
* @param datos tipo fecha
**/
bool operator==(fecha F1,fecha F2){
	if(F1.anio!=F2.anio){
		return false;
	}
	else if(F1.mes!=F2.mes){
		return false;
	}
	else if(F1.dia!=F2.dia){
		return false;
	}
	return true;
}

/**
* Sobrecarga del operador de salida para mostrar por pantalla
* @param dato tipo ostream por referencia y variable tipo fecha.
* @return dato tipo ostream que muestra el dato tipo fecha formato dd/mm/aaaa
**/	
std::ostream &operator<<(std::ostream &o, fecha F1){
	o<<F1.dia<<"/"<<F1.mes<<"/"<<F1.anio;
	return o;
}
