#include <algorithm>
using namespace std;

class G990
{
private:
	bool nord;
	bool est;
	long energiePhysique;
	long energieMaximale;
	long vision;

public:
	void initialiser(bool Nord, bool Est, long EnergiePhisique,
		long EnergieMaximale, long Vision);
	
	void deplacementNordSud(int valeur, int& x, int& y) const;
	void deplacementEstOuest(int valeur, int& x, int& y) const;

	void regarderNord() { nord = true; }
	void regarderSud() { nord = false; }
	void regarderEst() { est = true; }
	void regarderOuest() { est = false; }

	void bloquer(int xAmi, int yAmi, int& x, int& y,
		int xEnnemi, int yEnnemi);

	bool getNord() const { return nord; }
	bool getEst() const { return est; }
	long getEnergiePhysique() const { return energiePhysique; }
	long getEnergieMaximale() const { return energieMaximale; }
	long getVision() const { return vision; }

	void setEnergiePhysique(long EnergiePhysique)
	{ energiePhysique = EnergiePhysique; }
	void setEnergieMaximale(long EnergieMaximale) 
	{ energieMaximale = EnergieMaximale; }
	void setVision(long Vision) { vision = Vision; }

};