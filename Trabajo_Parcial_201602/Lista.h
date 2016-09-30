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
	bool Insertar_Al_Inicio(T Elemento)
	{
		Nodo<T>* Auxiliar = new Nodo<T>(Elemento);
		if (Auxiliar == nullptr)
		{
			return false;
		}
		Auxiliar->Next = Inicio;
		Inicio = Auxiliar;
		NumeroElementos++;
		return true;
	}
	void Insertar_en_Posición(T Elemento, int Posición_Donde_Agregar)
	{
		int Posición = 1;
		Nodo<T>* Auxiliar;
		Auxiliar = Inicio;
		if (Posición_Donde_Agregar==0)
		{
			Insertar_Al_Inicio(Elemento);
		}
		else
		{
			while (Auxiliar!=NULL&&Posición<Posición_Donde_Agregar)
			{
				Posición++;
				Auxiliar = Auxiliar->Next;
			}
			Nodo<T>* Auxiliar_con_Elemento(Elemento);
			Auxiliar_con_Elemento->Next = Auxiliar->Next;
			Auxiliar->Next = Auxiliar_con_Elemento;

		}
	}
	bool Insertar_al_Final(T Elemento) {
		if (Inicio == nullptr)
		{
			Insertar_Al_Inicio(Elemento);
		}
		Nodo<T>*Auxiliar = Inicio;
		while (Auxiliar->Next != nullptr) {
			Auxiliar = Auxiliar->Next;
		}
		Auxiliar->Next = new Nodo<T>(Elemento);
		if (Auxiliar->Next == nullptr)
		{
			return false;
		}
		NumeroElementos++;
		return true;
	}
	void Eliminar_en_Posición(int Posición_Donde_Eliminar)
	{
		int Posición = 1;
		int Posición2 = 1;
		Nodo<T>* Auxiliar;
		Nodo<T>* Auxiliar2;
		Auxiliar = Inicio;
		Auxiliar2 = Inicio;
		while (Auxiliar != NULL&&Posición<Posición_Donde_Eliminar)
		{
			Posición++;
			Auxiliar = Auxiliar->Next;
		}
		while (Auxiliar2 != NULL&&Posición2<Posición_Donde_Eliminar+1)
		{
			Posición2++;
			Auxiliar2 = Auxiliar2->Next;
		}
		Auxiliar->Next = Auxiliar2;
		NumeroElementos--;
	}
};
