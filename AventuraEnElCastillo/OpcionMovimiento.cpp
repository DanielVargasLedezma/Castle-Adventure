#include "OpcionMovimiento.h"

OpcionMovimiento::OpcionMovimiento(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionMovimiento::textoOpcion(OpcionesMenu opcion)
{
	std::stringstream x;
	switch (opcion)
	{
	case Opcion::OpcionesMenu::Arriba:
		x << "1- Ir al cuarto de arriba\n";
		break;
	case Opcion::OpcionesMenu::Abajo:
		x << "2- Ir al cuarto de abajo\n";
		break;
	case Opcion::OpcionesMenu::Derecha:
		x << "3- Ir al cuarto de la derecha\n";
		break;
	case Opcion::OpcionesMenu::Izquiera:
		x << "4- Ir al cuarto de la izquierda\n";
		break;
	}
	return x.str();
}

std::string OpcionMovimiento::textoSalida(OpcionesMenu opcion)
{
	std::stringstream x;
	switch (opcion)
	{
	case Opcion::OpcionesMenu::Arriba:
		x << "Te  has movido al cuarto de arriba\n";
		break;
	case Opcion::OpcionesMenu::Abajo:
		x << "Te has movido al cuarto de abajo\n";
		break;
	case Opcion::OpcionesMenu::Derecha:
		x << "Te has movido al cuarto de la derecha\n";
		break;
	case Opcion::OpcionesMenu::Izquiera:
		x << "Te has movido al cuarto de la izquierda\n";
		break;
	}
	return x.str();
}

bool OpcionMovimiento::evaluar(Jugador* j, OpcionesMenu opcion)
{
	switch (opcion)
	{
	case Opcion::OpcionesMenu::Arriba:
		if (j->getCuartoActual()->hayArriba()) {
			return true;
		}
		else {
			return false;
		}
		break;
	case Opcion::OpcionesMenu::Abajo:
		if (j->getCuartoActual()->hayAbajo()) {
			return true;
		}
		else {
			return false;
		}
		break;
	case Opcion::OpcionesMenu::Derecha:
		if (j->getCuartoActual()->hayDerecha()) {
			return true;
		}
		else {
			return false;
		}
		break;
	case Opcion::OpcionesMenu::Izquiera:
		if (j->getCuartoActual()->hayIzquierda()) {
			return true;
		}
		else {
			return false;
		}
		break;
	}
}
