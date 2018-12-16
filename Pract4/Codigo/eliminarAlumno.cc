//eliminarAlumno.cc
//Función que elimina de la lista vector_ un alumno
#include "agenda.h"
#include "alumno.h"

void Agenda::eliminarAlumno()
{
	Alumno alum;
	string DNI,apellido;
	Agenda a;
	switch(a.menuBuscarAlumno()){
		case 1:
		cout << "Introduzca el DNI del alumno:" << endl;
		cin >> DNI;
		cin.ignore(256, '\n');
		buscarAlumnoDNI(DNI, alum);
		break;
		case 2:
		cout << "Introduzca el primer apellido del alumno:" << endl;
		getline(cin, apellido);
		a.buscarAlumnoApellido(apellido, alum);
		break;
	}
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