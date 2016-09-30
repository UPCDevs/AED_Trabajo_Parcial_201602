#pragma once
#include "CLista.h"

class ListaCircular :public CLista
{
public:

public:
	ListaCircular()
	{
	}
	~ListaCircular()
	{
	}
	virtual bool Insertar_Al_Inicio(char* Elemento) override
	{
		Nodo* Auxiliar = new Nodo(Elemento);
		Nodo* Final;
		Final = Inicio;
		if (Auxiliar == nullptr)
		{
			return false;
		}
		Auxiliar->Next = Inicio;
		Inicio = Auxiliar;
		NumeroElementos++;
		while (Final != NULL)
		{
			Final = Final->Next;
		}
		Final->Next = Inicio->Before;
		return true;
	}
	virtual void Insertar_en_Posición(char* Elemento, int Posición_Donde_Agregar) override
	{
		int Posición = 1;
		Nodo* Auxiliar;
		Nodo* Final;
		Final = Inicio;
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
		while (Final != NULL)
		{
			Final = Final->Next;
		}
		Final->Next = Inicio->Before;
	}
	virtual bool Insertar_al_Final(char* Elemento) override
	{
		if (Inicio == nullptr)
		{
			Insertar_Al_Inicio(Elemento);
		}
		Nodo*Auxiliar = Inicio;
		Nodo* Final;
		Final = Inicio;
		while (Auxiliar->Next != nullptr) {
			Auxiliar = Auxiliar->Next;
		}
		Auxiliar->Next = new Nodo(Elemento);
		if (Auxiliar->Next == nullptr)
		{
			return false;
		}
		NumeroElementos++;
		while (Final != NULL)
		{
			Final = Final->Next;
		}
		Final->Next = Inicio->Before;
		return true;
	}
	virtual void Eliminar_en_Posición(int Posición_Donde_Eliminar) override
	{
		int Posición = 1;
		int Posición2 = 1;
		Nodo* Auxiliar;
		Nodo* Auxiliar2;
		Nodo* Final;
		Final = Inicio;
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
		while (Final != NULL)
		{
			Final = Final->Next;
		}
		Final->Next = Inicio->Before;
		NumeroElementos--;
	}
};