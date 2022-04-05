
#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class dog
{
private:
    string breedName;
    string furColour;
    string name;
    int barkVolume;

public:
    dog(); // constructor
    dog(string name);
    virtual ~dog(); // destructor

    // virtual keyword is required if we want derived classes to override them when we are doing polymorphism
    virtual void bark(); // output Bark Bark Bark
    virtual void run();  // output *Pant Pant * <running noises>

    // bog standard setters
    void setBreedName(string breed);
    void setFurColour(string colour);
    void setBarkVolume(int volume);
    // boilerplate getters
    string getBreedName();
    string getFurColour();
    string getName();
    int getBarkVolume();
};

#endif
