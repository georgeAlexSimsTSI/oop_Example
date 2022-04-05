#ifndef variadicAdder_h
#define variadicAdder_h

#include <string>
#include <cstdarg>
using std::string;

// first num is the number of arguments
string variadicAdder(int num_of_args, ...);

#endif