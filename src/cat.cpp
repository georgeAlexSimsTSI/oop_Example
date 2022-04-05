#include "../include/dog/cat.h"

cat::cat()
{
    cout << "Creating new cat, dog derived class" << endl;
    thumbs = false;
}

cat::cat(string name) : dog(name)
{
    cout << "Creating new cat, dog derived class, using dog constructor" << endl;
    thumbs = false;
}

cat::~cat()
{
    cout << "Cat deconstructor" << endl;
}

void cat::bark()
{
    cout << "meow hiss or something" << endl;
}

void cat::run()
{
    cout << "*bell jingle*" << endl;
}