/********
 * Fichier: cerlce.cpp
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: fonction pour la forme cercle
********/

#include <iostream>
#include "cercle.h"

cercle::cercle(int x1, int y1, int rayonCercle)
{
	ancrage.x = x1;
	ancrage.y = y1;
	rayon = rayonCercle;
}

cercle::~cercle()
{
}

double cercle::aire()
{
	return pi * rayon * rayon;
}

void cercle::afficher(ostream & s)
{
	s<<"C "<< ancrage.x <<" "<< ancrage.y << endl;
	
}
	
int cercle::getRayon()
{
	return rayon;
}

void cercle::setRayon(int nouveauRayon)
{
	rayon = nouveauRayon;
}



