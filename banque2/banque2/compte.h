#pragma once
#include<iostream>
#include<vector>

using namespace std;

class devise;
class client;
class operation;

class compte
{
public:
	compte();
	compte(devise* D, client* P);
	void consulter();
	void depot(devise* D);
	virtual bool retirer(devise* D);
	bool transfere(devise* D, compte& C);
	~compte();
private:
	static int cpt;
	const int num_compte;
	client* prop;
	vector<operation> list_operation;

protected:
	devise* solde;
};
