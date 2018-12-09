#include "alumnos.h"
#include "agenda.h"
#include <string>
using std::cout;
using std::cin;
using std::endl;

//Función que se encarga de imprimir los datos del alumno deseado.

int buscarAlumno(string DNI){
	int i, n;
	n=vector_.size();
	for (i=0; i<n; i++){
		
		if (vector_[i].DNI==DNI){

			cout<<"El DNI del alumno es :"<<vector_[i].DNI;
			cout<<"El Nombre del alumno es :"<<vector_[i].nombre;
			cout<<"Los Apellidos del alumno son :"<<vector_[i].apellidos;
			cout<<"El Email del alumno es :"<<vector_[i].email;
			cout<<"La Direccion del alumno es :"<<vector_[i].direccion;
			cout<<"El Curso del alumno es :"<<vector_[i].curso;
			cout<<"La Fecha de nacimiento del alumno es :"<<vector_[i].fecha;
			cout<<"El alumno pertenece al grupo :"<<vector_[i].grupo;
		}	
	}
} return -1;





