#pragma once
template <class T>
struct Nodo
{
	T Dato;
	Nodo* Next;
	Nodo* Before;
	Nodo(T dato = 0, Nodo* siguiente = nullptr, Nodo* anterior=nullptr):Dato(dato),Next(siguiente), Before(anterior)
	{
	}
};
