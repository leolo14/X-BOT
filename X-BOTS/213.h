#include <string>
#include "Compteur.h"
using namespace std;

class X213
{
private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;


public:

	X213(string Nom, int Direction, int Force,
		int Vitesse, int Vision);
	X213(const X213& x213);
	~X213() { Compteur::ajouterDestructeur(); }


	void initialiser(string Nom, int Direction, int Force, 
		int Vitesse, int Vision);

	int bloquer() const { return (vitesse / 3 + force); }

	void mouvement(int& x, int& y) const;
	void superCourse(int& x, int& y) const;
	void tournerLesTalons() { direction = (direction + 2) % 4; }


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