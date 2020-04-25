#ifndef COFRE_H
#define COFRE_H
#include "Item.h"
#include <iostream>
using namespace std;
class Cofre
{
public:
	Cofre(Item*);
	bool EstaAbierto();
	const Item* Abrir();
private:
	const Item* Elemento;
	bool abierto;

};
#endif
