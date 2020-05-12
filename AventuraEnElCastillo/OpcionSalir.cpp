#include "OpcionSalir.h"

OpcionSalir::OpcionSalir()
{
}

std::string OpcionSalir::textoOpcion(Jugador* j)
{
	stringstream x;
	x << "8- Salir del juego" << endl;
	return x.str();
}

std::string OpcionSalir::textoSalida(Jugador* j)
{
	stringstream x;
	x << "Usted ha salido del juego hasta la procsimaaaaaaaa bush wawawawwawawa bushhhhhh" << endl;
	j->matar();
	return x.str();
}
