
#include "../include/car/car.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    system("cls");
    model carModel;
    carModel.brand = "Generic";
    carModel.engineModel = "Good";
    carModel.fuelType = "Gasoline";
    carModel.numberOfDoors = 4;
    colour carColour;
    carColour.rgb[0] = 255.0f;
    carColour.rgb[1] = 0.0f;
    carColour.rgb[2] = 0.0f;
    car testCar = car(carColour, carModel, "FAKE REGISTRATION NUMBER");
    // boot
    cout << testCar.bootStatus() << endl;
    testCar.openBoot();
    cout << testCar.bootStatus() << endl;
    testCar.closeBoot();
    cout << testCar.bootStatus() << endl;

    // doors, 4
    cout << testCar.doorStatus() << endl;
    testCar.closeDoor(1);
    testCar.closeDoor(4);
    cout << testCar.doorStatus() << endl;

    // engine
    cout << testCar.engineStatus() << endl;
    testCar.startEngine();
    cout << testCar.engineStatus() << endl;

    return 0;
}