#include "agenda.h"
#include "alumno.h"
//Función que se encarga de buscar el alumno por DNI o por su primer apellido
//Devuelve el objeto de la clase Alumno en la que se encuentra el alumno o si no encuentra ninguno devuelve un alumno con el DNI vacio
Alumno Agenda::buscarAlumno()
{
	Alumno alum;
	Agenda a;	
	int opcion;
	string DNI,apellido;
		do{
			opcion=a.menuBuscarAlumno();
			switch(opcion){
				case 1:
					cout << "Introduzca el DNI del alumno:" << endl;
					cin >> DNI;
					alum=a.buscarAlumnoDNI(DNI);
					break;
				case 2:
					cout << "Introduzca el primer apellido del alumno:" << endl;
					cin >> apellido;
					alum=a.buscarAlumnoApellido(apellido);
					break;
			}
		}while(opcion!=0);
	return alum;
}
Alumno Agenda::buscarAlumnoDNI(string DNI)
{
	list <Alumno>::iterator pos;
	Alumno alum;
	pos=vector_.begin();
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getDNI()==DNI)
		{
			alum=(*pos);
			return alum;
		}
	}
	alum.setDNI("");
	return alum;
}	

Alumno Agenda::buscarAlumnoApellido(string apellido)
{
	int contador=0;
	list <Alumno>::iterator pos;
	Alumno alum;
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
		alum=a.buscarAlumnoDNI(DNI);
		return alum;
	}
	else if(contador==0)
	{
		alum.setDNI("");
		return alum;
	}
	else
	{
		return alum;
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
	return opcion;
}
