#include "Jugador.h"

Jugador::Jugador()
{
	nombre = "";
	cuartoActual=nullptr;
	vivo = true;
}

void Jugador::setNombreJugador(string nombre)
{
	this->nombre = nombre;
}

void Jugador::setCuartoActual(Cuarto* cuarto)
{
	cuartoActual = cuarto;
}

const std::string Jugador::getNombre()
{
	return nombre;
}
Cuarto* Jugador::getCuartoActual()
{
	return cuartoActual;
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
		else if (items[i]->getNombre().compare("Daga") == 0 || items[i]->getNombre().compare("Lanza") == 0) {
			return true;
		}
	}
	return false;
}

bool Jugador::tieneDaga()
{
	for (std::vector<const Item*>::size_type i = 0; i < items.size(); i++) {
		if (!items[i]) {
			return false;
		}
		else if (items[i]->getNombre().compare("Daga") == 0) {
			return true;
		}
	}
	return false;
}

bool Jugador::tieneLanza()
{
	for (std::vector<const Item*>::size_type i = 0; i < items.size(); i++) {
		if (!items[i]) {
			return false;
		}
		else if (items[i]->getNombre().compare("Lanza") == 0) {
			return true;
		}
	}
	return false;
}

bool Jugador::estaVivo()
{
	return vivo;
}

void Jugador::matar()
{
	vivo = false;
}
