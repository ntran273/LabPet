#include <iostream>
#include "Pet.h"
#include "Animal.h"
#include "Plant.h"
#include "Rock.h"

using namespace std;

int main() {
	Pet *a[] = { new Dog, new Cat, new Snake, new Fern, new Cactus, new Fukalite, new Cummingtonite, new Fornacite };
	for (int i = 0; i < 8; i++) {
		a[i]->action();
	}
	
	system("pause");
    return 0;
}