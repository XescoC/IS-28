#include "alumno.h"
#include "agenda.h"
//Función que se encarga de añadir el alumno.
//Crea un objeto alumno en el que se añaden los valores con sus modificadores y se añade al final de la lista un vez terminado.
void Agenda::anadirAlumno(){
	Alumno alum,aux;
	Agenda a;
	string dni, nombre, opcion, apellido1, apellido2, email, direccion, curso, fecha,GRUPO;
	int grupo;
	bool lider;
	//CONTROL DE ERRORES DE VECTOR COMPLETO
	if (vector_.size()>=149)
	{
		cout << "No se pueden añadir más alumnos, la base de datos esta completa." << endl;
		return;
	}
	//Control de errores para que no se añadan dos alumnos con el mismo DNI ni se deje el campo en blanco ya que son campos obligatorios
	do
	{
		cout<<"DNI: " << endl;
		cin>>dni;
		cin.ignore(256, '\n');
		a.buscarAlumnoDNI(dni, aux);
		if (aux.getDNI()!="")
		{
			cout << "El DNI ya existe, por favor introduzca otro distinto." << endl;
		}
		if (dni=="")
		{
			cout << "Campo obligatorio." << endl;
		}
	}while(aux.getDNI()!="" and dni=="");
	alum.setDNI(dni);

	do
	{
		cout<<"Nombre: " << endl;
		getline(cin, nombre);
		if (nombre=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(nombre=="");
	//Control de errores para campos obligatorios
	alum.setNombre(nombre);;
	
	do
	{
		cout<<"Primer apellido: " << endl;
		getline(cin, apellido1);
		if (apellido1=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(apellido1=="");
	alum.setApellido1(apellido1);
		
	do
	{
		cout<<"Segundo apellido: " << endl;
		getline(cin, apellido2);
		if (apellido2=="")
		{
			cout << "Campo obligatorio." << endl;
		}
	}while(apellido2=="");		
	alum.setApellido2(apellido2);

	do
	{
		cout<<"E-Mail: " << endl;
		cin>>email;
		cin.ignore(256, '\n');
		if (email=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(email=="");
	alum.setEmail(email);
		
	do
	{
		cout<<"Dirección: "<< endl;
		getline(cin, direccion);
		if (direccion=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(direccion=="");
	alum.setDireccion(direccion);

	//MODIFICAR TODO LO DEMAS PARA QUE CURSO SEA STRING
	do
	{
		cout<<"Curso más alto matriculado: " << endl;
		cin >> curso;
		cin.ignore(256, '\n');
		if (curso=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(curso=="");
	alum.setCurso(curso);
	do
	{
		cout<<"Fecha de nacimiento: " << endl;
		getline(cin, fecha);
		if (fecha=="")
		{
			cout << "Campo obligatorio."<< endl;
		}
	}while(fecha=="");
	alum.setFecha(fecha);

	//Campo no obligatorio
	cout<<"Grupo: " << endl;
	cin>>GRUPO;
	cin.ignore(256, '\n');
	grupo=atoi(GRUPO.c_str());
	alum.setGrupo(grupo);

	//Si existe un lider en el grupo se le asigna directamente como miembro, sino se le pregunta si es lider.
	if (a.liderGrupo(grupo)==true)
	{
		lider=false;
	}
	else
	{
		cout<<"¿Dicho alumno es líder? (Si/No): " << endl;
		cin>>opcion;
		cin.ignore(256, '\n');
		if(opcion=="Si" or opcion=="si"){
				lider=true;
		}
		else{
				lider=false;
		}
	}
	alum.setLider(lider);

	vector_.push_back(alum);


}
//Funcion que comprueba si existe un lider en el grupo que se le pasa como parámetro.
bool Agenda::liderGrupo(int grupo)
{
	list <Alumno>::iterator pos;
	Alumno alum;
	pos=vector_.begin();
	for(pos = vector_.begin(); pos != vector_.end(); pos++)
	{
		if (pos->getGrupo()==grupo)
		{
			if (pos->getLider()==true)
			{
				return true;
			}
		}
	}
	return false;
}
