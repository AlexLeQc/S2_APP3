/********
 * Fichier: rectangle.cpp
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: fonction pour la forme rectangle
********/

#include <iostream>
#include "rectangle.h"

rectangle::rectangle(int x1, int y1, int longueurRectangle, int hauteurRectangle)
{
	ancrage.x = x1;
	ancrage.y = y1;
	longueur = longueurRectangle;
	hauteur = hauteurRectangle;
}

rectangle::~rectangle()
{
}

double rectangle::aire()
{
	return longueur * hauteur;
}
	
void rectangle::afficher(ostream & s)
{
	s<<"R "<< ancrage.x <<" "<< ancrage.y <<" "<< longueur <<" "<< hauteur << endl;
	
}

int rectangle::getlongueur()
{
	return longueur;
}

void rectangle::setlongueur(int nouvellelongueur)
{
	longueur = nouvellelongueur;
}

int rectangle::gethauteur()
{
	return hauteur;
}

void rectangle::sethauteur(int nouvellehauteur)
{
	hauteur = nouvellehauteur;
}







