#pragma once
#include <iostream>
using namespace std;
class Persona
{
protected:
	string nombres, apellidos, direccion, email, fecha_nacimiento;
	int telefono, genero;
protected:
	Persona(){}
	Persona(string _nombres, string _apellidos, string _direccion,int _telefono, int _genero, string _email, string _fecha_nacimiento) {
		nombres = _nombres;
		apellidos = _apellidos;
		direccion = _direccion;
		email = _email;
		fecha_nacimiento = _fecha_nacimiento;
		telefono = _telefono;
		genero = _genero;
	}
};

