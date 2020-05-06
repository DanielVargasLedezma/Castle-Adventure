#ifndef OPCION_H
#define OPCION_H
#include <iostream>
#include <string>
#include "Jugador.h"

class Opcion
{
public:
	enum class OpcionesMenu {
		Arriba = 1, Abajo, Derecha, Izquiera, Atacar, Cofre, Salir
	};
protected:
	OpcionesMenu opcion;
public:
	Opcion();
	Opcion(OpcionesMenu opcion);

	virtual std::string textoOpcion() = 0;
	virtual std::string textoSalida() = 0;
	virtual bool evaluar(Jugador& j) = 0;
};
#endif
