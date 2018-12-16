#include "alumno.h"
#include "agenda.h"

int main()
{
	int grupo, opcion,id,ID;
	bool i=false;
	string usuario;
	string contrasena;
	string user;
	string pass;
	string op="si";
	Agenda a;
	while(op=="Si" or op=="si")
	{
		ID=-1;
		cout << "LOGIN" << endl;
		cout << "	Usuario:";
		cin >> user;
		cout << "	Contraseña:";
		cin >> pass;
		ifstream fichEntrada;
		fichEntrada.open("usuarios.txt");
		if (fichEntrada)
		{
			string linea;
			while(getline(fichEntrada, linea, ',')){
				id=atoi(linea.c_str());
				getline(fichEntrada,linea,',');
				usuario=linea;
				getline(fichEntrada,linea,'\n');
				contrasena=linea;
				if (user==usuario and pass==contrasena)
				{
					ID=id;
					op="no";
				}
			}
			if (ID==-1)
			{
				cout << "Usuario o contraseña incorrecta." << endl << "¿Desea volver a intentarlo? (Si/No):" << endl;
				cin >> op;
			}
		}
		else
		{
			cout << "Error al abrir el fichero de usuarios." << endl;
		}
	}
	cout << "------" << endl;
	if (ID==0)
	{
		do{
			opcion=a.menu1();
			switch(opcion){
				case 1:
					a.imprimirDatos();
					break;
				case 2:
					a.anadirAlumno();
					break;
				case 3:
					a.editarAlumno();
					break;
				case 4:
					a.eliminarAlumno();
					break;
				case 5:
					cout << "Introduce el número del grupo que desea buscar:";
					cin >> grupo;
					a.imprimirGrupo(grupo);
					break;
				case 6:
					a.visualizarLista();
				case 7:
					a.guardarFichero();
					break;
				case 8:
					a.cargarFichero();
					break;
			}
		}while(opcion!=0);
	}
	if (ID==1)
	{
		do{
			opcion=a.menu2();
			switch(opcion){
				case 1:
					a.imprimirDatos();
					break;
				case 2:
					a.anadirAlumno();
					break;
				case 3:
					a.editarAlumno();
					break;
				case 4:
					a.eliminarAlumno();
					break;
				case 5:
					cout << "Introduce el número del grupo que desea buscar:";
					cin >> grupo;
					a.imprimirGrupo(grupo);
					break;
				case 6:
					a.visualizarLista();

				case 7:
					a.cargarFichero();
					break;
			}
		}while(opcion!=0);	
	}
	cout << "Cerrando el programa..." << endl;
	return 0;
}