#include <ManejoDeFechas.h>
#include <string>
#include <ctime>
Fecha FechaHoy(){
	time_t hoy= time(0);
	tm *time = localtime(&hoy);
	Fecha aux;
	aux.anio= time->tm_year+1900;
	aux.mes= time->tm_mon+1;
	aux.dia= time->tm_mday;
	return aux;
}

bool AnioBiciesto(Fecha F1){
	if(F1.anio%4==0){
		return true;
	}
	return false;
}
	
bool ConfirmacionFecha(Fecha F1){
	if(F1.dia<1 or F1.dia>31){
		return false;
	}
	else if(F1.mes<1 or F1.mes>12){
		return false;
	}
	else if(F1.anio!=0 and F1.mes<1900){
		return false;
	}
	
	else switch (F1.mes){
	case 4: case 6: case 9: case 11:
		if(F1.dia<1 or F1.dia>29){
		return false;
		}
		break;
	case 2:
		if (F1.dia>28){
			return false;
		}
		break;
	}
}
