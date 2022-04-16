#include "robot_mobiles.h"

robot_mobiles::robot_mobiles(string nom, float vitesse, gega* taille_ram, int nombre_roues, float position):
	robot(nom, vitesse, taille_ram)
{
	this->nombre_roues = nombre_roues;
	this->position = position;
}

void robot_mobiles::display() const
{
	this->robot::display();
	cout << "nombre de roues: " << this->nombre_roues << endl;
	cout << "position: " << this->position << endl;
	cout << "type: Mobiles" << endl;
}

robot_mobiles::~robot_mobiles()
{
	cout << "destructeur de robot mobiles" << endl;
}
