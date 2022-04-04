#include "colour.h"
#include "model.h"

#include <string>
#include <stdexcept>
using std::string;

class car
{
    colour carColour;
    model carModel;
    string registrationNumber;
    bool *doors; // if each door is open or not, from left to right then from front to back
    bool boot;   // boot opened
    bool engine; // engine on
    bool locked; // car locked
    bool lights;

public:
    car(colour carColour, model carModel, string regiNumber);
    ~car();
    void openDoor(int doorNum);
    void closeDoor(int doorNum);
    string doorStatus();
    void openBoot();
    void closeBoot();
    string bootStatus();
    string getModelDetails();
    void startEngine();
    void stopEngine();
    string engineStatus();
    void lockCar();
    void unlockCar();
    string lockStatus();
};