#include "../include/dog/dog.h"

dog::dog()
{
    cout << "Creating a new dog" << endl;
}

dog::~dog()
{
    cout << "Putting an old dog down" << endl;
}

void bark()
{
    cout << "Bark Bark Bark" << endl;
}

void run()
{
    cout << "*Pant Pant * <running noises>" << endl;
}