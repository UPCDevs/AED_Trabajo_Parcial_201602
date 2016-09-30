#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
template <class T>
class Lista
{
	Nodo<T>* Inicio;
	int NumeroElementos;
public:
	Lista() 
	{
		Inicio = nullptr;
		NumeroElementos = 0;
	}
	~Lista()
	{
		Nodo<T>* Auxiliar;
		while (Inicio!=nullptr)
		{
			Auxiliar = Inicio;
			Inicio = Inicio->Next;
			delete Auxiliar;
		}
	}
	virtual bool Insertar_Al_Inicio(T Elemento) abstract;
	virtual void Insertar_en_Posición(T Elemento, int Posición_Donde_Agregar) abstract
	virtual	bool Insertar_al_Final(T Elemento) abstract;
	void Eliminar_en_Posición(int Posición_Donde_Eliminar) abstract;
};
