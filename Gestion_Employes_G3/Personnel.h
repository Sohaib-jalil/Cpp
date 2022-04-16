#pragma once
#include "Employe.h"
#include <vector>
#include <iostream>
using namespace std;

class Personnel
{
public:
	Personnel();
	void add_perso(Employe* E);
	float cal_sal_total() const;
	~Personnel();

private:
	vector<Employe*> perso;
};