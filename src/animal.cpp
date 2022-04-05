#include "../include/animal/animal.h"

animal::animal()
{
    breedName = "N/A", name = breedName, species = name, noise = species;
    numberOfLimbs = 0;
    cout << "Animal base class default constructor" << endl;
}

animal::~animal()
{
    cout << "animal deconstructed and is sent to the farm" << endl;
}

animal::animal(string name) : animal()
{
    cout << "Animal name constructor" << endl;
    this->name = name;
}

animal::animal(string species, int numberOfLimbs)
{
    cout << "animal 2 input constructor " << endl;
    this->species = species;
    this->numberOfLimbs = numberOfLimbs;
}

animal::animal(string species, string name, int numberOfLimbs) : animal(species, numberOfLimbs)
{
    cout << "animal 3 input constructor " << endl;
    this->name = name;
}

animal::animal(string species, string name, string sound, int numberOfLimbs) : animal(species, name, numberOfLimbs)
{
    cout << "animal 4 input constructor " << endl;
    this->noise = sound;
}

void animal::makeNoise()
{
    cout << this->noise << endl;
}