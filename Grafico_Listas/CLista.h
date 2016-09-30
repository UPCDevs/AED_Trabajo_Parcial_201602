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

class CLista
{
public:
	Nodo* Inicio;
	int NumeroElementos;
public:
	CLista()
	{
		Inicio = nullptr;
		NumeroElementos = 0;
	}
	~CLista()
	{
		Nodo* Auxiliar;
		while (Inicio != nullptr)
		{
			Auxiliar = Inicio;
			Inicio = Inicio->Next;
			delete Auxiliar;
		}
	}
	virtual bool Insertar_Al_Inicio(char* Elemento) abstract;
	virtual void Insertar_en_Posición(char* Elemento, int Posición_Donde_Agregar) abstract;
	virtual	bool Insertar_al_Final(char* Elemento) abstract;
	virtual void Eliminar_en_Posición(int Posición_Donde_Eliminar) abstract;
};