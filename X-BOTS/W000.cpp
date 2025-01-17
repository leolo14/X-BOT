#include "W000.h"

void W000::initialiser(string Nom, int Direction, int Force, int Vitesse, int Vision)
{
	setNom(Nom);
	if (Direction < 0)
	{
		setDirection(0);
	}
	else if (Direction > 3)
	{
		setDirection(3);
	}
	else
	{
		setDirection(Direction);
	}
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);
}

void W000::bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	//TODO
}

void W000::bouger(int& x, int& y) const
{
	int deplacement = vitesse + 2;
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}