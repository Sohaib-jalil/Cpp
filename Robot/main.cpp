// Robot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "robot.h"
#include "robot_fix.h"
#include "robot_mobiles.h"
#include<vector>

int main()
{
    gega* Go1 = new gega(100);
    gega* Go2 = new gega(200);
    gega* Go3 = new gega(300);
    robot* R1 = new robot("robot1", 100, Go1);
    robot_fix* RF2 = new robot_fix("robotF2", 200, Go2);
    robot_mobiles* RM3 = new robot_mobiles("robotM3", 300, Go3, 4, 25);

    vector<robot*> list_robot;

    list_robot.push_back(R1);
    list_robot.push_back(RF2);
    list_robot.push_back(RM3);

    for (int i = 0; i < list_robot.size(); i++)
    {
        if (list_robot[i]->sup_taille(200))
        {
            list_robot[i]->display();
        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
