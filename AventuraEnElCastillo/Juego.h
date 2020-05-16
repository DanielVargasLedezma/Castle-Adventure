#ifndef JUEGO_H	
#define JUEGO_H
#include "Cuarto.h"
#include "OpcionCofre.h"
#include "OpcionAtacar.h"
#include "OpcionMovimiento.h"
#include "OpcionSalir.h"
#include "Daga.h"
#include "Diamante.h"
#include "Lanza.h"
#include "Oro.h"
#include "Windows.h"
#include "mmsystem.h"

class Juego
{
private:
	Cuarto* c;
	Jugador* j;
public:
	Juego();
	void menu();
	string historia();
	void iniciarCuartos();
	void eliminarCuartos();
	void opciones(Jugador* j);
};
#endif
