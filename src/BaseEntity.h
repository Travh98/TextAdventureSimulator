#ifndef BASEENTITY_H
#define BASEENTITY_H

#include <string>

class BaseEntity
{
    public:
    BaseEntity();
    ~BaseEntity();

    // Setters
    void takeDamage(int);
    void gainHealth(int);
    bool calcIfAlive();

    // Getters
    int getHealth();
    bool getIsAlive();    
    
    void printStats();

    private:
    std::string m_name;
    int m_health;
    bool m_isAlive;

};

#endif