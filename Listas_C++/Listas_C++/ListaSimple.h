#pragma once

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Nodo
{
	string Dato;
	Nodo* Next;
	Nodo* Before;
	Nodo(string Dato=0, Nodo* Next = nullptr, Nodo* Before = nullptr) :
		Dato(Dato), Next(Next), Before(Before) {}
};
class ListaSimple
{
public:
	Nodo* Inicio;
	int Contador;
public:
	ListaSimple()
	{
		Inicio = nullptr;
		Contador = 0;
	}
	~ListaSimple()
	{
		Nodo*Auxiliar;
		while (Inicio->Next != nullptr)
		{
			Auxiliar = Inicio;
			Inicio = Inicio->Next;
			delete Auxiliar;
		}
	}
	bool Insertar_Al_Inicio(string Elemento)
	{
		Nodo* Auxiliar = new Nodo(Elemento);
		if (Auxiliar == nullptr)
		{
			return false;
		}
		Auxiliar->Next = Inicio;
		Inicio = Auxiliar;
		return true;
	}
	string GetDato() {
		Nodo* Auxiliar = Inicio;
		std::ostringstream Dato;
		Dato << Auxiliar->Dato;
		return Dato.str();
	}
};