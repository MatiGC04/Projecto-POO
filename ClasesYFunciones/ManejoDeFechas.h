#ifndef MANEJODEFECHAS_H
#define MANEJODEFECHAS_H
#include <ctime>
#include <iostream>
using namespace std;
struct Fecha{
	int dia;
	int mes;
	int anio;
};
Fecha FechaHoy();
int DifMeses(Fecha F1,Fecha F2);
bool ConfirmacionFecha(Fecha F1);
string Fecha_a_texto(Fecha F1);
Fecha Texto_a_fecha (string Fecha1);
bool operator<(Fecha F1, Fecha F2);
bool operator==(Fecha F1,Fecha F2); 
bool AnioBiciesto(Fecha F1);
