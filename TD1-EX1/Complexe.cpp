#include <iostream>
#include <math.h>
#include "Complexe.h"

using namespace std;
using namespace math;

math::complexe::complexe()
{
	this->re = 0.0;
	this->img = 0.0;
}

math::complexe::complexe(double re, double img)
{
	this->re = re;
	this->img = img;
}

math::complexe::~complexe()
{
}

void math::complexe::affichage()
{
	if (this->img > 0)
	{
		cout << this->re << "+i" << this->img << endl;
	}
	else if (this->img < 0)
	{
		cout << this->re << "-i" << abs(this->img) << endl;
	}
	else
	{
		cout << this->re << endl;
	}
	
}

double math::complexe::module()
{
	double resulta;
	resulta = sqrt(pow(this->re, 2) + pow(this->img, 2));
	return resulta;
}

complexe math::complexe::conjugue()
{
	complexe cmp;

	cmp.re = this->re;
	cmp.img = -this->img;
	return cmp;
}

complexe math::complexe::operator+(complexe C)
{
	complexe cmp;

	cmp.re = C.re + this->re;
	cmp.img = C.img + this->img;

	return cmp;
}

complexe math::complexe::operator-(complexe C)
{
	complexe cmp;

	cmp.re = C.re - this->re;
	cmp.img = C.img - this->img;

	return cmp
}

complexe math::complexe::operator*(complexe C)
{
	complexe cmp;

	cmp.re = C.re * this->re - C.img * this->img;
	cmp.img = C.re * this->img + C.img * this->re;

	return cmp
}
