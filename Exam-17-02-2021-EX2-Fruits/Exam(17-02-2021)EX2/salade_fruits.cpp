#include "salade_fruits.h"

salade_fruits::salade_fruits():
	fruits()
{
	this->list_fruit = vector<fruits*>();
}

bool salade_fruits::kernel()
{
	bool res;
	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		if (this->list_fruit[i]->kernel() == false)
		{
			return false;
		}
	}
	return true;
}

void salade_fruits::ajouter(fruits* F)
{
	this->list_fruit.push_back(F);
}

void salade_fruits::afficher() const
{
	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		this->list_fruit[i]->afficher();
	}
}

salade_fruits::~salade_fruits()
{
	cout << "destructeur de salade fruits" << endl;
	this->list_fruit.clear();
}
