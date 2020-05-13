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
	x << "| [6] ====== Abrir cofre ======================= |\n";
	
	return x.str();
}

std::string OpcionCofre::textoSalida(Cofre *c, Jugador* j)
{
	stringstream x;
	x << "\n Has abierto el cofre." << endl;
	x << "\n Has obtenido el objeto: " << c->Abrir()->getNombre() << "!"<< endl;
	j->agregarItem(c->Abrir());
	c->cambiarEstado();
	if (c->Abrir()->getNombre() == "Diamante") {
		x << "\n DIAMANTES" << endl;
	}

	return x.str();
}

bool OpcionCofre::evaluar(Jugador* j)
{
	if (j->getCuartoActual()->hayCofre() && !j->getCuartoActual()->getCofre()->EstaAbierto()) {
		return true;
	}
	else {
		return false;
	}
}
