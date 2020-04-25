#include "Cofre.h"

Cofre::Cofre(Item* Elemento)
{
	this->Elemento = Elemento;
}

bool Cofre::EstaAbierto()
{
	return abierto;
}

const Item* Cofre::Abrir()
{
	return Elemento;
}
