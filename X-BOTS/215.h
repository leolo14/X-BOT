#include <string>
#include "Compteur.h"
using namespace std;

class X215
{
private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
	bool rageCombat;

public:

	X215(string Nom, int Direction, int Force,
		int Vitesse, int Vision);
	X215(const X215& x215);
	~X215() { Compteur::ajouterDestructeur(); }

	void initialiser(string Nom, int Direction, int Force,
		int Vitesse, int Vision);

	int bloquer() const;

	void mouvement(int& x, int& y) const;
	void superCourse(int& x, int& y) const;
	void esquive(int& x, int& y, int xDanger, int yDanger);
	void tournerLesTalons() { direction = (direction + 2) % 4; }

	string getNom() const { return nom; }
	int getDirection() const { return direction; }
	int getForce() const { return force; }
	int getVitesse() const { return vitesse; }
	int getVision() const { return vision; }

	void exploserRage() { rageCombat = true; }
	void controlerRage() { rageCombat = false; }

	void setNom(string Nom) { nom = Nom; }
	void setDirection(int Direction);
	void setForce(int Force) { force = Force; }
	void setVitesse(int Vitesse) { vitesse = Vitesse; }
	void setVision(int Vision) { vision = Vision; }
};