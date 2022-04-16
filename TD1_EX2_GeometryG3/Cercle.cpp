#include "Cercle.h"
#include<iostream>
#include<math.h>
Geom::Cercle::Cercle()
{
    this->rayon = 0.0;
    this->centre =  Point();
}

Geom::Cercle::Cercle(double r, Point c)
{
    this->rayon = r; 
    this->centre = c;

}

void Geom::Cercle::afficherCercle() const
{
    std::cout << " le centre est: ";
    this->centre.afficherPoint();
    std::cout << " le rayon est: " << this->rayon << std::endl;
}

void Geom::Cercle::changerRayon(double nr)
{
    this->rayon = nr;
}

double Geom::Cercle::surface() const
{
    double s; 
    s = this->pi * pow(this->rayon, 2);
    return s;
}

double Geom::Cercle::perimetre() const
{
    double p; 
    p = 2 * this->pi * this->rayon;
    return p;
}

bool Geom::Cercle::testEgal(const Cercle& C) const
{                                           //== surchage ??
    if(this->rayon==C.rayon && this->centre.comparer(C.centre) )
    {
        return true;
    }
    else
    return false;
}

bool Geom::Cercle::appartenance(const Point& p) const
{
    if (this->centre.distance(p) <= this->rayon) {
        return true; 
    }
    return false;
}

Geom::Cercle::~Cercle()
{
    std::cout << "destructeur de  la classe cercle" << std::endl;
}
