#include <iostream>
#include <math.h>
#include "NameGenerator.h"

int main()
{
    std::cout << "Generating 10 Random Names:" << std::endl;
    NameGenerator* nameGen = new NameGenerator();
    for(int i = 0; i < 10; i++)
    {
        std::cout << nameGen->generateName(6) << std::endl;
    }
    return 0;
}