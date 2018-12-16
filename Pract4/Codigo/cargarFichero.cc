#include "alumno.h"
#include "agenda.h"

//Función que se encarga de cargar la lista de alumnos en un fichero binario.
void Agenda::cargarFichero()
{
	ifstream fichEntrada;
	fichEntrada.open("alumnos.bin");
	if (fichEntrada)
	{
		list <Alumno>::iterator pos;
		Alumno alum;
		vector_.clear();
		string linea;
		bool lider;
		while(getline(fichEntrada, linea, ',')){
			alum.setDNI(linea);
			getline(fichEntrada,linea,',');
			alum.setNombre(linea);
			getline(fichEntrada,linea,',');
			alum.setApellido1(linea);
			getline(fichEntrada,linea,',');
			alum.setApellido2(linea);
			getline(fichEntrada,linea,',');
			alum.setEmail(linea);
			getline(fichEntrada,linea,',');
			alum.setDireccion(linea);
			getline(fichEntrada,linea,',');
			alum.setCurso(linea);
			getline(fichEntrada,linea,',');
			alum.setFecha(linea);
			getline(fichEntrada,linea,',');
			alum.setGrupo(atoi(linea.c_str()));
			getline(fichEntrada,linea,'\n');
			if (linea=="true")
			{
				lider=true;
			}
			else
			{
				lider=false;
			}
			alum.setLider(lider);

			vector_.push_back(alum);
		}
	}
	else
	{
		cout << "Error al abrir el fichero binario." << endl;
	}
}