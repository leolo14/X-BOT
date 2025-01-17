#include "R234.h"

void R234::initialiser(int Direction, int Strength, int Speed, int Range)
{
	setDirection(Direction);
	strength = Strength;
	speed = Speed;
	range = Range;
}

void R234::setDirection(int Direction)
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

void R234::doMove(int& x, int& y) const
{
	switch (direction)
	{
	case 0: x -= speed; break;
	case 1: y += speed; break;
	case 2: x += speed; break;
	case 3: y -= speed; break;
	}

	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}