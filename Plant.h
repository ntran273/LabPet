#pragma once
#include "Pet.h"

class Plant : public Pet {
protected:
	int greeness;

public:
	Plant() {};
	Plant(int _greeness) { greeness = _greeness; }
	~Plant() {};

	int getGreeness() { return greeness; }
};

class Fern : public Plant {
public:
	Fern() {};
	Fern(int _greeness) :Plant(_greeness) {};
	~Fern() {};

	virtual void action() { cout << "Fern Fern" << endl; }
	void fernicate() { cout << "Fern noises" << endl; }

};

class Cactus : public Plant {
public:
	Cactus() {};
	Cactus(int _greeness) :Plant(_greeness) {};

	~Cactus() {};

	virtual void action() { cout << "Cactus Cactus" << endl; }
	void poke() { cout << "Poke" << endl; }
};