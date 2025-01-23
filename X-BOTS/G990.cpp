#include "G990.h"


G990::G990(bool Nord, bool Est, long EnergiePhisique,
	long EnergieMaximale, long Vision)
{
	this->nord = Nord;
	this->est = Est;
	setEnergiePhysique(EnergiePhisique);
	setEnergieMaximale(EnergieMaximale);
	setVision(Vision);

	Compteur::ajouterConstructeur();
}

G990::G990(const G990& g990)
{
	nord = g990.nord;
	est = g990.est;
	energiePhysique = g990.energiePhysique;
	energieMaximale = g990.energieMaximale;
	vision = g990.vision;

	Compteur::ajouterConstructeurCopie();
}

void G990::initialiser(bool Nord, bool Est, long EnergiePhisique,
	long EnergieMaximale, long Vision)
{
	this ->nord = Nord;
	this -> est = Est;
	setEnergiePhysique(EnergiePhisique);
	setEnergieMaximale(EnergieMaximale);
	setVision(Vision);
}

void G990::deplacementNordSud(int valeur, int& x, int& y) const
{
	long val = min((long)valeur, energieMaximale);
	if (nord)
	{
		y -= val;
	}
	else
	{
		y += val;
	}
	
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}

void G990::deplacementEstOuest(int valeur, int& x, int& y) const
{
	long val = min((long)valeur, energieMaximale);
	
	if (est)
	{
		x += val;
	}
	else
	{
		x -= val;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}

void G990::bloquer(int xAmi, int yAmi, int& x, int& y,
	int xEnnemi, int yEnnemi)
{
	//TODO
}
