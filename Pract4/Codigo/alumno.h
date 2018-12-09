//alumno.h
//Código fuente que almacena la clase "Alumno".

#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

class Alumno {
private:
	string DNI_;
	string nombre_;
	string apellido1_;
	string apellido2_;
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
	void setApellido1(string apellido1){ apellido1_ = apellido1; }
	string getApellido1(){ return apellido1_; }
	void setApellido2(string apellido2){ apellido2_ = apellido2; }
	string getApellido2(){ return apellido2_; }
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
	void setLider(bool lider){ lider_ = lider; }
	bool getLider(){ return lider_; }
};
#endif
