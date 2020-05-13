#include "OpcionSalir.h"

OpcionSalir::OpcionSalir()
{
}

std::string OpcionSalir::textoOpcion(Jugador* j)
{
	stringstream x;
	x << "| [8] ====== Salir del juego =================== |\n";
	return x.str();
}

std::string OpcionSalir::textoSalida(Jugador* j)
{
	stringstream x;
	x << " !!!" << endl;
	j->matar();
	return x.str();
}
