#pragma once
#include "robot.h"

class robot_fix :
    public robot
{
public:
    robot_fix(string nom, float vitesse, gega* taille_ram);
    void display() const override;
    ~robot_fix();
private:

};

