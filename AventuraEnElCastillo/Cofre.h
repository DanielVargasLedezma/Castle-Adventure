#ifndef COFRE_H
#define COFRE_H
#include "Item.h"
#include <iostream>
using namespace std;
class Cofre
{
public:
	Cofre(Item*);
	Cofre(const Cofre& c);
	bool EstaAbierto();
	Item* Abrir();
	void cambiarEstado();
	~Cofre();
private:
	Item* Elemento;
	bool abierto;
};
#endif
