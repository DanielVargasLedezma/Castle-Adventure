#ifndef OPCIONSALIR_H
#define OPCIONSALIR_H
#include "Opcion.h"
class OpcionSalir : public Opcion
{
public:
	OpcionSalir();

	std::string textoOpcion();
	std::string textoSalida();
};
#endif
