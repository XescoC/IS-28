#include "alumno.h"
#include "agenda.h"

//Función que se encarga de imprimir los datos de todos los alumnos y volcarlo a un fichero markdown.
void Agenda::visualizarLista()
{
	string lider;
	ofstream fichSalida;
	fichSalida.open("lista.html");
	if (fichSalida)
	{
		list <Alumno>::iterator pos;
		Alumno alum;
		int i=0;
		fichSalida << "<!DOCTYPE html>" << endl;
		fichSalida << "<html>\n\t<head>\n\t\t<title>Lista de alumnos</title>" << endl;
		fichSalida << "\t</head>\n\t<body>\n\t\t<h1>Lista de alumnos</h1>" <<endl;
		fichSalida << "----------------------------------------------------------------------------------------------------------" << endl;
		for(pos = vector_.begin(); pos != vector_.end(); pos++)
		{
			alum=(*pos);
			//Escribe por pantalla la información de cada alumno
			cout<<"DNI: "<<alum.getDNI()<<endl;
			cout<<"Nombre: "<<alum.getNombre()<<endl;
			cout<<"Apellidos: "<<alum.getApellido1()<<" "<<alum.getApellido2()<<endl;
			cout<<"Email: "<<alum.getEmail()<<endl;
			cout<<"Direccion: "<<alum.getDireccion()<<endl;
			cout<<"Curso:"<<alum.getCurso()<<endl;
			cout<<"Fecha de nacimiento: "<<alum.getFecha()<<endl;
			cout<<"Grupo: "<<alum.getGrupo()<<endl;
			if (alum.getLider()==true)
			{
				lider="Si";
			}
			else 
			{
				lider="No";
			}
			cout<<"Lider:"<<lider<<endl;
			cout << "-------------------------------------------------------------------"<<endl;

			fichSalida << "\t\t<ul>\n\t\t\t<b>Alumno " << i+1 << "</b>" << endl;
			fichSalida << "\t\t\t<li>DNI: " << alum.getDNI() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Nombre: " << alum.getNombre() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Apellidos: " << alum.getApellido1() << " " << alum.getApellido2() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Email: " << alum.getEmail() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Direccion: " << alum.getDireccion() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Curso: " << alum.getCurso() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Fecha de nacimiento: " << alum.getFecha() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Grupo: " << alum.getGrupo() << "</li>" << endl;
			fichSalida << "\t\t\t<li>Lider: " << lider << "</li>\n\t\t</ul>" << endl;
			fichSalida <<"----------------------------------------------------------------------------------------------------------"<<endl<<endl;
			
			//Escribe en un fichero .md la información de cada alumno
			
			i++;
		}
		fichSalida << "\t</body>\n</html>" << endl;
		system("xdg-open lista.html");
	}
	else
	{
		cout << "Error al crear el fichero markdown." << endl;
	}
}