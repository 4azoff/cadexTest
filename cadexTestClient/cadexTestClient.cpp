#include <iostream>
#include "cadexTestLib.h"
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int rad = -5, t = 4;
    Circle cl(rad, t);
    rad = 10;
    t = 10;
    cout << cl.GetParamT() << "   " << cl.GetRadius();

}