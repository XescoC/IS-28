#include "alumno.h"
#include "agenda.h"

int main()
{
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
		}
	}while(opcion!=0);
	return 0;
}