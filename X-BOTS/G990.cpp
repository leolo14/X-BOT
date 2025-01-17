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
	//TODO
}