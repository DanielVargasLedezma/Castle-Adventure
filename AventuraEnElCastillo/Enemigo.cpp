#include "Enemigo.h"

Enemigo::Enemigo(string nombre)
{
	this->nombre = nombre;
}
string Enemigo::getNombre(){
	return nombre;
}

Enemigo::~Enemigo()
{
}
