#include "OpcionSalir.h"

const bool OpcionSalir::getOpcionSalir()
{
	return salir;
}

bool OpcionSalir::EvaluarOpcion(const std::string&, Jugador&)
{
	return false;
}
