#include "alumno.h"
#include "agenda.h"

int main()
{
	int grupo;
	bool i=false;
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
			case 6:
				visualizarLista();
				i=true;
		}
	}while(opcion!=0);
	if (i==true)
	{
		//Abrir fichero markdown
	}

	return 0;
}