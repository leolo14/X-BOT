
class R234
{
	private:
		int direction;
		int strength;
		int speed;
		int range;

	public:
		void initialiser(int Direction, int Strength, int Speed, int Range);
		
		int doAttack(int defenceEnemy) 
			{ strength - defenceEnemy < 0 ? 0 : strength - defenceEnemy };
		int doProtect(int attackEnemy)
			{ attackEnemy - (speed + strength) / 2 < 0 ? 0 : 
			attackEnemy - (speed + strength) / 2 };

		void doMove(int& x, int& y);
		void doRotateLeft() { direction = (direction + 1) % 4) };
		void doRotateRight() { direction = (direction +3) % 4) };

		int getDirection() { return direction };
		int getStrength() { return strength };
		int getSpeed() { return speed };
		int getRange() { return range };

		void setDirection(int Direction) { direction = Direction };
		void setStrength(int Strength) { strength = Strength };
		void setSpeed(int Speed) { speed = Speed };
		void setRange(int Range) { range = Range };

};