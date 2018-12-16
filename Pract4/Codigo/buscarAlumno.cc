#include "agenda.h"
#include "alumno.h"
//Función que se encarga de buscar el alumno por DNI o por su primer apellido
//Devuelve el objeto de la clase Alumno en la que se encuentra el alumno o si no encuentra ninguno devuelve un alumno con el DNI vacio

void Agenda::buscarAlumnoDNI(string DNI, Alumno &alum)
{
	list <Alumno>::iterator pos;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getDNI()==DNI)
		{
			alum = (*pos);
		}
	}
}	

void Agenda::buscarAlumnoDNIpos(string DNI, list <Alumno>::iterator &puntero)
{
	list <Alumno>::iterator pos;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getDNI()==DNI)
		{
			puntero = pos;
		}
	}
}	

void Agenda::buscarAlumnoApellido(string apellido, Alumno &alum)
{
	int contador=0;
	list <Alumno>::iterator pos;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getApellido1()==apellido)
		{
			contador ++;
			alum=(*pos);
		}
	}
	//En caso de que encuentre 2 o mas alumnos con el mismo apellido ejecutara la funcion de buscar por DNI
	if (contador > 1)
	{
		string DNI;	
		Agenda a;
		cout << "Existe más un alumno con este apellido, introduzca su DNI:" <<endl;
		cin >> DNI;
		cin.ignore(256, '\n');
		a.buscarAlumnoDNI(DNI, alum);
	}
}
int Agenda::menuBuscarAlumno()
{
	int opcion;
	cout << "Buscar alumno:" << endl 
	<< "	Opción 0: Cancelar búsqueda" << endl
	<< "	Opción 1: Por DNI" << endl 
	<< "	Opción 2: Por apellido" << endl;
	cin >> opcion;
	cin.ignore(256, '\n');
	return opcion;
}
