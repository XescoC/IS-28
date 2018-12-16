//agenda.h
//Código fuente que almacena la clase "Agenda".

#ifndef AGENDA_H
#define AGENDA_H

#include "alumno.h"


class Agenda {
private:
	list <Alumno> vector_;
	
public:
	//Menu para que el usuario pueda elegir la opción que quiere realizar
	int menu1()
	{
		int opcion;
		cout << "OPCIONES COORDINADOR:" << endl;
		cout << "	Opción 0: Cerrar programa" << endl 
		<< "	Opción 1: Mostrar alumno" << endl
		<< "	Opción 2: Añadir alumno" << endl
		<< "	Opción 3: Editar alumno" << endl
		<< "	Opción 4: Eliminar alumno" << endl
		<< "	Opción 5: Mostrar grupo" <<endl
		<< "	Opción 6: Mostrar lista de alumnos" << endl
		<< "	Opción 7: Guardar fichero" << endl
		<< "	Opción 8: Cargar fichero" << endl;
		cout << "------" << endl;
		cin >> opcion;
		cout << "------" << endl;
		return opcion;
	}
	int menu2()
	{
		int opcion;
		cout << "OPCIONES AYUDANTE:" << endl;
		cout << "	Opción 0: Cerrar programa" << endl 
		<< "	Opción 1: Mostrar alumno" << endl
		<< "	Opción 2: Añadir alumno" << endl
		<< "	Opción 3: Editar alumno" << endl
		<< "	Opción 4: Eliminar alumno" << endl
		<< "	Opción 5: Mostrar grupo" <<endl
		<< "	Opción 6: Mostrar lista de alumnos" << endl
		<< "	Opción 7: Cargar fichero" << endl
		<< "------" << endl;
		cin >> opcion;
		cout << "------" << endl;
		return opcion;
	}
	void buscarAlumnoDNI(string DNI, Alumno &alum);
	void buscarAlumnoDNIpos(string DNI, list <Alumno>::iterator &puntero);
	void buscarAlumnoApellido(string apellido, Alumno &alum);
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