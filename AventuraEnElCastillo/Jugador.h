#ifndef JUGADOR_H
#define JUGADOR_H
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>

class Jugador
{
private:
	std::string nombre;
	//const Cuarto* cuartoActual;
	std::vector<Item*> items;
public:
	Jugador();
	void setNombreJugador(string nombre);
	//void setCuartoActual(const Cuarto* cuarto);
	const std::string getNombre();
	//const Cuarto* getCuartoActual();
	void agregarItem(Item* i);
	bool estadoArmado();
};
#endif // !JUGADOR_H
