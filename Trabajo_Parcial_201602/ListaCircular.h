#pragma once
#include "Lista.h"
class ListaCircular:public Lista
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
	virtual void Insertar_en_Posici�n(char* Elemento, int Posici�n_Donde_Agregar) override
	{
		int Posici�n = 1;
		Nodo* Auxiliar;
		Nodo* Final;
		Final = Inicio;
		Auxiliar = Inicio;
		if (Posici�n_Donde_Agregar == 0)
		{
			Insertar_Al_Inicio(Elemento);
		}
		else
		{
			while (Auxiliar != NULL&&Posici�n<Posici�n_Donde_Agregar)
			{
				Posici�n++;
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
	virtual void Eliminar_en_Posici�n(int Posici�n_Donde_Eliminar) override
	{
		int Posici�n = 1;
		int Posici�n2 = 1;
		Nodo* Auxiliar;
		Nodo* Auxiliar2;
		Nodo* Final;
		Final = Inicio;
		Auxiliar = Inicio;
		Auxiliar2 = Inicio;
		while (Auxiliar != NULL&&Posici�n<Posici�n_Donde_Eliminar)
		{
			Posici�n++;
			Auxiliar = Auxiliar->Next;
		}
		while (Auxiliar2 != NULL&&Posici�n2<Posici�n_Donde_Eliminar + 1)
		{
			Posici�n2++;
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
