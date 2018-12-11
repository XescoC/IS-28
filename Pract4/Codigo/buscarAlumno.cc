#include "agenda.h"
#include "alumno.h"
//Función que se encarga de buscar el alumno por DNI o por su primer apellido
//Devuelve la posición del vector en la que se encuentra el alumno o -1 si no encuentra ninguno
int Agenda::buscarAlumno()
{
	int i;
	do{
		opcion=menuBuscarAlumno();
		switch(opcion){
			case 1:
				cout << "Introduzca el DNI del alumno:" << endl;
				cin >> DNI;
				i=buscarAlumnoDNI(DNI);

				break;
			case 2:
				cout << "Introduzca el primer apellido del alumno:" << endl;
				cin >> apellido;
				i=buscarAlumnoApellido(apellido);

				break;
		}
	}while(opcion!=0);
	return i;
}
int Agenda::buscarAlumnoDNI(string DNI)
{
	int i, tam;
	tam=vector_.size();
	for ( i = 0; i < tam; ++i)//HAY QUE CAMBIARLO
	{
		if (vector_[i].DNI==DNI)
		{
			return i;
		}
	}
}	return -1;

int Agenda::buscarAlumnoApellido(string apellido)
{
	int i=-1, tam, contador=0;
	tam=vector_.size();
	for ( i = 0; i < tam; ++i)//HAY QUE CAMBIARLO
	{
		if (vector_[i].apellido1==apellido)
		{
			contador ++;
		}
	}
	//En caso de que encuentre 2 o mas alumnos con el mismo apellido ejecutara la funcion de buscar por DNI
	if (contador > 1)
	{
		string DNI;
		cout << "Existe más un alumno con este apellido, introduzca su DNI:" <<endl;
		cin >> DNI;
		i=buscarAlumnoDNI(DNI);
		return i;
	}
	else
	{
		return i;
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
