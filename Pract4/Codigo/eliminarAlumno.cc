//eliminarAlumno.cc
//Función que elimina del vector de la STL a un alumno
#include "agenda.h"

void Agenda::eliminarAlumno()
{
	alum=buscarAlumno();
	if (alum!=NULL)
	{
		list <Alumno>::iterator pos;
		pos=vector_.begin();
		for(pos = vector_.begin(); pos != vector_.end(); pos++)
		{
			if (pos->getDNI()==alum.getDNI())
			{
				pos->erase();
				cout << "Borrado con éxito.\n";
				return 0;
			}
		}
	}
	else
	{
		cout << "No se encontró ningun alumno."
	}

}