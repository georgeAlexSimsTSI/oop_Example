#include "../include/dog/dog.h"

dog::dog()
{
    cout << "Creating a new dog, the cat base class" << endl;
}

dog::dog(string name)
{
    cout << "Creating a new dog, the cat base class, specialized constructor" << endl;
    this->name = name;
}

dog::~dog()
{
    cout << "Putting an old dog down" << endl;
}

void dog::bark()
{
    cout << "Bark Bark Bark" << endl;
}

void dog::run()
{
    cout << "*Pant Pant * <running noises>" << endl;
}

string dog::getName()
{
    return this->name;
}

string dog::getBreedName()
{
    return this->breedName;
}

string dog::getFurColour()
{
    return this->furColour;
}