#pragma once
#include<iostream>
using namespace std;

class Person {
protected:
	string name;

public:
	string get_Name() { return name; }
	void set_Name(string _name) { name = _name; }
};

class Pet
{
protected:
	string name;
	int age;
	Person owner;

public:
	Pet() {};
	Pet(string _name, int _age, string _owner) { name = _name; age = _age; owner.set_Name(_owner); }
	~Pet() {};

	string getName() { return name; }
	int getAge() { return age; }
	virtual void action() = 0;


};