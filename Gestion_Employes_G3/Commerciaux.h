#pragma once
#include "Employe.h"
#include <vector>

class Commerciaux :
	public Employe
{
public:
	Commerciaux(string nom, float indice);
	void mettre_a_jour_vente(float vente_jour);
	float cal_salaire() const override;
	~Commerciaux();

private:
	vector<float> vente;
};