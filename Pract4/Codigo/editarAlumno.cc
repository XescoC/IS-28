//editarAlumno.cc
//Función que edita la información de un alumno
#include "agenda.h"

 void Agenda::editarAlumno()
{
	int pos;
	string aux, aux2;
	int op = 5;
	string dni;
	string nombre;
	string apellido1;
	string apellido2;
	string email;
	string direccion;
	int curso;
	string fecha;
	int grupo;

	pos = buscarAlumno();

	while (op >= 1 && <= 9)
	{
		switch(op)
		{
			case 0:
				cout << "De acuerdo, saliendo del modo edición...\n";
			break;
			case 1:
				cout << "Introduzca el nuevo DNi: ";
				cin >> dni;
				cout << "El antiguo DNi es: '" << vector_[pos].getDNI << "', y el nuevo es: '" << dni << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setDNI(dni);
			break;
			case 2:
				cout << "Introduzca el nuevo nombre: ";
				cin >> nombre;
				cout << "El antiguo nombre es: '" << vector_[pos].getNombre << "', y el nuevo es: '" << nombre << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setNombre(nombre);
			break;
			case 3:
				cout << "Introduzca el primer apellido: ";
				cin >> apellido1;
					
				cout << "Introduzca el segundo apellido: ";
				cin >> apellido2;
				cout << "Los antiguos apellidos eran: '" << vector_[pos].getApellido1 << " " << vector_[pos].getApellido2 << "', y los nuevos son: '" << apellido1 << " " << apellido2 << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setApellido1(apellido1);
					vector_[pos].setApellido2(apellido2);
			break;
			case 4:
				cout << "Introduzca el nuevo email: ";
				cin >> email;
				cout << "El antiguo email es: '" << vector_[pos].getEmail << "', y el nuevo es: '" << email << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setEmail(email);
			break;
			case 5:
				cout << "Introduzca la nueva dirección: ";
				cin >> direccion;
				cout << "La antigua dirección es: '" << vector_[pos].getDireccion << "', y el nuevo es: '" << direccion << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setDireccion(direccion);
			break;
			case 6:
				cout << "Introduzca el curso: ";
				cin >> curso;
				cout << "El antiguo curso más alto matriculado es: '" << vector_[pos].getCurso << "', y el nuevo es: '" << curso << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setCurso(curso);
			break;
			case 7:
				cout << "Introduzca la nueva fecha de nacimiento: ";
				cin >> fecha;
				cout << "La antigua fecha de nacimiento es: '" << vector_[pos].getFecha << "', y el nuevo es: '" << fecha << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setFecha(fecha);
			break;
			case 8:
				cout << "Introduzca el nuevo número de grupo: ";
				cin >> grupo;
				cout << "El antiguo grupo es: '" << vector_[pos].getGrupo << "', y el nuevo es: '" << grupo << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				if (aux == "Y" || aux == "y")
					vector_[pos].setGrupo(grupo);
			break;
			case 9:
				aux = 0;
				if (vector_[pos].getLider != true)
				{
					for (int i = 0; i < vector_.length && aux != 0; ++i)
					{
						if (vector_[i].getGrupo == vector_[pos].getGrupo && vector_[i].getLider == true)
							aux = 1;
					}
					if (aux == 1)
					{
						cout << "No se puede editar el líder si ese grupo ya tiene uno\n";
						break;
					}
					else
					{
						cout << "¿Quiere que el alumno sea lider de su grupo? (Y/N)";
						cin >> aux;
						if (aux == "Y" || aux == "y")
							vector_[pos].setLider(true);
					}	
				}
				else
				{
					cout << "¿Quiere que el alumno deje de ser lider de su grupo? (Y/N)\n";
					cin >> aux;
					if (aux == "Y" || aux == "y")
						vector_[pos].setLider(false);
				}
				break;
		}
	}
}

void printMenuEdit()
{
	cout << "¿Qué desea editar?\n";
	cout << "0.- Salir de la edición\n";
	cout << "1.- DNi\n";
	cout << "2.- Nombre\n";
	cout << "3.- Apellidos\n";
	cout << "4.- Email\n";
	cout << "5.- Dirección\n";
	cout << "6.- Curso\n";
	cout << "7.- Fecha de nacimiento\n";
	cout << "8.- Grupo\n";
	cout << "9.- Líder\n\n";
}