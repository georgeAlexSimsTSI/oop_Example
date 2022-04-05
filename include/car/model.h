#ifndef MODEL_H
#define MODEL_H
#include <string>
using std::string;

class model
{
public: // will do getters + setters later
    string brand;
    string engineModel;
    string fuelType;
    float mpg;
    float range;
    int numberOfDoors;
    int numberOfWheels;
    int numberOfSeats;
};

#endif