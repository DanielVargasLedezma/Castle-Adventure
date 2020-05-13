#ifndef JUGADOR_H
#define JUGADOR_H
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>
#include "Cuarto.h"
#include <sstream>

class Jugador
{
private:
	std::string nombre;
	Cuarto* cuartoActual;
	std::vector<Item*> items;
	bool vivo;
	int bajas;
public:
	Jugador();
	void setNombreJugador(string nombre);
	void setCuartoActual(Cuarto* cuarto);
	void setBajas();
	int getBajas();
	const std::string getNombre();
	Cuarto* getCuartoActual();
	void agregarItem(Item* i);
	bool estadoArmado();
	bool tieneDaga();
	bool tieneLanza();
	bool estaVivo();
	void matar();
	string Inventario();
};
#endif // !JUGADOR_H
