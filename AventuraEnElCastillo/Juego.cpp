#include "Juego.h"

Juego::Juego()
{
	c = nullptr;
	j = nullptr;
}

void Juego::menu()
{
	j = new Jugador;
	string x;
	iniciarCuartos();
	cout << "Ingrese el nombre de su personaje \n";
	cin >> x;
	j->setNombreJugador(x);
	j->setCuartoActual(c);
	cout << "Has aparecido" << endl;
	cout << "Generando mundo" << endl;
	cout << "Cargando...";
	Sleep(1000);
	while (j->estaVivo()) {
		system("cls");
		opciones(j);
	}
	
	
	delete j;
}

void Juego::iniciarCuartos()
{
	Cuarto::CA x = Cuarto::CA::arriba;
	Cuarto::CA d = Cuarto::CA::derecha;
	Cuarto::CA y = Cuarto::CA::izquierda;
	Cuarto::CA z = Cuarto::CA::abajo;

	//Se crea el primer cuarto con el item Daga
	c = new Cuarto(1);
	Item* i = new Daga;
	Cofre* cofre = new Cofre(i);
	c->setCofre(cofre);

	//Se crea el segundo cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto* c2 = new Cuarto(2, c, z);
	c->insertarCuarto(c2, 1, x);

	//Se crea el tercer cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto* c3 = new Cuarto(3, c2, y);
	Item* i2 = new Diamante;
	Cofre* cofre2 = new Cofre(i2);
	c3->setCofre(cofre2);
	c->insertarCuarto(c3, 2, d);

	//Se crea el cuarto cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	
	Cuarto* c4 = new Cuarto(4, c2, d);
	Enemigo* e1 = new Enemigo("Ghoul");
	Item* i3 = new Lanza;
	Cofre* cofre3 = new Cofre(i3);
	c4->setCofre(cofre3);
	c4->setEnemigo(e1);
	c->insertarCuarto(c4, 2, y);

	//Se crea el quinto cuarto, se le setea el cuarto anterior y se setea al primer cuarto
	Cuarto* c5 = new Cuarto(5, c2, z);
	Enemigo* e2 = new Enemigo("Vampiro");
	c5->setEnemigo(e2);
	c->insertarCuarto(c5, 2, x);
}

void Juego::opciones(Jugador *j)
{
	int op = 0;
	std::vector<int> vec;
	bool verificar = false;
	OpcionAtacar *oa = nullptr;
	OpcionMovimiento *om = nullptr;
	OpcionSalir* os = nullptr;
	OpcionCofre* oc = nullptr;
	Opcion::OpcionesMenu a = Opcion::OpcionesMenu::Arriba;
	Opcion::OpcionesMenu b = Opcion::OpcionesMenu::Abajo;
	Opcion::OpcionesMenu c = Opcion::OpcionesMenu::Derecha;
	Opcion::OpcionesMenu d = Opcion::OpcionesMenu::Izquiera;
	Opcion::OpcionesMenu e = Opcion::OpcionesMenu::cuartoAnterior;
	
	if (om->evaluar(j, a)) {
		cout << om->textoOpcion(a);
		vec.push_back(1);
	}
	if (om->evaluar(j, b)) {
		cout << om->textoOpcion(b);
		vec.push_back(2);
	}
	if (om->evaluar(j, c)) {
		cout << om->textoOpcion(c);
		vec.push_back(3);
	}
	if (om->evaluar(j, d)) {
		cout << om->textoOpcion(d);
		vec.push_back(4);
	}
	if (oa->evaluar(j)) {
		cout << oa->textoOpcion(j->getCuartoActual()->getEnemigo());
		vec.push_back(5);
	}
	if (oc->evaluar(j)) {
		cout << oc->textoOpcion(j);
		vec.push_back(6);
	}
	if (om->evaluar(j, e)) {
		cout << om->textoOpcion(e);
		vec.push_back(7);
	}
	cout << os->textoOpcion(j);
	vec.push_back(8);
	P:
	cin >> op;
	if (cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << "Se digito una opcion invalida, favor digite algo valido" << endl << endl;
		goto P;
	}
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == op) {
			verificar = true;
		}
	}
	if (!verificar) {
		cout << "Se digito una opcion no valida, favor digitar una opcion disponible" << endl << endl;
		goto P;
	}
}
