#include "alumno.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos de todos los alumnos que pertenezcan al grupo pasado por parámetro.

void Agenda::imprimirGrupo(int grupo){
	list <Alumno>::iterator pos;
	Alumno alum;
	int contador=0;
	string lider;
	pos=vector_.begin();
	cout << "Integrantes del grupo " << grupo << ":" << endl;
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getGrupo()==grupo)
		{
			alum=(*pos);
			cout << "Integrante " << contador+1 << ":" << endl;
			cout<<"	DNI:"<<alum.getDNI()<<endl;
			cout<<"	Nombre:"<<alum.getNombre()<<endl;
			cout<<"	Apellidos:"<<alum.getApellido1()<<" "<<alum.getApellido2()<<endl;
			cout<<"	Email:"<<alum.getEmail()<<endl;
			cout<<"	Direccion:"<<alum.getDireccion()<<endl;
			cout<<"	Curso:"<<alum.getCurso()<<endl;
			cout<<"	Fecha de nacimiento:"<<alum.getFecha()<<endl;
			cout<<"	Grupo:"<<alum.getGrupo()<<endl;
			if (alum.getLider()==true)
				{
					lider="Sí";
				}
			else 
			{
				lider="No";
			}
			cout<<"Lider:"<<lider<<endl;

			contador ++;
		}
	}
	if (contador == 0)
	{
		cout << "No se encontró ningun integrante del grupo " << grupo << "." << endl;
	}

}