#pragma once
#include <iostream>
using namespace std;

struct Nodo
{
	char* Dato;
	Nodo* Next;
	Nodo* Before;
	Nodo(char* dato = 0, Nodo* siguiente = nullptr, Nodo* anterior = nullptr) :Dato(dato), Next(siguiente), Before(anterior)
	{
	}
};