#include "robot_fix.h"

robot_fix::robot_fix(string nom, float vitesse, gega* taille_ram):
	robot(nom, vitesse, taille_ram)
{
}

void robot_fix::display() const
{
	this->robot::display();
	cout << "type: Fix" << endl;
}

robot_fix::~robot_fix()
{
	cout << "destructeur de robot fix" << endl;
}
