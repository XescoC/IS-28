#include "alumnos.h"
#include "agenda.h"
#include <string>
using std::cout;
using std::cin;
using std::endl;

//Función que se encarga de añadir el alumno.

void añadirAlumno(){
	string dni;
	string nombre;
	string apellidos;
	string email;
	string direccion;
	int curso;
	string fecha;
	int grupo;
	bool lider;
	string opcion;


int numero_alumno=0;
for(int i=0; i<150; i++){
		if(Alumno[i].DNI_!=NULL){	
		 numero_alumno++;
		}
	}

	
		cout<<"Introduzca el DNI: ";
		cin>>dni;
		setDNI(dni);
		getDNI();

		cout<<"Introduzca el nombre del alumno: ";
		cin>>nombre;
		setNombre(nombre);
		getNombre();

		cout<<"Introduzca los apellidos del alumno: ";
		cin>>apellidos;
		setApellidos(apellidos);
		getApellidos();

		cout<<"Introduzca el E-Mail del alumno: ";
		cin>>email;
		setEmail(email);
		getEmail();

		cout<<"Introduzca la dirección del alumno: ";
		cin>>direccion;
		setDireccion(direccion);
		getDireccion();

		cout<<"Introduzca el curso matriculado del alumno: ";
		cin>>curso;
		setCurso(curso);
		getCurso();

		cout<<"Introduzca la fecha de nacimiento del alumno: ";
		cin>>fecha;
		setFecha(fecha);
		getFecha();

		cout<<"Introduzca el grupo del alumno: ";
		cin>>grupo;
		setGrupo(grupo);
		getGrupo();

		cout<<"¿Dicho alumno es líder? (Si/No): ";
		cin>>opcion;
				if(opcion=="Si"){
					lider=true;
				}
				else{
					lider=false;
				}
		setLider(lider);
		getLider();


}
