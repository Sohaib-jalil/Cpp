#include "jus_de_fruits.h"

jus_de_fruits::jus_de_fruits():
	fruits()
{
}

bool jus_de_fruits::kernel()
{
	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		if (this->list_fruit[i]->kernel() == false)
		{
			return false;
		}
	}
	return true;
}

void jus_de_fruits::ajouter(fruits* F)
{
	this->list_fruit.push_back(F);
}

void jus_de_fruits::afficher() const
{
	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		this->list_fruit[i]->afficher();
	}
}

jus_de_fruits::~jus_de_fruits()
{
	cout << "destructeur de jus de fruits" << endl;
	this->list_fruit.clear();
}
