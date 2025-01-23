#include <algorithm>
#include "Compteur.h"
using namespace std;

class R234
{
	private:
		int direction;
		int strength;
		int speed;
		int range;

	public:

		R234(int Direction, int Strength, int Speed, int Range);
		R234(const R234& r234);
		~R234() { Compteur::ajouterDestructeur(); } 
		
		void initialiser(int Direction, int Strength, int Speed, int Range);
		
		int doAttack(int defenceEnemy) const
			{ return strength - defenceEnemy < 0 ? 0 : strength - defenceEnemy; }
		int doProtect(int attackEnemy) const
		{ return attackEnemy - (speed + strength) / 2 < 0 ? 0 : 
			attackEnemy - (speed + strength) / 2; }

		void doMove(int& x, int& y) const;
		void doRotateLeft() { direction = (direction + 1) % 4; }
		void doRotateRight() { direction = (direction + 3) % 4; }

		int getDirection() const { return direction; }
		int getStrength() const { return strength; }
		int getSpeed() const { return speed; }
		int getRange() const { return range; }

		void setDirection(int Direction);
		void setStrength(int Strength) { strength = Strength; }
		void setSpeed(int Speed) { speed = Speed; }
		void setRange(int Range) { range = Range; }

};