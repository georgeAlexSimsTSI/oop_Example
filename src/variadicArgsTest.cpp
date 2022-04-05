#include <string>
#include <cstdarg>
#include "../include/variadicAdder/variadicAdder.h"

using std::string;

string variadicAdder(int num_of_args, ...)
{
    string str = "";
    int sum = 0, tmp;
    va_list valist;
    va_start(valist, num_of_args); // initialize list to start at args
    for (int i = 0; i < num_of_args; ++i)
    {
        tmp = va_arg(valist, int);
        str += " " + std::to_string(tmp) + " ";
        sum += tmp;
    }
    va_end(valist);
    str += "\nSum: " + std::to_string(sum);
    return str;
}

// template max function
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
T myAdd(T x, T y)
{
    return x + y;
}

// bubble sort template
// https://www.geeksforgeeks.org/templates-cpp/
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = n - 1; i < j; --j)
        {
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
        }
    }
}