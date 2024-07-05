/********
 * Fichier: carre.h
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: méthodes et attributs pour la forme carre
********/

#ifndef CARRE_H
#define CARRE_H
#include <iostream>
#include "rectangle.h"

using namespace std;

class carre: public rectangle
{
private:
	int cote;
	
public:
	carre(int x1=0, int y1=0, int coteCarre=0);
	~carre();
	double aire();
	void afficher(ostream & s);
	int getcote();
	void setcote(int nouveaucote);
};

#endif
