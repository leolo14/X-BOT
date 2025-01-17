#include "G990.h"

void G990::initialiser(bool Nord, bool Est, long EnergiePhisique,
	long EnergieMaximale, long Vision)
{
	this ->nord = Nord;
	this -> est = Est;
	setEnergiePhysique(EnergiePhisique);
	setEnergieMaximale(EnergieMaximale);
	setVision(Vision);
}

void G990::deplacementNordSud(int valeur, int& x, int& y)
{
	if (energieMaximale > valeur)
	{
		if (nord)
		{
			y -= valeur;
		}
		else
		{
			y += valeur;
		}
	}
}

void G990::deplacementEstOuest(int valeur, int& x, int& y)
{
	if (energieMaximale > valeur)
	{
		if (est)
		{
			x += valeur;
		}
		else
		{
			x -= valeur;
		}
	}
}

void G990::bloquer(int xAmi, int yAmi, int& x, int& y,
	int xEnnemi, int yEnnemi)
{
	//TODO
}
