#include<iostream>
#include <string>
#include "Persona.h"
#include "Utils.h"
#include "Cliente.h"
#include "Couch.h"
#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {

	
	fecha a=FechaHoy();
	tm *time=localtime(&a.time);
	string fechita=asctime(time);
	cout<<fechita;
	return 0;	
}

