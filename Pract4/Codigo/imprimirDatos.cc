#include "alumno.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos del alumno deseado.

void Agenda::imprimirDatos()
{
	Alumno alum;
	alum = buscarAlumno();
	if (alum!=NULL)
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
	else
	{
		cout << "No se encontró ningun alumno."
	}
}





