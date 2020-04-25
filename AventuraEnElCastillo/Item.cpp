#include "Item.h"

Item::Item()
{
}

Item::Item(const string nombre)
{
	this->nombre = nombre;
}

void Item::setNombre(const string nombre)
{
	this->nombre = nombre;
}

const string Item::getNombre()
{
	return nombre;
}
