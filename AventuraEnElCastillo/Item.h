#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item
{
public:
	Item();
	Item(const string nombre);
	void setNombre(const string);
	const string getNombre();
private:
	string nombre;
};
#endif
