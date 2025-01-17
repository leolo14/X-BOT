
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
	
	void deplacementNordSud(int valeur, int& x, int& y);
	void deplacementEstOuest(int valeur, int& x, int& y);

	void regarderNord() { nord = true; }
	void regarderSud() { nord = false; }
	void regarderEst() { est = true; }
	void regarderOuest() { est = false; }

	void bloquer(int xAmi, int yAmi, int& x, int& y,
		int xEnnemi, int yEnnemi);

	bool getNord() { return nord; }
	bool getEst() { return est; }
	long getEnergiePhysique() { return energiePhysique; }
	long getEnergieMaximale() { return energieMaximale; }
	long getVision() { return vision; }

	void setEnergiePhysique(long EnergiePhysique)
	{ energiePhysique = EnergiePhysique; }
	void setEnergieMaximale(long EnergieMaximale) 
	{ energieMaximale = EnergieMaximale; }
	void setVision(long Vision) { vision = Vision; }

};