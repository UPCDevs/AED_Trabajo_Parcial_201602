#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;


class Lista
{
private:
	Nodo* _primer;
	Nodo* _ultimo;
public:
	Nodo* get(int indice);
	void agregar(Nodo* nodo);
	bool agregar(Nodo* nodo, int indice);
	Lista();
	virtual ~Lista();
	Nodo* getPrimer()  { return _primer; }

}; 


Lista::Lista() : _primer(NULL), _ultimo(NULL)
{


}

void Lista::agregar(Nodo* nodo)
{
	if (_primer == NULL) //Si la lista está vacía
	{
		_primer = nodo;
		_ultimo = nodo;
	}
	else  // Si la lista no está vacía
	{
		_ultimo->setSiguiente(nodo);
		_ultimo = nodo;
	}
}

Nodo* Lista::get(int indice)
{
	int i = 0;
	Nodo* iterador = _primer;

	while (iterador != NULL)
	{
		if (i == indice)
		{
			return iterador;
		}
		else
		{
			iterador = iterador->getSiguiente();
			i++;
		}
	}
	return NULL;
}


// Agregar el posicion
bool Lista::agregar(Nodo* nodo, int indice)
{
	bool exito = true;
	Nodo* referencia = get(indice);
	if (referencia == NULL)
	{
		return false;
	}
	nodo->setSiguiente(referencia->getSiguiente());
	referencia->setSiguiente(nodo);
	return exito;
}

Lista::~Lista()
{

}