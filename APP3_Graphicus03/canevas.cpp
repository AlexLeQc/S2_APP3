/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	couches[0].etatcouche(1);
	for(int i=1; i<MAX_COUCHES; i++)
	{
		couches[i].etatcouche(0);
	}
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	couches[0].etatcouche(0);
	couches[0].reset();
	for(int i=1; i<MAX_COUCHES; i++)
	{
		couches[i].etatcouche(0);
		couches[i].reset();
		if (couches[i].activation())
		{
		return false;
		}
	}
	return true;
}

bool Canevas::activerCouche(int index)
{
	if (index < 0|| index > MAX_COUCHES)
	{
		return false;
	}
	for(int i = 0; i < MAX_COUCHES;i++)
	{
		if (couches[i].activation()== true)
		{
			couches[i].etatcouche(2);
		}
	}
	coucheactive = index;
	couches[index].etatcouche(1);
	return true;
}

bool Canevas::cacherCouche(int index)
{
	if (index < 0|| index > MAX_COUCHES)
	{
		return false;
	}
	couches[index].etatcouche(2);
	return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	return couches[coucheactive].ajoute(p_forme);
}

bool Canevas::retirerForme(int index)
{
	return couches[coucheactive].retrait(index);
}

double Canevas::aire()
{
	double aire = 0;
	for(int i =0; i < MAX_COUCHES; i++)
	{
		aire = aire + couches[i].airetot();
	}
	return aire;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	if (couches[coucheactive].activation())
	{
		couches[coucheactive].translate(deltaX, deltaY);
		return true;
	}
	return false;
	
}

void Canevas::afficher(ostream & s)
{
	for(int i = 0; i < MAX_COUCHES; i++)
	{
		s<< "----Couche " << i << endl;
		if (couches[i].airetot()==0)
		{
			s << "Couche initialisee"<< endl;
		}	
		else 
		{
		couches[i].affichage(s);
		}
	}
}




