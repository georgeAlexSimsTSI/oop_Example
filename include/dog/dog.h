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
    int barkVolume;

public:
    dog();  // constructor
    ~dog(); // destructor

    void bark(); // output Bark Bark Bark
    void run();  // output *Pant Pant * <running noises>

    // bog standard setters
    void setBreedName(string breed);
    void setFurColour(string colour);
    void setBarkVolume(int volume);
    // boilerplate getters
    string getBreedName();
    string getFurColour();
    int getBarkVolume();
};