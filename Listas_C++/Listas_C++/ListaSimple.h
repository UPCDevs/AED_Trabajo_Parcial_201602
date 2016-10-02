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
		if (Inicio = nullptr)
		{
			Inicio = Auxiliar;
		}
		Auxiliar->Next = Inicio;
		Inicio = Auxiliar;
		return true;
	}
	bool Insertar_Al_Final(string Elemento)
	{
		Nodo* Auxiliar;
		Nodo* NodoConDato = new Nodo(Elemento);
		Auxiliar = Inicio;
		if (Auxiliar == nullptr)
		{
			return false;
		}
		if (Inicio == nullptr)
		{
			Inicio = NodoConDato;
		}
		while (Auxiliar->Next!=nullptr)
		{
			Auxiliar = Auxiliar->Next;
		}
		Auxiliar->Next = NodoConDato;
		return true;
	}
	bool Insertar_En_Posicion(int Posicion, string Elemento)
	{
		int Contador = 1;
		Nodo* Auxiliar = Inicio;
		Nodo* NodoConDato = new Nodo(Elemento);
		if (Auxiliar == nullptr)
		{
			return false;
		}
		if (Posicion == 0)
		{
			Insertar_Al_Inicio(Elemento);
		}
		while (Auxiliar->Next != nullptr && Contador < Posicion)
		{
			Auxiliar = Auxiliar->Next;
			Contador++;
		}
		NodoConDato->Next = Auxiliar->Next;
		Auxiliar->Next = NodoConDato;
		
	}
	string GetDato() {
		Nodo* Auxiliar = Inicio;
		std::ostringstream Dato;
		Dato << Auxiliar->Dato;
		return Dato.str();
	}
};