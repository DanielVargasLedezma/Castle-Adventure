#ifndef OPCIONCOFRE_H
#define OPCIONCOFRE_H
#include "Opcion.h"
#include "Cofre.h"

class OpcionCofre : public Opcion
{
public:
	OpcionCofre();
	OpcionCofre(OpcionesMenu opcion);
	std::string textoOpcion(Jugador* j);
	std::string textoSalida(Cofre* c);
	bool evaluar(Jugador* j);
};
#endif
