/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche()
{
	
	etat= 0;
}

Couche::~Couche()
{

}


bool Couche::ajoute(Forme *forme)
{
	if (etat!=1)
	{
		return false;
	}
	return vec.ajout(forme);
}

Forme* Couche::retrait(int index)
{
	if (etat!=1)
	{
		return nullptr;
	}
	return vec.retrait(index);
}

Forme* Couche::getForme(int index)
{
	if (etat!=1)
	{
		return nullptr;
	}
	return vec.getForme(index);
	
}

double Couche::airetot()
{
	double aire =0;
	int taille=vec.gettaille();
	for(int i=0; i< taille;i++)
	{
	
		aire = vec.gettableau()[i]->aire() + aire;
		
	
	}
	return aire;
}

bool Couche::translate(int horizontale, int verticale)
{
	if (etat!= 1)
	{
		return false;
	}
	int taille=vec.gettaille();
	for (int i=0;i<taille;i++)
	{
		vec.gettableau()[i]->translater(horizontale,verticale);
	}
	return true;
}

bool Couche::reset()
{
	vec.vider();
	if (airetot()!=0)
	{
		return false;
	}
	return true;
}

bool Couche::etatcouche(int etat1)
{
	if (etat==etat1)
	{
		return false;
	}
	etat= etat1;
	return true;
}

void Couche::affichage(ostream & s)
{
	int taille=vec.gettaille();
	for(int i=0; i<taille; i++)
	{
		vec.gettableau()[i]->afficher(s);
	}
	
}

bool Couche::activation()
{
	bool retour=false;
	if(etat==1)
	{
		retour = true;
	}
	return retour;
}

// Implementation a faire...
