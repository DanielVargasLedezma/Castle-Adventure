#ifndef OPCIONMOVIMIENTO_H
#define OPCIONMOVIMIENTO_H
#include "Opcion.h"

class OpcionMovimiento : public Opcion
{
public:
	OpcionMovimiento(OpcionesMenu opcion);
	std::string textoOpcion();
	std::string textoSalida(Jugador& j);
	bool evaluar(Jugador& j);
};
#endif // !OPCIONMOVIMIENTO_H
