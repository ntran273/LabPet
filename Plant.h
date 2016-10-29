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

	void fernicate() { cout << "Fern noises" << endl; }

};

class Cactus : public Plant {
public:
	Cactus() {};
	Cactus(int _greeness) :Plant(_greeness) {};

	~Cactus() {};

	void poke() { cout << "Poke" << endl; }
};