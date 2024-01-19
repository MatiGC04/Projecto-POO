#ifndef MANEJODEFECHAS_H
#define MANEJODEFECHAS_H
#include <ctime>
#include <iostream>
struct Fecha{
	int dia;
	int mes;
	int anio;
<<<<<<< HEAD
	time_t time;

=======
	std::time_t time;
>>>>>>> d562afb1b6b7774bacbac9ff5fe46547833ec259
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
