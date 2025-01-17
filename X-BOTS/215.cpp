#include "215.h"


void X215::initialiser(string Nom, int Direction, int Force, 
	int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);
	rageCombat = false;
}

void X215::setDirection(int Direction)
{
	if (Direction < 0)
	{
		direction = 0;
	}
	else if (Direction > 3)
	{
		direction = 3;
	}
	else
	{
		direction = Direction;
	}
}

int X215::bloquer() const
{
	if (rageCombat)
	{
		return force * 3;
	}

	return (vitesse / 3 + force);
}

void X215::mouvement(int& x, int& y) const
{
	int deplacement = vitesse + 1;
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

void X215::superCourse(int& x, int& y) const
{
	int deplacement;

	if (rageCombat)
	{
		deplacement = vitesse + vitesse * force / 10;
	}
	else
	{
		deplacement = vitesse + 1;
	}
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

void X215::esquive(int& x, int& y, int xDanger, int yDanger)
{
	//TODO
}
