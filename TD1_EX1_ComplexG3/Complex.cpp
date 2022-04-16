#include "Complex.h"
#include<iostream>
#include <math.h>
using namespace std;
using namespace Arith;
Arith::Complex::Complex()
{
	this->re = 0;
	this->img = 0;
}
Arith::Complex::Complex(double r, double im)
{
	this->re = r;
	this->img = im;
}
void Arith::Complex::afficher()
{
	//printf("%d","+i%d", re,img); //c
	cout << this->re << "+i" << this->img << "\n";
}

double Arith::Complex::module()
{
	double res;
	double M;
	M = pow(this->re, 2) + pow(this->img, 2);
	res = sqrt(M);
	return res;
}

Complex Arith::Complex::conjuge()
{
	Complex conj;
	conj.re = this->re; 
	conj.img = - this->img;//(-1)*this->img;
	return conj;
}

Complex Arith::Complex::Add( Complex z)
{
	Complex sum; 
	sum.re = this->re + z.re;
	sum.img = this->img + z.img;
	return sum;
}
