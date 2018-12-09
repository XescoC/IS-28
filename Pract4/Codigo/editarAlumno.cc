//editarAlumno.cc
//Función que edita la información de un alumno

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Agenda.h"

 void Agenda::editarAlumno()
{
	int pos;
	std::string aux, aux2;
	int op = 5;
	std::string dni;
	std::string nombre;
	std::string apellido1;
	std::string apellido2;
	std::string email;
	std::string direccion;
	int curso;
	std::string fecha;
	int grupo;

	pos = buscarAlumno();

	while (op >= 1 && <= 9)
	{
		switch(op)
		{
			case 0:
				std::cout << "De acuerdo, saliendo del modo edición...\n";
			break;
			case 1:
				std::cout << "Introduzca el nuevo DNi: ";
				std::cin >> dni;
				std::cout << "El antiguo DNi es: '" << alumnos[pos].getDNI << "', y el nuevo es: '" << dni << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setDNI(dni);
			break;
			case 2:
				std::cout << "Introduzca el nuevo nombre: ";
				std::cin >> nombre;
				std::cout << "El antiguo nombre es: '" << alumnos[pos].getNombre << "', y el nuevo es: '" << nombre << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setNombre(nombre);
			break;
			case 3:
				std::cout << "Introduzca el primer apellido: ";
				std::cin >> apellido1;
					
				std::cout << "Introduzca el segundo apellido: ";
				std::cin >> apellido2;
				std::cout << "Los antiguos apellidos eran: '" << alumnos[pos].getApellido1 << " " << alumnos[pos].getApellido2 << "', y los nuevos son: '" << apellido1 << " " << apellido2 << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setApellido1(apellido1);
					alumnos[pos].setApellido2(apellido2);
			break;
			case 4:
				std::cout << "Introduzca el nuevo email: ";
				std::cin >> email;
				std::cout << "El antiguo email es: '" << alumnos[pos].getEmail << "', y el nuevo es: '" << email << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setEmail(email);
			break;
			case 5:
				std::cout << "Introduzca la nueva dirección: ";
				std::cin >> direccion;
				std::cout << "La antigua dirección es: '" << alumnos[pos].getDireccion << "', y el nuevo es: '" << direccion << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setDireccion(direccion);
			break;
			case 6:
				std::cout << "Introduzca el curso: ";
				std::cin >> curso;
				std::cout << "El antiguo curso más alto matriculado es: '" << alumnos[pos].getCurso << "', y el nuevo es: '" << curso << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setCurso(curso);
			break;
			case 7:
				std::cout << "Introduzca la nueva fecha de nacimiento: ";
				std::cin >> fecha;
				std::cout << "La antigua fecha de nacimiento es: '" << alumnos[pos].getFecha << "', y el nuevo es: '" << fecha << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setFecha(fecha);
			break;
			case 8:
				std::cout << "Introduzca el nuevo número de grupo: ";
				std::cin >> grupo;
				std::cout << "El antiguo grupo es: '" << alumnos[pos].getGrupo << "', y el nuevo es: '" << grupo << "', ¿estás seguro de la modificación? (Y/N)\n";
				std::cin >> aux;
				if (aux == "Y" || aux == "y")
					alumnos[pos].setGrupo(grupo);
			break;
			case 9:
				aux = 0;
				if (alumnos[pos].getLider != true)
				{
					for (int i = 0; i < alumnos.length && aux != 0; ++i)
					{
						if (alumnos[i].getGrupo == alumnos[pos].getGrupo && alumnos[i].getLider == true)
							aux = 1;
					}
					if (aux == 1)
					{
						std::cout << "No se puede editar el líder si ese grupo ya tiene uno\n";
						break;
					}
					else
					{
						std::cout << "¿Quiere que el alumno sea lider de su grupo? (Y/N)";
						std::cin >> aux;
						if (aux == "Y" || aux == "y")
							alumnos[pos].setLider(true);
					}	
				}
				else
				{
					std::cout << "¿Quiere que el alumno deje de ser lider de su grupo? (Y/N)\n";
					std::cin >> aux;
					if (aux == "Y" || aux == "y")
						alumnos[pos].setLider(false);
				}
				break;
		}
	}
}

void printMenuEdit()
{
	std::cout << "¿Qué desea editar?\n";
	std::cout << "0.- Salir de la edición\n";
	std::cout << "1.- DNi\n";
	std::cout << "2.- Nombre\n";
	std::cout << "3.- Apellidos\n";
	std::cout << "4.- Email\n";
	std::cout << "5.- Dirección\n";
	std::cout << "6.- Curso\n";
	std::cout << "7.- Fecha de nacimiento\n";
	std::cout << "8.- Grupo\n";
	std::cout << "9.- Líder\n\n";
}