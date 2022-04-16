#pragma once
#include <iostream>

template<class T>
class Element
{
public: 
	Element(T data);
	void afficher() const;
	template<class T> friend class Pile;
	~Element(); 
private: 
	T	Data; 
	Element *next;
};

template<class T>
Element<T>::Element(T data)
{
	this->Data = data;
	this->next = nullptr;
}

template<class T>
void Element<T>::afficher() const
{
	std::cout << this->Data << std::endl;
}

template<class T>
Element<T>::~Element()
{
	std::cout << "destructeur de la classe Element" << std::endl;
}
