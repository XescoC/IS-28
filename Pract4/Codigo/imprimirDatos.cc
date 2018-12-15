#include "alumnos.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos del alumno deseado.

int Agenda::imprimirDatos()
{
	int i;
	i = buscarAlumno();
		cout<<"DNI:"<<vector_[i].DNI_<<endl;
		cout<<"Nombre:"<<vector_[i].nombre_<<endl;
		cout<<"Apellidos:"<<vector_[i].apellido1_<<" "<<vector_[i].apellido2_<<endl;
		cout<<"Email:"<<vector_[i].email_<<endl;
		cout<<"Direccion:"<<vector_[i].direccion_<<endl;
		cout<<"Curso:"<<vector_[i].curso_<<endl;
		cout<<"Fecha de nacimiento:"<<vector_[i].fecha_<<endl;
		cout<<"Grupo:"<<vector_[i].grupo_<<endl;
}





