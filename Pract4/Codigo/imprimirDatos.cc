#include "alumnos.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos del alumno deseado.

int Agenda::imprimirDatos(){
	int i;
	i = buscarAlumno();
	if (i==-1)
	{
		cout << "No se encontró al alumno" << endl;
	}
	else
	{
		cout<<"DNI:"<<vector_[i].DNI<<endl;
		cout<<"Nombre:"<<vector_[i].nombre<<endl;
		cout<<"Apellidos:"<<vector_[i].apellido1<<" "<<vector_[i].apellido2<<endl;
		cout<<"Email:"<<vector_[i].email<<endl;
		cout<<"Direccion:"<<vector_[i].direccion<<endl;
		cout<<"Curso:"<<vector_[i].curso<<endl;
		cout<<"Fecha de nacimiento:"<<vector_[i].fecha<<endl;
		cout<<"Grupo:"<<vector_[i].grupo<<endl;
	}

} return -1;





