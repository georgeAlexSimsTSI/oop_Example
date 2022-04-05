#include "../include/car/car.h"

#include <iostream>
using std::cout;
using std::endl;

car::car(colour carColour, model carModel, string regiNumber)
{
    cout << "Constructing car object" << endl;
    this->carColour = carColour;
    this->carModel = carModel;
    this->registrationNumber = regiNumber;
    doors = new bool[carModel.numberOfDoors];
    for (int i = 0; i < carModel.numberOfDoors; ++i)
    {
        doors[i] = 1;
    }
}

car::~car()
{
    cout << "Deconstructing car object" << endl;
    delete[] doors;
}

void car::openDoor(int doorNum) // todo add in error checking
{
    --doorNum;
    doors[doorNum] = true;
}

void car::closeDoor(int doorNum) // todo add in error checking
{
    --doorNum;
    doors[doorNum] = false;
}

string car::doorStatus()
{
    int numOfDoors = this->carModel.numberOfDoors;
    string str = "";
    for (int i = 0; i < numOfDoors; ++i)
    {
        str += "Door " + std::to_string(i + 1) + " is ";
        str += (doors[i] ? "Open" : "Closed");
        str += +" \n";
    }
    return str;
}

void car::openBoot()
{
    boot = 1;
}

void car::closeBoot()
{
    boot = 0;
}

string car::bootStatus()
{
    string str = "";
    str += "The boot is ";
    str += (boot) ? "open" : "closed";
    return str;
}

string car::getModelDetails()
{
    string str = "";
    str += "The car is a " + this->carModel.brand + " with a " + this->carModel.engineModel + " engine";
    return str;
}

void car::startEngine()
{
    engine = 1;
}

void car::stopEngine()
{
    engine = 0;
}

string car::engineStatus()
{
    return (engine) ? "The engine is on" : "The engine is off";
}

void car::lockCar()
{
    locked = 0;
}

void car::unlockCar()
{
    locked = 1;
}

string car::lockStatus()
{
    return (locked) ? "The car is locked" : "The car is unlocked";
}