//editarAlumno.cc
//Función que edita la información de un alumno
//MODIFICAR CIN
#include "agenda.h"
#include "alumno.h"
void Agenda::editarAlumno()
{
	string aux, aux2;
	int op = 1;
	string dni;
	string nombre;
	string apellido1;
	string apellido2;
	string email;
	string direccion;
	string curso;
	string fecha;
	int grupo;
	Alumno alum;
	list <Alumno>::iterator puntero;
	Agenda a;
	string DNI,apellido;
	cout << "Introduzca el DNI del alumno a modificar: ";
	cin >> DNI;
	cin.ignore(256, '\n');
	buscarAlumnoDNIpos(DNI, puntero);
	if (puntero->getDNI()!="")
	{
		do
		{
			op=a.printMenuEdit();
			switch(op)
			{
				case 1:
				cout << "Introduzca el nuevo DNI: ";
				cin >> dni;
				cin.ignore(256, '\n');
				cout << "El antiguo DNi es: '" << puntero->getDNI() << "', y el nuevo es: '" << dni << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setDNI(dni);
				}
				break;
				case 2:
				cout << "Introduzca el nuevo nombre: ";
				getline(cin, nombre);
				cout << "El antiguo nombre es: '" << puntero->getNombre() << "', y el nuevo es: '" << nombre << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setNombre(nombre);
				}
				break;
				case 3:
				cout << "Introduzca el primer apellido: ";
				getline(cin, apellido1);

				cout << "Introduzca el segundo apellido: ";
				getline(cin, apellido2);
				cout << "Los antiguos apellidos eran: '" << puntero->getApellido1() << " " << puntero->getApellido2() << "', y los nuevos son: '" << apellido1 << " " << apellido2 << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setApellido1(apellido1);
					puntero->setApellido2(apellido2);
				}
				break;
				case 4:
				cout << "Introduzca el nuevo email: ";
				cin >> email;
				cin.ignore(256, '\n');
				cout << "El antiguo email es: '" << puntero->getEmail() << "', y el nuevo es: '" << email << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setEmail(email);
				}
				break;
				case 5:
				cout << "Introduzca la nueva dirección: ";
				getline(cin, direccion);
				cout << "La antigua dirección es: '" << puntero->getDireccion() << "', y el nuevo es: '" << direccion << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setDireccion(direccion);
				}
				break;
				case 6:
				cout << "Introduzca el curso: ";
				cin >> curso;
				cin.ignore(256, '\n');
				cout << "El antiguo curso más alto matriculado es: '" << puntero->getCurso() << "', y el nuevo es: '" << curso << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setCurso(curso);
				}
				break;
				case 7:
				cout << "Introduzca la nueva fecha de nacimiento: ";
				getline(cin, fecha);
				cout << "La antigua fecha de nacimiento es: '" << puntero->getFecha() << "', y el nuevo es: '" << fecha << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setFecha(fecha);
				}
				break;
				case 8:
				cout << "Introduzca el nuevo número de grupo: ";
				cin >> grupo;
				cin.ignore(256, '\n');
				cout << "El antiguo grupo es: '" << puntero->getGrupo() << "', y el nuevo es: '" << grupo << "', ¿estás seguro de la modificación? (Y/N)\n";
				cin >> aux;
				cin.ignore(256, '\n');
				if (aux == "Y" || aux == "y"){
					cout << "Cambio realizado con éxito" << endl;
					puntero->setGrupo(grupo);
				}
				break;
				case 9:
				if (puntero->getLider() != true)
				{
					if (liderGrupo(puntero->getGrupo())==true)
					{
						cout << "No se puede editar el líder si ese grupo ya tiene uno\n";
						break;
					}	
					else
					{
						cout << "¿Quiere que el alumno sea lider de su grupo? (Y/N)\n";
						cin >> aux;
						cin.ignore(256, '\n');
						if (aux == "Y" || aux == "y"){
							cout << "Cambio realizado con éxito" << endl;
							puntero->setLider(true);
						}
					}
				}	
				else
				{
					cout << "¿Quiere que el alumno deje de ser lider de su grupo? (Y/N)\n";
					cin >> aux;
					cin.ignore(256, '\n');
					if (aux == "Y" || aux == "y"){
						cout << "Cambio realizado con éxito" << endl;
						puntero->setLider(false);
					}
				}
				break;
			}
		} while(op!=0);
		cout << "De acuerdo, saliendo del modo edición...\n";
		return;
	}
}

int Agenda::printMenuEdit()
{
	int opcion;
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
	cin >> opcion;
	cin.ignore(256, '\n');
	return opcion;
}