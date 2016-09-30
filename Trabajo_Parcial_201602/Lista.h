#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
class Lista
{
public:
	Nodo* Inicio;
	int NumeroElementos;
public:
	Lista() 
	{
		Inicio = nullptr;
		NumeroElementos = 0;
	}
	~Lista()
	{
		Nodo* Auxiliar;
		while (Inicio!=nullptr)
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
