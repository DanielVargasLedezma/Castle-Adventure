#include "Juego.h"

Juego::Juego()
{
	c = nullptr;
	j = nullptr;
}

void Juego::iniciarCuartos()
{
	//Se crea el primer cuarto con el item Daga
	c = new Cuarto(1);
	Item* i = new Daga;
	Cofre* cofre = new Cofre(i);
	c->setCofre(cofre);

	//Se crea el segundo cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto::CA x = Cuarto::CA::arriba;
	Cuarto* c2 = new Cuarto(2, c);
	c->insertarCuarto(c2, 1, x);

	//Se crea el tercer cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto::CA d = Cuarto::CA::derecha;
	Cuarto* c3 = new Cuarto(3, c2);
	Item* i2 = new Diamante;
	Cofre* cofre2 = new Cofre(i2);
	c3->setCofre(cofre2);
	c->insertarCuarto(c3, 2, d);

	//Se crea el cuarto cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto::CA y = Cuarto::CA::izquierda;
	Cuarto* c4 = new Cuarto(4, c2);
	Enemigo* e1 = new Enemigo("Ghoul");
	Item* i3 = new Lanza;
	Cofre* cofre3 = new Cofre(i3);
	c4->setCofre(cofre3);
	c4->setEnemigo(e1);
	c->insertarCuarto(c4, 2, y);

	//Se crea el quinto cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto* c5 = new Cuarto(5, c2);
	Enemigo* e2 = new Enemigo("Vampiro");
	c5->setEnemigo(e2);
	c->insertarCuarto(c5, 2, x);
}
