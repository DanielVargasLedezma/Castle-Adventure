#ifndef CUARTO_H
#define CUARTO_H
#include <iostream>
#include <string>
#include "Cofre.h"
#include "Enemigo.h"

class Cuarto
{
public:
	enum class CA {
		arriba = 1, abajo, derecha, izquierda 
	};
private:
	Cuarto* Arriba;
	Cuarto* Abajo;
	Cuarto* Derecha;
	Cuarto* Izquierda;
	Cuarto* cuartoA;
	int numCuarto;
	Cofre* c;
	Enemigo* e;
public:
	Cuarto();
	Cuarto(int n);
	Cuarto(const Cuarto& c);
	Cuarto(int n, Cuarto* c);

	void insertarCuarto(Cuarto* cuarto, int num, CA z);

	void setArriba(Cuarto* cuarto);
	void setAbajo(Cuarto* cuarto);
	void setIzquierda(Cuarto* cuarto);
	void setDerecha(Cuarto* cuarto);
	void setCuartoAnterior(Cuarto* cuarto);

	bool hayArriba();
	bool hayAbajo();
	bool hayIzquierda();
	bool hayDerecha();
	bool hayCofre();
	bool hayEnemigo();
	bool hayCuartoA();

	Cuarto* getCuarto(int num, CA z);

	~Cuarto();
};
#endif // !CUARTO_H
