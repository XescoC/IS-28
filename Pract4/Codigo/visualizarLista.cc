#include "alumnos.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos de todos los alumnos y volcarlo a un fichero markdown.
void Agenda::visualizarLista()
{
	ofstream fichSalida;
	fichSalida.open("lista.md");
	if (fichSalida)
	{
		list <Alumno>::iterator pos;
		Alumno alum=NULL;
		fichSalida << "##Lista de alumnos:" << endl << endl;
		for(pos = vector_.begin(); pos != vector_.end(); pos++)
		{
			alum=(*pos);
			//Escribe por pantalla la información de cada alumno
			cout<<"DNI:"<<alum.getDNI()<<endl;
			cout<<"Nombre:"<<alum.getNombre()<<endl;
			cout<<"Apellidos:"<<alum.getApellido1()<<" "<<alum.getApellido2()<<endl;
			cout<<"Email:"<<alum.getEmail()<<endl;
			cout<<"Direccion:"<<alum.getDireccion()<<endl;
			cout<<"Curso:"<<alum.getCurso()<<endl;
			cout<<"Fecha de nacimiento:"<<alum.getFecha()<<endl;
			cout<<"Grupo:"<<alum.getGrupo()<<endl;
			cout << "-------------"<<endl;
			
			//Escribe en un fichero .md la información de cada alumno
			fichSalida << "DNI:"<<alum.getDNI()<<endl<<endl;
			fichSalida << "Nombre:"<<alum.getNombre()<<endl;
			fichSalida << "Apellidos:"<<alum.getApellido1()<<" "<<alum.getApellido2()<<endl<<endl;
			fichSalida << "Email:"<<alum.getEmail()<<endl<<endl;
			fichSalida << "Direccion:"<<alum.getDireccion()<<endl<<endl;
			fichSalida << "Curso:"<<alum.getCurso()<<endl<<endl;
			fichSalida << "Fecha de nacimiento:"<<alum.getFecha()<<endl;
			fichSalida << "Grupo:"<<alum.getGrupo()<<endl<<endl;
			fichSalida <<"-----------"<<endl<<endl;
		}
	}
	else
	{
		cout << "Error al crear el fichero markdown." << endl;
	}
}