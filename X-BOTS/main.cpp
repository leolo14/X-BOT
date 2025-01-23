#include <iostream>
#include "212.h"
#include "213.h"
#include "215.h"
#include "R234.h"
#include "G990.h"
#include "W000.h"
#include "Compteur.h"

using namespace std;
//Tests Etape #1
/*
void testX212() 
{
	int x = 3;
	int y = 5;
	string nom = "x212_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X212 x212;
	x212.initialiser(nom, direction, force, vitesse, vision);

	cout << "NOM       : " << x212.getNom() << endl;
	x212.setDirection(-1000);
	cout << "DIRECTION : " << x212.getDirection() << endl;
	cout << "FORCE     : " << x212.getForce() << endl;
	cout << "VITESSE   : " << x212.getVitesse() << endl;
	cout << "VISION    : " << x212.getVision() << endl;

	cout << "BLOQUER   : " << x212.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x212.getDirection() <<  ")" << endl;
	x212.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;

	x212.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
	x212.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x212.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;

	x212.setDirection(1);
	x212.esquive(x, y, x, y + 2);
	cout << "ESQUIVE";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
}

void testX213()
{
	int x = 3;
	int y = 5;
	string nom = "x213_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X213 x213;
	x213.initialiser(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x213.getNom() << endl;
	x213.setDirection(-1000);
	cout << "DIRECTION : " << x213.getDirection() << endl;
	cout << "FORCE     : " << x213.getForce() << endl;
	cout << "VITESSE   : " << x213.getVitesse() << endl;
	cout << "VISION    : " << x213.getVision() << endl;

	cout << "BLOQUER   : " << x213.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	x213.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x213.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	x213.tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
}

void testX215()
{
	int x = 3;
	int y = 5;
	string nom = "x215_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X215 x215;
	x215.initialiser(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x215.getNom() << endl;
	x215.setDirection(-1000);
	cout << "DIRECTION : " << x215.getDirection() << endl;
	cout << "FORCE     : " << x215.getForce() << endl;
	cout << "VITESSE   : " << x215.getVitesse() << endl;
	cout << "VISION    : " << x215.getVision() << endl;

	cout << "BLOQUER   : " << x215.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x215.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.esquive(x, y, x, y + 2);
	cout << "ESQUIVE";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
}

void testR234()
{
	int x = 3;
	int y = 5;
	int direction = 0;
	int strength = 4;
	int speed = 3;
	int range = 5;

	R234 r234;
	r234.initialiser(direction, strength, speed, range);

	cout << "DIRECTION : " << r234.getDirection() << endl;
	cout << "STRENGTH  : " << r234.getStrength() << endl;
	cout << "SPEED     : " << r234.getSpeed() << endl;
	cout << "RANGE     : " << r234.getRange() << endl;

	cout << "ATTACK_1: " << r234.doAttack(2) << endl;
	cout << "ATTACK_2: " << r234.doAttack(6) << endl;

	cout << "PROTECT_1: " << r234.doProtect(2) << endl;
	cout << "PROTECT_2: " << r234.doProtect(7) << endl;

	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doMove(x, y);
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateRight();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;

	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
}

void testG990()
{
	int x = 3;
	int y = 5;
	bool nord = true;
	bool est = false;
	int energiePhysique = 7;
	int energieMaximale = 7;
	int vision = 5;

	G990 g990;
	g990.initialiser(nord, est, energiePhysique, energieMaximale, vision);

	cout << "NORD       : " << g990.getNord() << endl;
	g990.regarderSud();
	cout << "NORD       : " << g990.getNord() << endl;

	cout << "EST       : " << g990.getEst() << endl;
	g990.regarderEst();
	cout << "EST       : " << g990.getEst() << endl;

	cout << "ENERGIE_P : " << g990.getEnergiePhysique() << endl;
	cout << "ENERGIE_M : " << g990.getEnergieMaximale() << endl;
	cout << "VISION    : " << g990.getVision() << endl;


	cout << "Deplacement SUD de 10" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementNordSud(10, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	g990.regarderNord();
	cout << "Deplacement NORD de 200" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementNordSud(200, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;


	cout << "Deplacement Est de 10" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementEstOuest(10, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	g990.regarderOuest();
	cout << "Deplacement OUEST de 200" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementEstOuest(200, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #1
	cout << "G990 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "G990 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "G990 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 4; yEnnemi = 4;
	x = 7; y = 8;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;
}

void testW000()
{
	int x = 3;
	int y = 5;
	string nom = "W000_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	W000 w000;
	w000.initialiser(nom, direction, force, vitesse, vision);

	cout << "NOM       : " << w000.getNom() << endl;
	w000.setDirection(-1000);
	cout << "DIRECTION : " << w000.getDirection() << endl;
	cout << "FORCE     : " << w000.getForce() << endl;
	cout << "VITESSE   : " << w000.getVitesse() << endl;
	cout << "VISION    : " << w000.getVision() << endl;

	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;
	w000.bouger(x, y);
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;
	w000.setDirection(2);
	w000.bouger(x, y);
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;

	w000.setVitesse(10);
	// test blocage #1
	cout << "W000 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "W000 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "W000 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 5; yEnnemi = 4;
	x = 7; y = 8;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;
}

void testsXBots()
{
	char choix = 'q';
	string nom1 = "<Leo PELE>";

	do
	{
		cout << "---------------------------------------------------" << endl;
		cout << "NOM #1 : " << nom1 << endl;
		cout << "1-X212/2-X213/3-X215/4-R234/5-G990/6-W000/q-quitter" << endl;
		cout << "Choix du test >> ";
		std::cin >> choix;

		switch (choix)
		{
		case '1':	
			testX212();
			break;
		case '2':	
			testX213();
			break;
		case '3':	
			testX215();
			break;
		case '4':	
			testR234();
			break;
		case '5':	
			testG990();
			break;
		case '6':	
			testW000();
			break;
		}
	} while (choix != 'q');
}
*/

void testChargementXBots()
{
	X212 x212("x212", 0, 4, 3, 5);
	X213 x213("x213", 0, 4, 3, 5);
	X215 x215("x215", 0, 4, 3, 5);
	R234 r234(0, 4, 3, 5);
	G990 g990(true, false, 7, 7, 5);
	W000 w000("W000", 0, 4, 3, 5);
	X212 x212Copie(x212);
	X213 x213Copie(x213);
	X215 x215Copie(x215);
	R234 r234Copie(r234);
	G990 g990Copie(g990);
	W000 w000Copie(w000);
	cout << "X212 : " << x212.getNom() << "/" << x212Copie.getNom() << endl;
	cout << "X213 : " << x213.getNom() << "/" << x213Copie.getNom() << endl;
	cout << "X215 : " << x215.getNom() << "/" << x215Copie.getNom() << endl;
	cout << "R234 : " << r234.getStrength() << "/" << r234Copie.getStrength()
		<< endl;
	cout << "G990: " << g990.getEnergiePhysique() << "/" <<
		g990Copie.getEnergiePhysique() << endl;
	cout << "W000 : " << w000.getNom() << "/" << w000Copie.getNom() << endl;
}


int main()
{
	//testsXBots(); // Semaine #2
	testChargementXBots(); // Semaine #3
	cout << Compteur::getInformation() << endl;
	cin.get();
}
