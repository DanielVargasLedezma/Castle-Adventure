#ifndef OPCIONMOVIMIENTO_H
#define OPCIONMOVIMIENTO_H
#include "Opcion.h"

class OpcionMovimiento : public Opcion
{
public:
	OpcionMovimiento(OpcionesMenu opcion);
	std::string textoOpcion(OpcionesMenu opcion);
	std::string textoSalida(OpcionesMenu opcion);
	bool evaluar(Jugador& j, OpcionesMenu opcion);
};
#endif // !OPCIONMOVIMIENTO_H
