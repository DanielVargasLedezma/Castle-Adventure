#ifndef OPCIONATACAR_H
#define OPCIONATACAR_H
#include "Opcion.h"
#include "Enemigo.h"

class OpcionAtacar : public Opcion
{
public:
	OpcionAtacar(OpcionesMenu opcion);

	std::string textoOpcion(Enemigo* e);
	std::string textoSalida(Enemigo *e, Jugador* j);
	bool evaluar(Jugador* j);
};
#endif // !1
