#ifndef NAMEGENERATOR_H
#define NAMEGENERATOR_H

#include <string>

class NameGenerator
{
    public:
    NameGenerator();
    ~NameGenerator();
    std::string generateName();
    std::string generateName(int length);
    private:

};

#endif