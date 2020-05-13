#include "OpcionAtacar.h"

OpcionAtacar::OpcionAtacar(OpcionesMenu opcion)
{
	this->opcion = opcion;
}

std::string OpcionAtacar::textoOpcion(Enemigo* e)
{
	std::stringstream x;
	x << "| [5] ====== Atacar al " << e->getNombre() << "= |\n";
	return x.str();
}

std::string OpcionAtacar::textoSalida(Enemigo* e, Jugador* j)
{
	std::stringstream x;
	x <<j->getNombre() <<" ha atacado al " << e->getNombre() << endl;
	if (j->estadoArmado()) {
		if(e->getNombre()=="Vampiro"){
			if (j->tieneLanza()) {
				x << "El " << e->getNombre() << " ha muerto" << endl;
				e->matar();
				j->setBajas();
			}else{
				x << "Tu arma no tiene ningun efecto contra este enemigo" << endl;
				x << "F, " << j->getNombre() << " ha muerto" << endl;
				j->matar();
			}
		}
		else if(e->getNombre()=="Ghoul"){
			if (j->tieneDaga()) {
				x << "El " << e->getNombre() << " ha muerto" << endl;
				e->matar();
				j->setBajas();
			}else{
				x << "Tu arma no tiene ningun efecto contra este enemigo" << endl;
				x << "F, " << j->getNombre() << " ha muerto" << endl;
				j->matar();
			}
		}
	}else{
		x << j->getNombre() << " no tiene ningun arma" << endl;
		x << "F, " << j->getNombre() << " ha muerto" << endl;
		j->matar();
	}
	return x.str();
}

bool OpcionAtacar::evaluar(Jugador* j)
{
	if(j->getCuartoActual()->hayEnemigo() && !j->getCuartoActual()->getEnemigo()->getEstado()){
		return true;
	}
	else{

		return false;
	}
}
