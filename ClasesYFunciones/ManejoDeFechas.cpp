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
	if(F1.anio%100==0){
		if(F1.anio%400==0)return true;
		return false;
	}
	else if(F1.anio%4==0) return true;
	return false;
}

	
bool ConfirmacionFecha(Fecha F1){
	int DiasFeb=29;
	
	if(AnioBiciesto(F1)) DiasFeb=28;
	if(F1.anio!=0 and F1.mes<1900){
		return false;
	}
	else if(F1.mes<1 or F1.mes>12){
		return false;
	}
	
	else switch (F1.mes){
	case 4: case 6: case 9: case 11:
		if(F1.dia<1 or F1.dia>29){
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
	
bool operator<(Fecha F1, Fecha F2){
	if(F1.anio>F2.anio){
		return false;
	}
	else if(F1.mes>F2.mes){
		return false;
	}
	else if(F1.dia>F2.dia){
		return false;
	}
	return false;}

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
	return true;}
std::string Fecha_a_texto(Fecha F1){
	return std::to_string(F1.dia)+"/"+std::to_string(F1.mes)+"/"+std::to_string(F1.anio);
}
