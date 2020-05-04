#include "OpcionAbrirCofre.h"

OpcionAbrirCofre::OpcionAbrirCofre(Cofre* c, const std::string& x)
{
	cofre = c;
	textoSalida = x;
}

bool OpcionAbrirCofre::EvaluarOpcion(Jugador& j)
{
	if (j.getCuartoActual()->getCofre()) {
		return true;
	}
	else {
		return false;
	}
}
