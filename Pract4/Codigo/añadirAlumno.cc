#include "alumnos.h"
#include "agenda.h"


//Función que se encarga de añadir el alumno.

void Agenda::añadirAlumno(){
	string dni;
	string nombre;
	string apellido1;
	string apellido2;
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

		cout<<"Introduzca el primer apellido del alumno: ";
		cin>>apellido1;
		setApellido1(apellido1);
		getApellido1();

		cout<<"Introduzca el segundo apellido del alumno: ";
		cin>>apellido2;
		setApellido2(apellido2);
		getApellido2();


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
