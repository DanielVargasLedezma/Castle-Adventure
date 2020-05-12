#include "Cuarto.h"

Cuarto::Cuarto()
{
	Arriba = nullptr;
	Abajo = nullptr;
	Derecha = nullptr;
	Izquierda = nullptr;
	cuartoA = nullptr;
	c = nullptr;
	e = nullptr;
	numCuarto = 0;
}

Cuarto::Cuarto(int n)
{
	Arriba = nullptr;
	Abajo = nullptr;
	Derecha = nullptr;
	Izquierda = nullptr;
	cuartoA = nullptr;
	c = nullptr;
	e = nullptr;
	numCuarto = n;
}

Cuarto::Cuarto(const Cuarto& c)
{
	Arriba = c.Arriba;
	Abajo = c.Abajo;
	Derecha = c.Derecha;
	Izquierda = c.Izquierda;
	cuartoA = c.cuartoA;
	this->c = c.c;
	e = c.e;
	numCuarto = c.numCuarto;
}

Cuarto::Cuarto(int n, Cuarto* c, CA ca)
{
	Arriba = nullptr;
	Abajo = nullptr;
	Derecha = nullptr;
	Izquierda = nullptr;
	cuartoA = c;
	posCuartoA = ca;
	this->c = nullptr;
	e = nullptr;
	numCuarto = n;
}

void Cuarto::insertarCuarto(Cuarto* cuarto, int num, CA z)
{
	switch (num)
	{
	case 1:
		switch (z)
		{
		case Cuarto::CA::arriba:
			Arriba = cuarto;
			break;
		}
		break;
	case 2: {
		Cuarto* temp = Arriba;                                                                                                  
		switch (z)
		{
		case Cuarto::CA::arriba:
			temp->setArriba(cuarto);
			break;
		case Cuarto::CA::derecha:
			temp->setDerecha(cuarto);
			break;
		case Cuarto::CA::izquierda:
			temp->setIzquierda(cuarto);
			break;
		}
		break;
	}
	}
}

void Cuarto::setArriba(Cuarto* cuarto)
{
	Arriba = cuarto;
}

void Cuarto::setAbajo(Cuarto* cuarto)
{
	Abajo = cuarto;
}

void Cuarto::setIzquierda(Cuarto* cuarto)
{
	Izquierda = cuarto;
}

void Cuarto::setDerecha(Cuarto* cuarto)
{
	Derecha = cuarto;
}

void Cuarto::setCuartoAnterior(Cuarto* cuarto)
{
	cuartoA = cuarto;
}

void Cuarto::setCofre(Cofre* c)
{
	this->c = c;
}

void Cuarto::setEnemigo(Enemigo* e)
{
	this->e = e;
}

bool Cuarto::hayArriba()
{
	if (Arriba) {
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayAbajo()
{
	if(Abajo){
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayIzquierda()
{
	if(Izquierda){
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayDerecha()
{
	if (Derecha) {
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayCofre()
{
	if (c) {
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayEnemigo()
{
	if(e){
		return true;
	}
	else {
		return false;
	}
}

bool Cuarto::hayCuartoA()
{
	if(cuartoA){
		return true;
	}
	else {
		return false;
	}
}

Cuarto* Cuarto::getCuarto( CA z)
{
	switch (z)
	{
	case Cuarto::CA::arriba:
		return Arriba;
		break;
	case Cuarto::CA::abajo:
		return Abajo;
		break;
	case Cuarto::CA::derecha:
		return Derecha;
		break;
	case Cuarto::CA::izquierda:
		return Izquierda;
		break;
	default:
		break;
	}
}

Enemigo* Cuarto::getEnemigo()
{
	return e;
}

Cofre* Cuarto::getCofre()
{
	return c;
}

Cuarto* Cuarto::getCuartoA()
{
	return cuartoA;
}

Cuarto::~Cuarto()
{
	while(Arriba || Abajo || Derecha || Izquierda || c || e){
		if (Arriba) {
			//Arriba->~Cuarto();
			delete Arriba;
		}
		else if (Abajo) {
			//Abajo->~Cuarto();
			delete Abajo;
		}
		else if (Derecha) {
			//Derecha->~Cuarto();
			delete Derecha;
		}
		else if (Izquierda) {
			//Izquierda->~Cuarto();
			delete Izquierda;
		}
		else if (c) {
			//c->~Cofre();
			delete c;
		}
		else if (e) {
			delete e;
		}
	}
}
