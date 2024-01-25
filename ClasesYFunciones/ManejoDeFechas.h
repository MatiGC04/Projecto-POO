/**
* @file ManejoDeFechas.h
* @brief Declaraciones que se van a utilizar para el manejo de fechas
*
* En este archivo se declaran el tipo de dato "fecha" y las funciones para su 
* manejo.
**/

#ifndef MANEJODEFECHAS_H
#define MANEJODEFECHAS_H
#include <ctime>
#include <iostream>

/**
* @brief Estructura para almacenar fechas y operarlas
*
* Esta estructura almacena dia, mes, añio y una variable tipo time_t
* para poder utilizar las funciones de la libreria ctime
**/
struct fecha{
	int dia;
	int mes;
	int anio;
	std::time_t time;
};
///@brief Funcion que devuelve la fecha de hoy
fecha FechaHoy();
///@brief Funcion que recibe dia, mes y añio para devolver variable tipo fecha
fecha ConvertFecha(int dia, int mes, int anio);
///@brief Funcion que recibe una fecha y retorna un string en formato dd/mm/aaaa
std::string FechaTexto(fecha F1);
///@brief Funcion que valida si el año de la fecha recibida es biciesto o no
bool AnioBiciesto(fecha F1);
///@brief Funcion que valida la fecha ingresada
bool ConfirmacionFecha(fecha F1);
///@brief Funcion que devuelve la diferencia de dias entre dos fechas
int DifDias(fecha F1, fecha F2);
///@brief Funcion que agrega un mes a la fecha ingresada
fecha FechaVencimiento(fecha F1);
///@brief Funcion encargada de validar si una fecha es menor que otra
bool operator<(fecha F1, fecha F2);
///@brief Funcion encargada de validar si una fecha es igual a otra
bool operator==(fecha F1,fecha F2);
///@brief Funcion encargada de mostrar por pantalla una fecha
std::ostream &operator<<(std::ostream &o, fecha F1);



#endif
