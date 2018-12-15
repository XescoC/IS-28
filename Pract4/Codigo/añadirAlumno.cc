#include "alumnos.h"
#include "agenda.h"


//Función que se encarga de añadir el alumno.

void Agenda::añadirAlumno(){
	Alumno alum;
	int pos=0;

	
		cout<<"DNI: " << endl;
		cin>>dni;
		alum.setDNI(dni);

		cout<<"Nombre: " << endl;
		cin>>nombre;
		alum.setNombre(nombre);;

		cout<<"Primer apellido: " << endl;
		cin>>apellido1;
		alum.setApellido1(apellido1);
		

		cout<<"Segundo apellido: " << endl;
		cin>>apellido2;
		alum.setApellido2(apellido2);


		cout<<"E-Mail: " << endl;
		cin>>email;
		alum.setEmail(email);
		

		cout<<"Dirección: ";
		cin>>direccion;
		alum.setDireccion(direccion);

		cout<<"Curso más alto matriculado: " << endl;
		cin>>curso;
		alum.setCurso(curso);

		cout<<"Fecha de nacimiento: " << endl;
		cin>>fecha;
		alum.setFecha(fecha);

		cout<<"Grupo: " << endl;
		cin>>grupo;
		alum.setGrupo(grupo);

		cout<<"¿Dicho alumno es líder? (Si/No): " << endl;
		cin>>opcion;
				if(opcion=="Si" or opcion=="si"){
					lider=true;
				}
				else{
					lider=false;
				}
		alum.setLider(lider);

	vector_.push_back(alum);


}
