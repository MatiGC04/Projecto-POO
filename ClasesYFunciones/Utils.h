/**
* @file Utils.h
* @brief Funciones varias para simplificar tareas y manejar fechas
* 
* En este archivo van las funciones generales. Es decir, las que no son 
* particulares de ninguna clase.
**/
#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <ctime>
#include <iostream>

/**
* @brief Estructura para almacenar fechas y operarlas
*
* Esta estructura almacena dia, mes, anio y una variable tipo time_t
* para poder utilizar las funciones de la libreria ctime
**/
struct fecha{
	int dia;
	int mes;
	int anio;
};
///@brief Funcion que devuelve la fecha de hoy
fecha FechaHoy();


std::time_t ObtenerTime(fecha fech);

///@brief Funcion que recibe una fecha y retorna un string en formato dd/mm/aaaa
std::string FechaTexto(fecha f1);

///@brief Funcion que recibe una fecha y retorna un string para usar en archivos
std::string FechaArchivo(fecha f1);

///@brief Funcion que valida si el anio de la fecha recibida es biciesto o no
bool AnioBiciesto(fecha f1);

///@brief Funcion que valida la fecha ingresada
bool ConfirmacionFecha(fecha f1);

///@brief Funcion que devuelve la diferencia de dias entre dos fechas
int DifDias(fecha f1, fecha f2);

///@brief Funcion que agrega un mes a la fecha ingresada
fecha FechaVencimiento(fecha f1);

///@brief Funcion encargada de validar si una fecha es menor que otra
bool operator<(fecha f1, fecha f2);

///@brief Funcion encargada de validar si una fecha es igual a otra
bool operator==(fecha f1,fecha f2);

///@brief Funcion encargada de mostrar por pantalla una fecha
std::ostream &operator<<(std::ostream &o, fecha f1);

///@brief Funcion que pasa todos los caracteres de una cadena txt a minuscula
void PasarMiniscula(std::string &txt);

#endif
