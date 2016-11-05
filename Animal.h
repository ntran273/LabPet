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

};

class Dog : public Animal
{
public:
    Dog() {};
    Dog(string _gender, bool inNout) : Animal(_gender, inNout)
    {
        if(inNout == 1)
            cout << "Indoor";
        else
            cout << "Outdoor";
    };

    ~Dog() {};

    virtual void action() { cout << "Gru Gru" << endl; }
    void eat_pop() { cout << "Yum" << endl; }
};


class Cat : public Animal
{
public:
    Cat() {};
    Cat(string _gender, bool inNout) : Animal(_gender, inNout){
            if(inNout == 1)
                cout << "Indoor";
            else
                cout << "Outdoor";

    };
    ~Cat() {};

    virtual void action() { cout << "Meow Meow" << endl; }
    void knock_shit_off_table() { cout << "Maintain Eye Contact. Assert Dominance" << endl; }
};

class Snake : public Animal
{
public:
    Snake() {};
    Snake(string _gender, bool inNout) : Animal(_gender, inNout)
    {
        if(inNout == 1)
            cout << "Indoor";
        else
            cout << "Outdoor";
    };

    ~Snake() {};
    
    virtual void action() { cout << "Bite Bite" << endl; }
    void snek() { cout << "snek snek snek" << endl; }
};
