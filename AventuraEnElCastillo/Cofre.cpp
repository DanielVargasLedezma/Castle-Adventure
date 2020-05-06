#include "Cofre.h"

Cofre::Cofre(Item* Elemento)
{
	this->Elemento = Elemento;
}

Cofre::Cofre(const Cofre& c)
{
	Elemento = c.Elemento;
	abierto = abierto;
}

bool Cofre::EstaAbierto()
{
	return abierto;
}

Item* Cofre::Abrir()
{
	return Elemento;
}
