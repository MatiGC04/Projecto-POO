#include <ManejoDeFechas.h>
#include <string>
#include <ctime>
using namespace std;

///Funcion que utiliza el tipo de dato ctime 
///(tm_year devuelve los anios que pasaron desde 1900 y tm_mon devuelve el mes 
///actual desde iniciando a contar desde 0) para obtener dia, mes y anio */
Fecha FechaHoy(){
	time_t hoy= time(0);
	tm *time = localtime(&hoy);
	Fecha aux;
	aux.anio= time->tm_year+1900;
	aux.mes= time->tm_mon+1;
	aux.dia= time->tm_mday;
	aux.time= hoy;
	return aux;
}

///Ingresando dia, mes y anio retorna una variable tipo fecha
///para poder realizar operaciones con ella
Fecha ConvertFecha(int dia, int mes, int anio){
	time_t hoy= time(0);
	tm *F=localtime(&hoy);
	F->tm_sec=0;
	F->tm_min=0;
	F->tm_hour=0;
	F->tm_mday=dia;
	F->tm_mon=mes-1;
	F->tm_year=anio-1900;
	Fecha Fecha1;
	Fecha1.dia=dia;
	Fecha1.anio=anio;
	Fecha1.mes=mes;
	Fecha1.time=mktime(F);
	return Fecha1;
	
}

	
///Funcion convertir fecha a string
string Fecha_a_texto(Fecha F1){
	return to_string(F1.dia)+"/"+to_string(F1.mes)+"/"+to_string(F1.anio);
}
	
	
	
///Verifica si el anio es biciesto o no
bool AnioBiciesto(Fecha F1){
	if(F1.anio%100==0){
		if(F1.anio%400==0)return true;
		return false;
	}
	else if(F1.anio%4==0) return true;
	return false;
}
	
///Calcula la fecha de vencimiento del pago abonado
Fecha FechaVencimiento(Fecha F1){
	F1.time=F1.time+31*24*60*60;
	tm *vencimiento=localtime(&F1.time);
	F1.anio=vencimiento->tm_year+1900;
	F1.mes=vencimiento->tm_mon+1;
	F1.dia=vencimiento->tm_mday;
	return F1;
}



///Confirma que la fecha ingresada es valida
bool ConfirmacionFecha(Fecha F1){
	int DiasFeb=28;
	if(AnioBiciesto(F1)) DiasFeb=29;
	if(F1.anio<1900){
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

///Implementacion para comparar fechas
bool operator<(Fecha F1, Fecha F2){
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

///Implementacion para verificar que las fechas son iguales
bool operator==(Fecha F1,Fecha F2){
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


	
///Funcion para obtener la diferencia en dias entre dos fechas
int DifDias(Fecha F1,Fecha F2){
	///Interpretando que la primera fecha ingresada es menor que la segunda fecha
	///se realiza el siguiente calculo
	float dif=difftime(F2.time,F1.time);
	dif= (dif)/(60*60*24);
	return int(dif);

}
	
///Sobrecarga de operador << para mostrar por pantalla variables tipo fecha
ostream &operator<<(ostream &o, Fecha F1){
	o<<F1.dia<<"/"<<F1.mes<<"/"<<F1.anio;
	return o;
}