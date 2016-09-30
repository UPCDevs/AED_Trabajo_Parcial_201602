#pragma once
#include "CLista.h"
class ListaDoblementeEnlazada :public CLista
{
public:
	ListaDoblementeEnlazada()
	{
	}
	~ListaDoblementeEnlazada()
	{
	}
	virtual bool Insertar_Al_Inicio(char* Elemento) override
	{
		Nodo* Auxiliar = new Nodo(Elemento);
		if (Auxiliar == nullptr)
		{
			return false;
		}
		Auxiliar->Next = Inicio;
		Inicio = Auxiliar;
		NumeroElementos++;
		return true;
	}
	virtual void Insertar_en_Posición(char* Elemento, int Posición_Donde_Agregar) override
	{
		int Posición = 1;
		Nodo* Auxiliar;
		Auxiliar = Inicio;
		if (Posición_Donde_Agregar == 0)
		{
			Insertar_Al_Inicio(Elemento);
		}
		else
		{
			while (Auxiliar != NULL&&Posición<Posición_Donde_Agregar)
			{
				Posición++;
				Auxiliar = Auxiliar->Next;
			}
			Nodo* Auxiliar_con_Elemento = new Nodo(Elemento);
			Auxiliar_con_Elemento->Next = Auxiliar->Next;
			Auxiliar->Next = Auxiliar_con_Elemento;

		}
	}
	virtual bool Insertar_al_Final(char* Elemento) override
	{
		if (Inicio == nullptr)
		{
			Insertar_Al_Inicio(Elemento);
		}
		Nodo*Auxiliar = Inicio;
		while (Auxiliar->Next != nullptr) {
			Auxiliar = Auxiliar->Next;
		}
		Auxiliar->Next = new Nodo(Elemento);
		if (Auxiliar->Next == nullptr)
		{
			return false;
		}
		NumeroElementos++;
		return true;
	}
	virtual void Eliminar_en_Posición(int Posición_Donde_Eliminar) override
	{
		int Posición = 1;
		int Posición2 = 1;
		Nodo* Auxiliar;
		Nodo* Auxiliar2;
		Auxiliar = Inicio;
		Auxiliar2 = Inicio;
		while (Auxiliar != NULL&&Posición<Posición_Donde_Eliminar)
		{
			Posición++;
			Auxiliar = Auxiliar->Next;
		}
		while (Auxiliar2 != NULL&&Posición2<Posición_Donde_Eliminar + 1)
		{
			Posición2++;
			Auxiliar2 = Auxiliar2->Next;
		}
		Auxiliar->Next = Auxiliar2;
		NumeroElementos--;
	}
	void Agregar_Doble_Enlace()
	{
		Nodo* Auxiliar;
		Auxiliar = Inicio;
		while (Auxiliar->Next != nullptr)
		{
			Auxiliar->Before = Auxiliar;
			Auxiliar = Auxiliar->Next;
		}
	}
};