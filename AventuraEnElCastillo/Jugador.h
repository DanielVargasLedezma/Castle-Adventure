#ifndef JUGADOR_H
#define JUGADOR_H
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>
#include "Cuarto.h"

class Jugador
{
private:
	std::string nombre;
	Cuarto* cuartoActual;
	std::vector<Item*> items;
public:
	Jugador();
	void setNombreJugador(string nombre);
	void setCuartoActual(Cuarto* cuarto);
	const std::string getNombre();
	Cuarto* getCuartoActual();
	void agregarItem(Item* i);
	bool estadoArmado();
	bool tieneDaga();
	bool tieneLanza();
};
#endif // !JUGADOR_H
