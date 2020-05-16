#include "OpcionCofre.h"

OpcionCofre::OpcionCofre()
{
}

OpcionCofre::OpcionCofre(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionCofre::textoOpcion(Jugador* j)
{
	stringstream x;
	x << " | [6] ====== Abrir cofre ======================= |\n";
	
	return x.str();
}

std::string OpcionCofre::textoSalida(Cofre *c, Jugador* j)
{
	stringstream x;
	x << " | Has abierto el cofre.                                      " << endl;
	x << " | Has obtenido el objeto: " << c->Abrir()->getNombre() << "! "<< endl;
	j->agregarItem(c->Abrir());
	c->cambiarEstado();
	return x.str();
}

bool OpcionCofre::evaluar(Jugador* j)
{
	if (j->getCuartoActual()->hayCofre() && !j->getCuartoActual()->getCofre()->EstaAbierto()) {
		if (j->getCuartoActual()->hayEnemigo() && !j->getCuartoActual()->getEnemigo()->getEstado()) {
			return false;
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}
