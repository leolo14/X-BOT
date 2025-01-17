
class X213
{
private:
	char nom;
	int direction;
	int force;
	int vitesse;
	int vision;


public:
	void initialiser(char Nom, int Direction, int Force, int Vitesse, int Vision);
	int bloquer() { return (vitesse / 3 + force) };
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void tournerLesTalons() { direction = (direction + 2) % 3) };


	char getNom() const { return nom; }
	int getDirection() const { return direction; }
	int getForce() const { return force; }
	int getVitesse() const { return vitesse; }
	int getVision() const { return vision; }

	void setNom(char Nom) { nom = Nom; }
	void setDirection(int Direction) { direction = Direction; }
	void setForce(int Force) { force = Force; }
	void setVitesse(int Vitesse) { vitesse = Vitesse; }
	void setVision(int Vision) { vision = Vision; }
};