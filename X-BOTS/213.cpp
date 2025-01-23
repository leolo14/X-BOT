#include "213.h"

X213::X213(string Nom, int Direction, int Force, int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVision(Vision);

	Compteur::ajouterConstructeur();
}

X213::X213(const X213& x213)
{
	nom = x213.nom;
	direction = x213.direction;
	force = x213.force;
	vitesse = x213.vitesse;
	vision = x213.vision;

	Compteur::ajouterConstructeurCopie();
}

void X213::initialiser(string Nom, int Direction, int Force, 
	int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVision(Vision);
}

void X213::setDirection(int Direction)
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

void X213::mouvement(int& x, int& y) const
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
 
void X213::superCourse(int& x, int& y) const
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
	y = max(min(y, 9), 0);
}

