//eliminarAlumno.cc
//Función que elimina del vector de la STL a un alumno

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Agenda.h"

void Agenda::eliminarAlumno()
{
	int pos;

	pos = buscarAlumno();
	alumnos.erase(pos);
	std::cout << "Borrado con éxito\n";
}