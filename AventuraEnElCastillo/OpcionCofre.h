#ifndef OPCIONCOFRE_H
#define OPCIONCOFRE_H
#include "Opcion.h"
#include "Cofre.h"
#include <sstream>

class OpcionCofre : public Opcion
{
public:
	OpcionCofre(OpcionesMenu opcion);
	std::string textoOpcion();
	std::string textoSalida(Cofre* c);
	bool evaluar(Jugador& j);
};
#endif
