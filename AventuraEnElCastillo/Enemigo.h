#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>
using namespace std;

class Enemigo
{
public:
	Enemigo(string nombre);
	string getNombre();
	~Enemigo();
private:
	string nombre;
};
#endif
