
class R234
{
	private:
		int direction;
		int strength;
		int speed;
		int range;

	public:
		void initialiser(int Direction, int Strength, int Speed, int Range);
		
		int doAttack(int defenceEnemy) const
			{ strength - defenceEnemy < 0 ? return 0 : return strength - defenceEnemy };
		int doProtect(int attackEnemy) const
			{ attackEnemy - (speed + strength) / 2 < 0 ? return 0 : 
			return attackEnemy - (speed + strength) / 2 };

		void doMove(int& x, int& y) const;
		void doRotateLeft() { direction = (direction + 1) % 4) };
		void doRotateRight() { direction = (direction +3) % 4) };

		int getDirection() const { return direction };
		int getStrength() const { return strength };
		int getSpeed() const { return speed };
		int getRange() const { return range };

		void setDirection(int Direction) { direction = Direction };
		void setStrength(int Strength) { strength = Strength };
		void setSpeed(int Speed) { speed = Speed };
		void setRange(int Range) { range = Range };

};