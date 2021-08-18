#include <iostream>
#include <math.h>
#include "NameGenerator.h"
#include "BaseEntity.h"

int main()
{
    std::cout << "Generating 10 Random Names:" << std::endl;
    NameGenerator* nameGen = new NameGenerator();
    for(int i = 0; i < 10; i++)
    {
        std::cout << nameGen->generateName(6) << std::endl;
    }

    BaseEntity* player = new BaseEntity();
    player->printStats();
    player->gainHealth(35);
    player->printStats();
    player->takeDamage(95);
    player->printStats();
    player->takeDamage(45);
    player->printStats();

    return 0;
}