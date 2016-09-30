#pragma once
#include <iostream>
using namespace std;

class Nodo
{
private:
	Nodo* _siguiente;
	char* _nombre;
public:
	Nodo* getSiguiente() { return _siguiente; }
	void setSiguiente(Nodo* nodo) { _siguiente = nodo; }
	char* getNombre() { return _nombre; }
	Nodo(char* nombre);
	virtual ~Nodo();
};

Nodo::Nodo(char* nombre) : _siguiente(NULL), _nombre(nombre)
{


}

Nodo::~Nodo()
{

}
