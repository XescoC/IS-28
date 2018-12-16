//alumno.h
//Código fuente que almacena la clase "Alumno".

#ifndef AGENDA_H
#define AGENDA_H

#include "alumno.h"


class Agenda {
private:
	list <Alumno> vector_;
	
public:
	//Menu para que el usuario pueda elegir la opción que quiere realizar
	int menu()
	{
		int opcion;
		cout << "Opción 0: Cerrar programa" << endl 
		<< "Opción 1: Mostrar alumno" << endl
		<< "Opción 2: Añadir alumno" << endl
		<< "Opción 3: Editar alumno" << endl
		<< "Opción 4: Eliminar alumno" << endl
		<< "Opción 5: Mostrar grupo" <<endl
		<< "Opción 6: Mostrar lista de alumnos" << endl
		<< "Opción 7: Guardar fichero" << endl
		<< "Opción 8: Cargar fichero" << endl
		<< "Opción 9: Guardar copia de seguridad" << endl
		<< "Opción 10: Cargar copia de seguridad" << endl;
		cin >> opcion;
		return opcion;
	}
	Alumno buscarAlumno();
	Alumno buscarAlumnoDNI(string DNI);
	Alumno buscarAlumnoApellido(string apellido);
	int menuBuscarAlumno();
	void imprimirDatos();
	void anadirAlumno();
	bool liderGrupo(int grupo);
	void editarAlumno();
	int printMenuEdit();
	void eliminarAlumno();
	void imprimirGrupo(int grupo);
	void visualizarLista();
	void guardarFichero();
	void cargarFichero();
	
};
#endif