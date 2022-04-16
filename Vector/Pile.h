#pragma once
#include"Element.h"
#include <iostream>

using namespace std;

template<class T>
class Pile
{
public:
	Pile(); 
	void empiler(Element<T> E);
	void depiler(); 
	bool est_vide() const;
	void print_List() const; 
	void print_Pile() ;
	Element<T>* top() const;
	~Pile();
private: 
	Element<T>* Sommet;
};

template<class T>
Pile<T>::Pile()
{
	this->Sommet = nullptr;
}

template<class T>
void Pile<T>::empiler(Element<T> E)
{
	Element<T>* N = new Element<T>(E.Data);
	N->next = this->Sommet;
	this->Sommet = N;
}

template<class T>
void Pile<T>::depiler()
{
	Element<T>* tmp = this->Sommet;
	this->Sommet = this->Sommet->next;
	delete tmp;
}

template<class T>
bool Pile<T>::est_vide() const
{
	return (this->Sommet == nullptr);
}

template<class T>
void Pile<T>::print_List() const
{
	Element* tmp = this->Sommet;
	while (tmp != nullptr) {
		tmp->afficher();
		tmp = tmp->next;
	}
}

template<class T>
void Pile<T>::print_Pile()
{
	Pile* P = new Pile();
	while (this->Sommet != nullptr) {
		P->empiler(*(this->Sommet));
		this->Sommet->afficher();
		this->depiler();
	}
	while (P->Sommet != nullptr) {
		this->empiler(*(P->Sommet));
		P->depiler();
	}
}

template<class T>
Element<T>* Pile<T>::top() const
{
	return this->Sommet;
}

template<class T>
Pile<T>::~Pile()
{
	std::cout << "destructeur de la classe Pile" << std::endl;
	while (this->Sommet != nullptr) {
		this->depiler();
	}
}
