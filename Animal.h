#pragma once
#include "Pet.h"
class Animal : public Pet
{
protected:
	string gender;
	bool inorOut;

public:
	Animal() {};
	Animal(string _gender, bool inNout) { gender = _gender; inorOut = inNout; }
	~Animal() {};

	string getGender() { return gender; }
	bool inOrOut() {
		if (inorOut == 1) {
			return 1;
		}
		return 0;
	}

};

class Dog : public Animal
{
public:
	Dog() { eat_pop(); }
	Dog(string _gender, bool inNout) : Animal(_gender, inNout) {};

	~Dog() {};

	void eat_pop() { cout << "Yum" << endl; }
};


class Cat : public Animal
{
public:
	Cat() { knock_shit_off_table(); }
	Cat(string _gender, bool inNout) : Animal(_gender, inNout) {};
	~Cat() {};

	void knock_shit_off_table() { cout << "Maintain Eye Contact. Assert Dominance" << endl; }
};

class Snake : public Animal
{
public:
	Snake() { snek(); }
	Snake(string _gender, bool inNout) : Animal(_gender, inNout) {};

	~Snake() {};
	
	void snek() { cout << "snek snek snek" << endl; }
};


