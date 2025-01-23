#include <string>
#include "Compteur.h"
using namespace std;

class W000 {
	private:
		string nom;
		int direction;
		int force;
		int vitesse;
		int vision;

	public:

		W000(string Nom, int Direction, int Force,
			int Vitesse, int Vision);
		W000(const W000& w000);
		~W000() { Compteur::ajouterDestructeur(); } 

		void initialiser(string Nom, int Direction, int Force,
			int Vitesse, int Vision);

		void bloquer(int xAmi, int yAmi, int& x, int& y,
			int xEnnemi, int yEnnemi);
		void bouger(int& x, int& y) const;
		
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