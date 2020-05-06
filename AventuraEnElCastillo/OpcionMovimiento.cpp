#include "OpcionMovimiento.h"

OpcionMovimiento::OpcionMovimiento(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionMovimiento::textoOpcion()
{
	switch (opcion)
	{
	case Opcion::OpcionesMenu::Arriba:
		break;
	case Opcion::OpcionesMenu::Abajo:
		break;
	case Opcion::OpcionesMenu::Derecha:
		break;
	case Opcion::OpcionesMenu::Izquiera:
		break;
	}
	return std::string();
}

std::string OpcionMovimiento::textoSalida(Jugador& j)
{
	return std::string();
}

bool OpcionMovimiento::evaluar(Jugador& j)
{
	return false;
}
