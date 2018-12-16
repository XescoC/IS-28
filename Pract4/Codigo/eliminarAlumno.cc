//eliminarAlumno.cc
//Función que elimina de la lista vector_ un alumno
#include "agenda.h"
#include "alumno.h"

void Agenda::eliminarAlumno()
{
	Alumno alum;
	Agenda a;
	alum=a.buscarAlumno();
	if (alum.getDNI()!="")
	{
		list <Alumno>::iterator pos;
		pos=vector_.begin();
		for(pos = vector_.begin(); pos != vector_.end(); pos++)
		{
			if (pos->getDNI()==alum.getDNI())
			{
				vector_.erase(pos);
				cout << "Borrado con éxito.\n";
				return;
			}
		}
	}
	else
	{
		cout << "No se encontró ningun alumno."<<endl;
	}

}