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
		<< "Opción 10: Cargar copia de seguridad" << endl
		cin >> opcion;
		return opcion;
	}
	Alumno Agenda::buscarAlumno();
	Alumno Agenda::buscarAlumnoDNI(string DNI);
	Alumno Agenda::buscarAlumnoApellido(string apellido);
	int Agenda::menuBuscarAlumno();
	void Agenda::imprimirDatos();
	void Agenda::añadirAlumno();
	bool Agenda::liderGrupo(int grupo);
	void Agenda::editarAlumno();
	int Agenda::printMenuEdit();
	void Agenda::eliminarAlumno();
	void Agenda::imprimirGrupo(int grupo);
	void Agenda::visualizarLista();
	void Agenda::guardarFichero();
	void Agenda::cargarFichero();
	


	
};
#endif