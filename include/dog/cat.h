#include "dog.h"
#ifndef CAT_H
#define CAT_H

class cat : public dog
{
    bool thumbs;

public:
    cat();
    cat(string name);
    virtual ~cat();
    void bark(); // override;
    void run();  // override;
};

#endif