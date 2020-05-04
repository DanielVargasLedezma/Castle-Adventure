#ifndef OPCIONSALIR_H
#define OPCIONSALIR_H
#include "Opcion.h"
class OpcionSalir : public Opcion
{
public:
	const bool getOpcionSalir();
	virtual bool EvaluarOpcion(const std::string&, Jugador&);
private:
	bool salir;
};
#endif
