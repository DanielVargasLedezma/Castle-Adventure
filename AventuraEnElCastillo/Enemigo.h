#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>
using namespace std;

class Enemigo
{
public:
	Enemigo(string nombre);
	void matar();
	bool getEstado();
	string getNombre();
	~Enemigo();
private:
	string nombre;
	bool estado;
};
#endif
