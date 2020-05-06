#include "OpcionAtacar.h"

OpcionAtacar::OpcionAtacar(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionAtacar::textoOpcion(Enemigo* e)
{
	std::stringstream x;
	x << "5- Atacar al"<<e->getNombre() << endl;
	return x.str();
}

std::string OpcionAtacar::textoSalida(Enemigo* e, Jugador& j)
{
	std::stringstream x;
	x << "Haz atacado al " << e->getNombre() << endl;
	if (j.estadoArmado()) {
		x << "El " << e->getNombre() << " ha muerto" << endl;
	}else{
		x << "No tienes ningun arma" << endl;
		x << "F, has muerto" << endl;
	}
	return x.str();
}

bool OpcionAtacar::evaluar(Jugador& j)
{
	if(j.getCuartoActual()->hayEnemigo()){
		return true;
	}
	else{

		return false;
	}
}
