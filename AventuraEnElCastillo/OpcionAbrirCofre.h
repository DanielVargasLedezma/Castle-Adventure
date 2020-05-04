#ifndef OPCIONABRIRCOFRE_H
#define OPCIONABRIRCOFRE_H
#include "Opcion.h"
#include "Cofre.h"
#include "Jugador.h"
class OpcionAbrirCofre : public Opcion
{
public:
	OpcionAbrirCofre(Cofre*, const std::string&);
	virtual bool EvaluarOpcion(Jugador&);
private:
	Cofre *cofre;
};
#endif
