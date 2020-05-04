#include "Opcion.h"

Opcion::Opcion()
{
}

Opcion::Opcion(OpcionesMenu opc, const std::string x)
{
	opcionSeleccionada = opc;
	textoSalida = x;
}

void Opcion::setTextoSalida(const std::string& x)
{
	textoSalida = x;
}

const std::string& Opcion::getTextoSalida()
{
	return textoSalida;
}

Opcion::OpcionesMenu Opcion::getOpcionSeleccionada()
{
	return opcionSeleccionada;
}
