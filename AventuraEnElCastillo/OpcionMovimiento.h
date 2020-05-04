#ifndef OPCIONMOVIMIENTO_H
#define OPCIONMOVIMIENTO_H
#include "Opcion.h"

class OpcionMovimiento : public Opcion
{
public:
	OpcionMovimiento(Cuarto::CuartosAdyacentes c, OpcionesMenu opc, const std::string& x);
	virtual bool EvaluarOpcion(const Cuarto::CuartosAdyacentes& c, Jugador& j);
};
#endif // !OPCIONMOVIMIENTO_H
