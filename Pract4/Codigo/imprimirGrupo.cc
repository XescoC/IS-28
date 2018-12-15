#include "alumnos.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos de todos los alumnos que pertenezcan al grupo pasado por parámetro.

void Agenda::imprimirGrupo(int grupo){
	list <Alumno>::iterator pos;
	Alumno alum=NULL;
	pos=vector_.begin();
	cout << "Integrantes del grupo " << grupo << ":" << endl;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getGrupo()==grupo)
		{
			cout << "Integrante " << contador+1 << ":" << endl;
			cout <<"	DNI:"<<vector_[i].DNI_<<endl;
			cout <<"	Nombre:"<<vector_[i].nombre_<<endl;
			cout <<"	Apellidos:"<<vector_[i].apellido1_<<" "<<vector_[i].apellido2_<<endl;
			cout <<"	Email:"<<vector_[i].email_<<endl;
			cout <<"	Direccion:"<<vector_[i].direccion_<<endl;
			cout <<"	Curso:"<<vector_[i].curso_<<endl;
			cout <<"	Fecha de nacimiento:"<<vector_[i].fecha_<<endl;
			cout <<"	Grupo:"<<vector_[i].grupo_<<endl;

			contador ++;
		}
	}
	if (contador == 0)
	{
		cout << "No se encontró ningun integrante del grupo " << grupo << "." << endl;
	}

}