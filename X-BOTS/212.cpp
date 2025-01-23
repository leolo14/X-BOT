#include "212.h"

X212::X212(string Nom, int Direction, int Force,
	int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);

	Compteur::ajouterConstructeur();
}

X212::X212(const X212& x212)
{
	nom = x212.nom;
	direction = x212.direction;	
	force = x212.force;
	vitesse = x212.vitesse;
	vision = x212.vision;

	Compteur::ajouterConstructeurCopie();
	
}


void X212::initialiser(string Nom, int Direction, int Force,
	int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);
}

void X212::setDirection(int Direction)
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

void X212::mouvement(int& x, int& y) const
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

void X212::superCourse(int& x, int& y) const
{
	int deplacement = vitesse + (vitesse * force/10);
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

void X212::esquive(int& x, int& y, int xDanger, int yDanger)
{
	//TODO
}