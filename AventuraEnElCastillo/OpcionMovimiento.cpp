#include "OpcionMovimiento.h"

OpcionMovimiento::OpcionMovimiento(Cuarto::CuartosAdyacentes c, OpcionesMenu opc, const std::string& x)
{
	opcionSeleccionada = opc;
	textoSalida = x;

}

bool OpcionMovimiento::EvaluarOpcion(const Cuarto::CuartosAdyacentes &c, Jugador& j)
{
	switch (c)
	{
	case Cuarto::CuartosAdyacentes::Arriba:
		return true;
		break;
	default:
		return false;
		break;
	}
}
