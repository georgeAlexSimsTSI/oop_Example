
#include "../include/car/car.h"
#include "../include/dog/cat.h"
#include "../include/dog/dog.h"
#include "../include/variadicAdder/variadicAdder.h"
#include "../include/animal/animal.h"
#include "../include/animal/animal_cat.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{

     system("cls");

     cout << endl
          << "Car Tests: " << endl
          << endl;

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

     cout << endl
          << "Dog Tests: " << endl
          << endl;
     dog dog1;
     dog1.run();
     dog1.bark();

     cout << endl
          << "Cat Tests: " << endl
          << endl;
     dog *cat1 = new cat("Tom"); // polymorphism and inheritance example
     cat1->run();
     cat1->bark();
     cout << cat1->getName() << endl;

     cout << endl
          << "Var args test: " << endl
          << endl;

     cout << variadicAdder(9, 1, 2, 3, 4, 5, 6, 7, 8, 9) << endl;
     cout << variadicAdder(3, 1, 10, 1124) << endl;

     cout << endl
          << "Animal polymorphism test " << endl
          << endl;
     animal *animalcat = new animalCat("Tom");
     animalcat->makeNoise();
     animalcat->play();

     delete cat1;
     delete animalcat;
     return 0;
}