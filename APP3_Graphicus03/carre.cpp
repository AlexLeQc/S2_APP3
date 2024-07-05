/********
 * Fichier: carre.cpp
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: fonction pour la forme carre
********/

#include <iostream>
#include "carre.h"

carre::carre(int x1, int y1, int coteCarre)
{
	ancrage.x = x1;
	ancrage.y = y1;
	cote = coteCarre;
}

carre::~carre()
{
}

double carre::aire()
{
	return cote * cote;
}

void carre::afficher(ostream & s)
{
	s <<"K "<< ancrage.x <<" "<< ancrage.y <<" "<< cote <<endl;
	
}

int carre::getcote()
{
	return cote;
}

void carre::setcote(int nouveaucote)
{
	cote = nouveaucote;
}
