#include "agenda.h"
#include "alumno.h"
//Función que se encarga de buscar el alumno por DNI o por su primer apellido
//Devuelve el objeto de la clase Alumno en la que se encuentra el alumno o NULL si no encuentra ninguno
int Agenda::buscarAlumno()
{
	Alumno alum=NULL;
	do{
		//Menu para elegir la manera en la que se desea buscar al alumno
		do{
			opcion=menuBuscarAlumno();
			switch(opcion){
				case 1:
					cout << "Introduzca el DNI del alumno:" << endl;
					cin >> DNI;
					alum=buscarAlumnoDNI(DNI);
					break;
				case 2:
					cout << "Introduzca el primer apellido del alumno:" << endl;
					cin >> apellido;
					alum=buscarAlumnoApellido(apellido);
					break;
			}
		}while(opcion!=0);

		if (alum==	NULL)
		{
			cout << "No se encontró ningun alumno con los datos introducidos." << endl;
		}

	}while(alum!=NULL);
	//Bucle do-while que se ejecuta cada vez que no se encuentre ningun alumno
	
	return i;
}
Alumno Agenda::buscarAlumnoDNI(string DNI)
{
	list <Alumno>::iterator pos;
	Alumno alum=NULL;
	pos=vector_.begin();
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getDNI()==DNI)
		{
			alum=pos;
			return alum;
		}
	}
	return alum;
}	

Alumno Agenda::buscarAlumnoApellido(string apellido)
{
	int contador=0;
	list <Alumno>::iterator pos;
	Alumno alum=NULL;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getApellido1()==apellido)
		{
			contador ++;
			alum=pos;
		}
	}
	//En caso de que encuentre 2 o mas alumnos con el mismo apellido ejecutara la funcion de buscar por DNI
	if (contador > 1)
	{
		string DNI;
		cout << "Existe más un alumno con este apellido, introduzca su DNI:" <<endl;
		cin >> DNI;
		alum=buscarAlumnoDNI(DNI);
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
	<< "Opción 0: Cancelar búsqueda" << endl
	<< "Opción 1: Por DNI" << endl 
	<< "Opción 2: Por apellido" << endl;
	cin >> opcion;
	return opcion;
}
