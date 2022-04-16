#pragma once
namespace Arith {
	class Complex
	{
	private:
		double re;  // partie reelle
		double img;// parie imaginaire

	public:
		Complex(); // constructeur sans parametres
		Complex(double r, double im); // constructeur avec parametres
		void afficher();
		double module();
		Complex conjuge();
		Complex Add( Complex z2);
	};
};
