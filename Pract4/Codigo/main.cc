#include "alumno.h"
#include "agenda.h"

int main()
{
	int grupo, opcion;
	bool i=false;
	Agenda a;
	do{
		opcion=a.menu();
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
	if (i==true)
	{
		//Abrir fichero markdown
	}

	return 0;
}