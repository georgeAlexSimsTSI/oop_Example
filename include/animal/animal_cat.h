#ifndef ANIMAL_CAT_H
#define ANIMAL_CAT_H

#include "animal.h"

class animalCat : public animal
{
public:
    animalCat();
    animalCat(string name);
    virtual ~animalCat();
    void play();
    // void makeNoise();
};

#endif