#include "../include/animal/animal_cat.h"

animalCat::animalCat() : animal("cat", "", "meow", 4)
{
    cout << "Animal cat default constructor" << endl;
}

animalCat::animalCat(string name) : animal("cat", name, "meow", 4)
{
    cout << "Cat Constructor chaining / delegating constructors" << endl;
}

animalCat::~animalCat()
{
    cout << "Cat destructor" << endl;
}

void animalCat::play()
{
    cout << "The cat scratches you " << endl;
}
