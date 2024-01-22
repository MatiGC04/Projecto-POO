#ifndef MANEJODEFECHAS_H
#define MANEJODEFECHAS_H
#include <ctime>
#include <iostream>
struct fecha{
	int dia;
	int mes;
	int anio;
	std::time_t time;
};
fecha FechaHoy();
fecha ConvertFecha(int dia, int mes, int anio);
std::string FechaTexto(fecha F1);

bool AnioBiciesto(fecha F1);
bool ConfirmacionFecha(fecha F1);
int DifDias(fecha F1, fecha F2);
fecha FechaVencimiento(fecha F1);

bool operator<(fecha F1, fecha F2);
bool operator==(fecha F1,fecha F2);
std::ostream &operator<<(std::ostream &o, fecha F1);



#endif
