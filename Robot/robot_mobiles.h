#pragma once
#include "robot.h"

class robot_mobiles :
    public robot
{
public:
    robot_mobiles(string nom, float vitesse, gega* taille_ram, int nombre_roues, float position);
    void display() const override;
    ~robot_mobiles();
private:
    int nombre_roues;
    float position;
};

