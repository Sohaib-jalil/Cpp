#include "Point.h"
#include<iostream>
using namespace Geom;
Geom::Point::Point()
{
	this->x = 0.0; 
	this->y = 0.0;
}

Geom::Point::Point(double x, double y)
{
	this->x = x; 
	this->y = y;
}

Geom::Point::Point(const Point& p)
{
	this->x = p.x; 
	this->y = p.y;
	//this->tab = p.tab; prob contructeur de recopie par defaut
	this->tab = new int[3];
	for (int i = 0; i < 3; i++) {
		this->tab[i] = p.tab[i];
	}
}

void Geom::Point::afficherPoint() const
{  
	std::cout << "(" << this->x << "," << this->y << ")" << std::endl;

}

void Geom::Point::translate(double dx, double dy)
{
	this->x += dx; 
	this->y += dy;
}

bool Geom::Point::comparer(const Point& p) const
{
	if (this->x == p.x && this->y == p.y) {
		return true;
	}
	else
	return false;
}

double Geom::Point::distance(const Point& p) const
{
	double dis = sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
	return dis;
}

bool Geom::Point::operator==(const Point& p) const
{
	if( this->x == p.x && this->y == p.y)
	{
		return true;
	}
	return false;
}

Point Geom::Point::operator+(const Point& p) const
{
	Point res; 
	res.x = this->x + p.x; 
	res.y = this->y + p.y;
	return res;
}

Point Geom::Point::creator(double x, double y)
{
	Point p(x, y);
	return p;
}

Geom::Point::~Point()
{
	std::cout << "destructeur de  la classe Point" << std::endl;
}
