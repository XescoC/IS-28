//alumno.h
//Código fuente que almacena la clase "Alumno".

#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

class Alumno {
private:
	string DNI_;
	string nombre_;
	string apellidos_;
	string email_;
	string direccion_;
	int curso_;
	string fecha_;
	int grupo_;
	bool lider_;
public:
	void setDNI(string dni){ DNI_ = dni; }
	string getDNI(){ return DNI_; }
	void setNombre(string nombre){ nombre_ = nombre; }
	string getNombre(){ return nombre_; }
	void setApellidos(string apellidos){ apellidos_ = apellidos; }
	string getApellidos(){ return apellidos_; }
	void setEmail(string email){ email_ = email; }
	string getEmail(){ return email_; }
	void setDireccion(string direccion){ direccion_ = direccion; }
	string getDireccion(){ return direccion_; }
	void setCurso(int curso){ curso_ = curso; }
	int getCurso(){ return curso_; }
	void setFecha(string fecha){ fecha_ = fecha; }
	string getFecha(){ return fecha_; }
	void setGrupo(int grupo){ grupo_ = grupo; }
	int getGrupo(){ return grupo_; }
	void set(bool lider){ lider_ = lider; }
	bool get(){ return lider_; }
};
#endif