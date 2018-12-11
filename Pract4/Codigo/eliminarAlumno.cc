//eliminarAlumno.cc
//Función que elimina del vector de la STL a un alumno
#include "agenda.h"

void Agenda::eliminarAlumno()
{
	int pos;

	pos = buscarAlumno();
	alumnos.erase(pos);
	cout << "Borrado con éxito\n";
}