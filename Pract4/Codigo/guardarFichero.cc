#include "alumno.h"
#include "agenda.h"

//Función que se encarga de guardar la lista de alumnos en un fichero binario.
void Agenda::guardarFichero()
{
	ofstream fichSalida;
	fichSalida.open("alumnos.bin");
	if (fichSalida)
	{
		list <Alumno>::iterator pos;
		Alumno alum=NULL;
		for(pos = vector_.begin(); pos != vector_.end(); pos++)
		{
			alum=(*pos);

			//Escribe en un fichero .md la información de cada alumno
			//DNI,nombre,apellido1,apellido2,email,direccion,curso,fecha,grupo\n
			fichSalida <<alum.getDNI()<<",";
			fichSalida << alum.getNombre()<<",";
			fichSalida << alum.getApellido1()<<",";
			fichSalida <<alum.getApellido2()<<",";
			fichSalida << alum.getEmail()<<",";
			fichSalida << alum.getDireccion()<<",";
			fichSalida << alum.getCurso()<<",";
			fichSalida << alum.getFecha()<<",";
			fichSalida << alum.getGrupo()<<",";
			if (alum.getLider()==true)
			{
				fichSalida << "true" << endl;
			}
			else
			{
				fichSalida << "false" << endl;
			}
		}
	}
	else
	{
		cout << "Error al crear el fichero markdown." << endl;
	}
}