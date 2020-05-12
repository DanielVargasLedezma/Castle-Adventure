#include "Enemigo.h"

Enemigo::Enemigo(string nombre)
{
	this->nombre = nombre;
	this->estado = false;
}

void Enemigo::matar()
{
	estado=true;
}

bool Enemigo::getEstado()
{
	return estado;
}

string Enemigo::getNombre(){
	return nombre;
}

Enemigo::~Enemigo()
{
}
