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
Fecha ConvertFecha(int dia, int mes, int anio);
std::string Fecha_a_texto(Fecha F1);

bool AnioBiciesto(Fecha F1);
bool ConfirmacionFecha(Fecha F1);
int DifDias(Fecha F1, Fecha F2);
Fecha FechaVencimiento(Fecha F1);

bool operator<(Fecha F1, Fecha F2);
bool operator==(Fecha F1,Fecha F2);
std::ostream &operator<<(std::ostream &o, Fecha F1);



#endif
