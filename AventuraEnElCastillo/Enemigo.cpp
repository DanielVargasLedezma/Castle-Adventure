#include "Enemigo.h"

Enemigo::Enemigo(string nombre, string tipo)
{
	this->nombre = nombre;
	this->tipo = tipo;
}
string Enemigo::getNombre(){
	return nombre;
}
