#include <iostream>
#include "Pet.h"
#include "Animal.h"
#include "Plant.h"
#include "Rock.h"

using namespace std;

int main() {
	Pet *a = new Snake();
    static_cast<Snake*>(a)->snek();
	
    return 0;
}