#ifndef CUARTO_H
#define CUARTO_H
#include "Opcion.h"
#include "Cofre.h"

class Cuarto
{
public:
	enum class CuartosAdyacentes
	{
		Arriba=1, Abajo, Derecha, Izquierda
	};
private:
	Cofre* c;
public:
	Cofre* getCofre();
};
#endif // !CUARTO_H
