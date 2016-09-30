#pragma once+
#include "Lista.h"
template<class T>
class ListaSimplementeEnlazada:public Lista<T>
{
public:
	ListaSimplementeEnlazada()
	{
	}
	~ListaSimplementeEnlazada()
	{
	}
	virtual bool Insertar_Al_Inicio(T Elemento) override
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
	virtual void Insertar_en_Posición(T Elemento, int Posición_Donde_Agregar) override
	{
		int Posición = 1;
		Nodo<T>* Auxiliar;
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
			Nodo<T>* Auxiliar_con_Elemento(Elemento);
			Auxiliar_con_Elemento->Next = Auxiliar->Next;
			Auxiliar->Next = Auxiliar_con_Elemento;

		}
	}
	virtual bool Insertar_al_Final(T Elemento) override
	{
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
	virtual void Eliminar_en_Posición(int Posición_Donde_Eliminar) override
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
		while (Auxiliar2 != NULL&&Posición2<Posición_Donde_Eliminar + 1)
		{
			Posición2++;
			Auxiliar2 = Auxiliar2->Next;
		}
		Auxiliar->Next = Auxiliar2;
		NumeroElementos--;
	}
};
