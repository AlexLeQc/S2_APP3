/********
 * Fichier: rectangle.h
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: méthodes et attributs pour la forme rectangle
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "forme.h"

using namespace std;

class rectangle: public Forme
{
private:
	int hauteur;
	int longueur;
public:
	rectangle(int x1=0, int y1=0, int longueurRectangle=0, int hauteurRectangle=0);
	~rectangle();
	double aire();
	void afficher(ostream & s);
	int getlongueur();
	void setlongueur(int nouvellelongueur);
	int gethauteur();
	void sethauteur(int nouvellehauteur);
	
	
};
#endif


