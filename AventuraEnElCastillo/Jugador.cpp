#include "Jugador.h"

Jugador::Jugador()
{
	nombre = "";
	//cuartoActual=new Cuarto;

}

void Jugador::setNombreJugador(string nombre)
{
	this->nombre = nombre;
}

const std::string Jugador::getNombre()
{
	return nombre;
}	

void Jugador::agregarItem(Item* i)
{
	items.push_back(i);
}

bool Jugador::estadoArmado()
{

	for (std::vector<const Item*>::size_type i = 0; i < items.size(); i++) {
		if (!items[i]) {
			return false;
		}
		else if (items[i]->getNombre().compare("Daga") || items[i]->getNombre().compare("Lanza")) {
			return true;
		}
	}
	return false;
}
