#ifndef OPCION_H
#define OPCION_H
#include <iostream>
#include <string>
#include "Jugador.h"
#include "Cuarto.h"

class Opcion;
class Jugador;

class Opcion
{
public:
	enum class OpcionesMenu {
		Arriba=1, Abajo, Derecha, Izquierda, AbrirCofre, Atacar, Salir
	};
protected:
	std::string textoOpcion;
	std::string textoSalida;
	OpcionesMenu opcionSeleccionada;
public:
	Opcion();
	Opcion(OpcionesMenu opc, const std::string x);

	void setTextoSalida(const std::string& x);
	const std::string& getTextoSalida();
	OpcionesMenu getOpcionSeleccionada();

	virtual bool EvaluarOpcion(const std::string& x, Jugador& j) = 0;
};
#endif // !OPCION_H
