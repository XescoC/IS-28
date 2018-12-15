#include "alumno.h"
#include "agenda.h"

int main()
{
	int grupo;
	do{
		opcion=menu();
		switch(opcion){
			case 1:
				imprimirDatos();
				break;
			case 2:
				añadirAlumno();
				break;
			case 3:
				editarAlumno();
				break;
			case 4:
				eliminarAlumno();
				break;
			case 5:
				cout << "Introduce el número del grupo que desea buscar:";
				cin >> grupo;
				imprimirGrupo(grupo);
				break;
		}
	}while(opcion!=0);
	return 0;
}