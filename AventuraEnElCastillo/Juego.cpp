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
	cout << endl;
	cout << " | Ingrese el nombre de su personaje |\n";
	cout << " -> ";
	cin >> x;
	j->setNombreJugador(x);
	j->setCuartoActual(c);
	cout << endl;
	cout << " +=================================================+" << endl;
	cout << " | Has aparecido!                                  |"  << endl;
	cout << " |                                                 |" << endl;
	cout << " | Generando mundo...                              |" << endl;
	cout << " |                                                 |" << endl;
	cout << " | Cargando...                                     |" << endl;
	cout << " |                                                 |" << endl;
	cout << " +=================================================+" << endl << endl;
	Sleep(5000);

	system("pause");
	system("cls");
	cout << historia();
	system("pause");
	system("cls");
	while (j->estaVivo()) {
		system("cls");
		opciones(j);
	}

	PlaySound(TEXT("2.wav"), NULL, SND_ASYNC);
	system("pause");
	delete j;
	eliminarCuartos();
	delete c;
}

string Juego::historia()
{
	stringstream x;
	x << endl;
	x << " +============================================================================================+" << endl;
	x << " |  En un castillo inhospito y deshabitado se rumoreaba que yacian los diamantes del cielo,   |" << endl;
	x << " | el objeto mas poderoso de la tierra, se dice que estos diamantes estan resguardados por    |" << endl;
	x << " | Ghouls y Vampiros, el que posea estos diamantes tendra control de las dimensiones del      |" << endl;
	x << " | universo. Muchos aventureros han intentado recuperarlos pero no han regresado para         |" << endl;
	x << " | contarlo.                                                                                  |" << endl;
	x << " |                                                                                            |" << endl;
	x << " |  Nuestro personaje es un aventurero del mundo de Crysalys, su pasion es visitar            |" << endl;
	x << " | lugares lejanos y recolectar los mas raros tesoros. En uno de sus viajes                   |" << endl;
	x << " | encuentra el aislado castillo donde sabe que estan escondidos los diamantes del cielo.     |" << endl;
	x << " |                                                                                            |" << endl;
	x << " |  No son muchos los que tienen el valor de adentrarse en el castillo                        |" << endl;
	x << " | pero este personaje es valiente y logra encontrar una entrada.                             |" << endl;
    x << " | Una vez dentro del castillo, el personaje cae en una trampa                                |"<<endl; 
	x << " | que lo lleva al lugar mas profundo y oscuro, conformado por                                |" << endl;
	x << " | una serie de cuartos algunos de ellos conectados entre si.                                 |" << endl;
	x << " +============================================================================================+" << endl;
	x << "                                        ~Created by Daniel Vargas Ledezma & Joshua Viera Sandi " << endl << endl;

	return x.str();
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

void Juego::eliminarCuartos()
{
	Cuarto::CA a = Cuarto::CA::arriba;
	Cuarto::CA b = Cuarto::CA::abajo;
	Cuarto::CA cc = Cuarto::CA::izquierda;
	Cuarto::CA d = Cuarto::CA::derecha;
	Cuarto* temp = this->c->getCuarto(a);
	/////////////////////////////
	Cuarto* temp2 = nullptr;
	temp2 = temp->getCuarto(a);
	delete temp2;
	/////////////////////////////
	Cuarto* temp3 = nullptr;
	temp3 = temp->getCuarto(cc);
	delete temp3;
	////////////////////////////
	Cuarto* temp4 = nullptr;
	temp4 = temp->getCuarto(d);
	delete temp4;
}

void Juego::opciones(Jugador *j)
{
	stringstream x;
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
		x << om->textoOpcion(a);
		vec.push_back(1);
	}
	if (om->evaluar(j, b)) {
		x << om->textoOpcion(b);
		vec.push_back(2);
	}
	if (om->evaluar(j, c)) {
		x << om->textoOpcion(c);
		vec.push_back(3);
	}
	if (om->evaluar(j, d)) {
		x << om->textoOpcion(d);
		vec.push_back(4);
	}
	if (oa->evaluar(j)) {
		x << oa->textoOpcion(j->getCuartoActual()->getEnemigo());
		vec.push_back(5);
	}
	if (oc->evaluar(j)) {
		x << oc->textoOpcion(j);
		vec.push_back(6);
	}
	if (om->evaluar(j, e)) {
		x << om->textoOpcion(e);
		vec.push_back(7);
	}
	x << os->textoOpcion(j);
	vec.push_back(8);
P:
	cout << endl;
	cout << j->Inventario();
	cout << "| " << j->getNombre() << " esta en el cuarto numero " << j->getCuartoActual()->getNumero() << " |" << endl <<endl;
	cout << "\n Usted tiene las siguientes acciones disponibles: \n\n";
	cout << x.str();
	cout << "\n Su opcion -> ";
	cin >> op;
	cout<<endl;
	if (cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << " Se digito una opcion invalida, favor digite algo valido" << endl;
		system("pause");
		system("cls");
		goto P;
	}
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == op) {
			verificar = true;
		}
	}
	if (!verificar) {
		cout << " Se digito una opcion no valida, favor digitar una opcion disponible" << endl;
		system("pause");
		system("cls");
		goto P;
	}

	switch (op)
	{
	case 1: {
		cout << om->textoSalida(a);
		Cuarto::CA i = Cuarto::CA::arriba;
		j->setCuartoActual(j->getCuartoActual()->getCuarto(i));
		cout << endl;
		system("pause");
		break;
	}
	case 2: {
		cout << om->textoSalida(b);
		Cuarto::CA i = Cuarto::CA::abajo;
		j->setCuartoActual(j->getCuartoActual()->getCuarto(i));
		cout << endl;
		system("pause");
		break;
	}
	case 3: {
		cout << om->textoSalida(c);
		Cuarto::CA i = Cuarto::CA::derecha;
		j->setCuartoActual(j->getCuartoActual()->getCuarto(i));
		cout << endl;
		system("pause");
		break;
	}
	case 4: {
		cout << om->textoSalida(d);
		Cuarto::CA i = Cuarto::CA::izquierda;
		j->setCuartoActual(j->getCuartoActual()->getCuarto(i));
		cout << endl;
		system("pause");
		break;
	}
	case 5:
		cout << oa->textoSalida(j->getCuartoActual()->getEnemigo(), j);
		if (!j->estaVivo()) {
			PlaySound(TEXT("1.wav"), NULL, SND_ASYNC);
		}
		cout << endl;
		system("pause");
		break;
	case 6:
		cout << oc->textoSalida(j->getCuartoActual()->getCofre(), j);
		cout << endl;
		system("pause");
		break;
	case 7:
		cout << om->textoSalida(e);
		j->setCuartoActual(j->getCuartoActual()->getCuartoA());
		cout << endl;
		system("pause");
		break;
	case 8:
		cout << os->textoSalida(j) <<endl;
		cout << endl;
		break;
	}
}
