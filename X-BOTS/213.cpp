#include "213.h"


void X213::initialiser(char Nom, int Direction, int Force, 
	int Vitesse, int Vision)
{
	nom = Nom;

	if (Direction < 0)
	{
		setDirection(0);
	}
	else if (Direction > 3)
	{
		setDirection(3)
	}
	else
	{
		setDirection(Direction);
	}

	force = Force;
	vitesse = Vitesse;
	vision = Vision;
}


void X213::mouvement(int& x, int& y)
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
	y = max(min(x, 9), 0);
}

void X213::superCourse(int& x, int& y)
{
	int deplacement = vitesse + (vitesse * force / 10);
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}

	x = max(min(x, 9), 0);
	y = max(min(x, 9), 0);
}

