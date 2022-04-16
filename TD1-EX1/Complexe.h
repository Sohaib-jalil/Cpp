#pragma once
namespace math{
	class complexe{
	private:
		double re;
		double img;

	public:
		complexe();
		complexe(double re, double img);
		~complexe();
		void affichage();
		double module();
		complexe conjugue();
		complexe operator+(complexe C);
		complexe operator-(complexe C);
		complexe operator*(complexe C);
	};
}