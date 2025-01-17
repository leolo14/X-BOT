#include "R234.h"

void R234::initialiser(int Direction, int Strength, int Speed, int Range)
{
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
	strength = Strength;
	speed = Speed;
	range = Range;
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
	y = max(min(x, 9), 0);
}