#include "alumno.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos del alumno deseado.

void Agenda::imprimirDatos()
{
	Alumno alum;
	Agenda a;
	string DNI,apellido;
	string lider;
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
	if (alum.getDNI()=="")
	{
		cout << "No se encontró ningun alumno." <<endl;
	}
	else
	{
		cout<<"DNI:"<<alum.getDNI()<<endl;
		cout<<"Nombre:"<<alum.getNombre()<<endl;
		cout<<"Apellidos:"<<alum.getApellido1()<<" "<<alum.getApellido2()<<endl;
		cout<<"Email:"<<alum.getEmail()<<endl;
		cout<<"Direccion:"<<alum.getDireccion()<<endl;
		cout<<"Curso:"<<alum.getCurso()<<endl;
		cout<<"Fecha de nacimiento:"<<alum.getFecha()<<endl;
		cout<<"Grupo:"<<alum.getGrupo()<<endl;
		if (alum.getLider()==true)
			{
				lider="Sí";
			}
		else 
		{
			lider="No";
		}
		cout<<"Lider:"<<lider<<endl;
		
	}
}





