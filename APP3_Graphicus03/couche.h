/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include <iostream>
#include "vecteur.h"

using namespace std;

class Couche
{
public:
	Couche();
	~Couche();
	bool ajoute(Forme *forme);
	Forme* retrait(int index);
	Forme* getForme(int index);
	double airetot();
	bool translate(int horizontale, int verticale);
	bool reset();
	bool etatcouche(int etat1);
	void affichage(ostream & s);
	bool activation();
	
private:
	Vecteur vec;
	int etat;
	
	
	
	
   // Classe a completer
};

#endif
