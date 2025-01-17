#include <string>
using namespace std;
class X212
{
private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;

public:
	void initialiser(string Nom, int Direction, int Force, 
		int Vitesse, int Vision);

	int bloquer() { return (vitesse / 3 + force); }

	void mouvement(int& x, int& y) const;
	void superCourse(int& x, int& y) const;
	void esquive(int& x, int& y, int xDanger, int yDanger);

	string getNom() const { return nom; }
	int getDirection() const { return direction; }
	int getForce() const { return force; }
	int getVitesse() const { return vitesse; }
	int getVision() const { return vision; }

	void setNom(string Nom) { nom = Nom; }
	void setDirection(int Direction);
	void setForce(int Force) { force = Force; }
	void setVitesse(int Vitesse) { vitesse = Vitesse; }
	void setVision(int Vision) { vision = Vision; }
};

