#include "vecteur.h"


Vecteur::Vecteur()
{
	taille = 0;
	capacite = 1;
	tableau = new Forme*[capacite];

}


Vecteur::~Vecteur()
{
	delete[] tableau;
}

int Vecteur::getcapacite()
{
	return capacite;
}

int Vecteur::gettaille()
{
	return taille;
}

void Vecteur::vider()
{
	int longueur= taille;
	for(int i =0; i < longueur; i++)
	{
		delete tableau[i];
		taille--;
	}
}

bool Vecteur::verifvider()
{
		return taille == 0;
}

bool Vecteur::ajout(Forme *figure)
{
	if (taille == capacite)
	{
		capacite = capacite * 2;
		Forme **tableau2 = new Forme*[capacite];
		for(int i=0; i < taille; i++)
		{
			tableau2[i]=tableau[i];
		}
		delete[] tableau;
		tableau = tableau2;
	}
	
	tableau[taille] = figure;
	taille++;
	return tableau[taille]!= NULL;
	
}

Forme* Vecteur::retrait(int index)
{
	Forme* retour = tableau[index];
	if (index < 0 || index >= taille)
	{
		return nullptr;
	}
	delete tableau[index];
	for(int i = index; i  < taille-1; i++)
	{
		tableau[i]= tableau[i+1];
	
	}
	taille--;
	return retour;
}

Forme* Vecteur::getForme(int index)
{
	if (index > 0 || index >= taille)
	{
		return nullptr;
	}
	return tableau[index];
}

void Vecteur::afficher(ostream & s)
{
	for(int i=0; i < taille; i++)
	{
	 	tableau[i]->afficher(s);
	}
}

Forme* *Vecteur::gettableau()
{
	return tableau;
}







