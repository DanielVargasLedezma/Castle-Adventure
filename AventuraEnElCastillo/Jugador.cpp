#include "Jugador.h"

Jugador::Jugador()
{
	nombre = "";
	cuartoActual = nullptr;
	vivo = true;
	bajas = 0;
}

void Jugador::setNombreJugador(string nombre)
{
	this->nombre = nombre;
}

void Jugador::setCuartoActual(Cuarto* cuarto)
{
	cuartoActual = cuarto;
}

void Jugador::setBajas()
{
	bajas++;
}

int Jugador::getBajas()
{
	return bajas;
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

string Jugador::Inventario()
{
	std::stringstream x;
	x << "| Inventario de " << nombre << "         |" << endl;
	for (std::vector<const Item*>::size_type i = 0; i < items.size(); i++) {
		if (!items[i]) {
			x << "No tienes items" << endl;
			return x.str();
		}
		else {
			x << " | " << items[i]->getNombre() << " | ";
		}
	}
	stringstream y;
	y << "| Inventario de " << nombre << "         |" << endl;
	if (x.str() == y.str()) {
		x << "\n No tienes items" << endl;
	}
	x << endl;
	x << "| Numero de bajas de " << getNombre() << ": " << getBajas() << " |" << endl;
	x << endl;
	return x.str();
}
