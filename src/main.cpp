
#include "../include/car/car.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    model carModel;
    carModel.brand = "Generic";
    carModel.engineModel = "Good";
    carModel.fuelType = "Gasoline";
    colour carColour;
    carColour.rgb[0] = 255.0f;
    carColour.rgb[1] = 0.0f;
    carColour.rgb[2] = 0.0f;
    car testCar = car(carColour, carModel, "FAKE REGISTRATION NUMBER");

    return 0;
}