/********
 * Fichier: cercle.h
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: méthodes et attributs pour la forme cercle
********/

#ifndef CERCLE_H
#define CERCLE_H
#include <iostream>
#include "forme.h"
#define pi 3.14159265

using namespace std;

class cercle: public Forme
{
private:
	int rayon;
	
public:
	cercle(int x1=0, int y1=0, int rayonCercle=0);
	~cercle();
	double aire();
	void afficher(ostream & s);
	int getRayon();
	void setRayon(int nouveauRayon);
};

#endif


