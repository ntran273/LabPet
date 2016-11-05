#pragma once
#include "Pet.h"

using namespace std;

class Rock : public Pet {
protected:
	int hardness;
	string clearage;
	int color;
	string chemicalComp;

public:
	Rock() {};
	Rock(int _hardness, string _clearage, int _color, string _chemicalComp) { hardness = _hardness; clearage = _clearage; color = _color; chemicalComp = _chemicalComp; }
	~Rock() {};

	int getHardness() { return hardness; }
	string getClearage() { return clearage; }
	int getColor() { return color; }
	string getChemicalComp() { return chemicalComp; }

};

class Fornacite : public Rock {
public:
	Fornacite() {};
	Fornacite(int _hardness, string _clearage, int _color, string _chemicalComp) : Rock(_hardness, _clearage, _color, _chemicalComp) {};
	~Fornacite() {};

	virtual void action() { cout << "Forn Fornacite" << endl; }
};

class Fukalite : public Rock {
public:
	Fukalite() {};
	Fukalite(int _hardness, string _clearage, int _color, string _chemicalComp) : Rock(_hardness, _clearage, _color, _chemicalComp) {};

	~Fukalite() {};

	virtual void action() { cout << "Fuka Fukalite" << endl; }

};

class Cummingtonite : public Rock {
public:
	Cummingtonite() {};
	Cummingtonite(int _hardness, string _clearage, int _color, string _chemicalComp) : Rock(_hardness, _clearage, _color, _chemicalComp) {};
	~Cummingtonite() {};
	virtual void action() { cout << "Cumm Cummingtonite" << endl; }

};