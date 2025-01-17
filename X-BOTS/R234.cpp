#include "R234.h"

void R234::initialiser(int Direction, int Strength, int Speed, int Range)
{
	direction = Direction;
	strength = Strength;
	speed = Speed;
	range = Range;
}

int R234::doAttack(int defenceEnemy)
{
	int res = strength - defenceEnemy;
	if (res < 0)
	{
		return 0;
	}
	return res;
}

int R234::doProtect(int attackEnemy)
{
	int res = attackEnemy - (speed + strength) / 2;
	if (res < 0)
	{
		return 0;
	}
	return res;

}

void R234::doMove(int& x, int& y)
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