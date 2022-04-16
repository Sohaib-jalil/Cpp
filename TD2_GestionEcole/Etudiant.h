#pragma once
namespace Ecole {
	class Etudiant
	{
	public:
		Etudiant();
		Etudiant(char* nom, int nbmrenotes);
		Etudiant(const Etudiant& E);
		void saisie();
		void affichage() const;
		float moyenne() const;
		bool admis() const;
		bool operator==(const Etudiant& E)const;
		~Etudiant();

	private:

		int matricule;
		static  int cpt;
		char* nom;
		int nbmreNotes;
		float* tabnotes;

	};
};

