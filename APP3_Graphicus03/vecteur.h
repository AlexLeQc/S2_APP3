#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "forme.h"

using namespace std;

class Vecteur
{
private:
	int taille;
	int capacite;
	Forme**tableau;
public:
	Vecteur();
	~Vecteur();
	int getcapacite();
	int gettaille();
	void vider();
	bool verifvider();
	bool ajout(Forme* figure);
	Forme* retrait(int index);
	Forme* getForme(int index);
	Forme* *gettableau();
	void afficher(ostream & s);
};

#endif



