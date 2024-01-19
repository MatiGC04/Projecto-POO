#ifndef MANEJODEFECHAS_H
#define MANEJODEFECHAS_H
#include <ctime>
#include <iostream>
struct Fecha{
	int dia;
	int mes;
	int anio;
	time_t time;
};
Fecha FechaHoy();
bool AnioBiciesto(Fecha F1);
bool ConfirmacionFecha(Fecha F1);
std::string Fecha_a_texto(Fecha F1);
bool operator<(Fecha F1, Fecha F2);
bool operator==(Fecha F1,Fecha F2);
int DifDias(Fecha F1, Fecha F2);
Fecha ConvertFecha(int dia, int mes, int anio);
Fecha FechaVencimiento(Fecha F1);

#endif
