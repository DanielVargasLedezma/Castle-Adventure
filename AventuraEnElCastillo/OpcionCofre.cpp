#include "OpcionCofre.h"

OpcionCofre::OpcionCofre(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionCofre::textoOpcion()
{
	stringstream x;
	x << "6- Abrir cofre" << endl;
	return x.str();
}

std::string OpcionCofre::textoSalida(Cofre *c)
{
	stringstream x;
	x << "Haz abierto el cofre." << endl;
	x << "Haz obtenido el objeto: " << c->Abrir()->getNombre() << "!"<< endl;

	return x.str();
}

bool OpcionCofre::evaluar(Jugador& j)
{
	if (j.getCuartoActual()->hayCofre()) {
		return true;
	}
	else {
		return false;
	}
}
