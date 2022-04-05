#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class animal
{
protected:
    string name;
    string breedName;
    string species;
    string noise;
    unsigned short numberOfLimbs;

public:
    animal();
    animal(string name);
    animal(string species, int numberOfLimbs);
    animal(string species, string name, int numberOfLimbs);
    animal(string species, string name, string sound, int numberOfLimbs);
    virtual ~animal();
    virtual void play() = 0; // makes it purely virtual which requires derived classes to implement it
    virtual void makeNoise();
};

#endif