#include "BaseEntity.h"
#include "NameGenerator.h"
#include <iostream>

BaseEntity::BaseEntity()
    : m_health{100}, m_isAlive{true}
{
    NameGenerator* nameGen = new NameGenerator();
    m_name = nameGen->generateName();
}

int BaseEntity::getHealth()
{
    return m_health;
}

void BaseEntity::takeDamage(int damage)
{
    m_health = m_health - damage;
    m_isAlive = BaseEntity::calcIfAlive();
}

void BaseEntity::gainHealth(int heal)
{
    m_health = m_health + heal;
    m_isAlive = BaseEntity::calcIfAlive();
}

bool BaseEntity::getIsAlive()
{
    return m_isAlive;
}

bool BaseEntity::calcIfAlive()
{
    if(m_health <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void BaseEntity::printStats()
{
    std::cout << "Base Entity: " << m_name << std::endl;
    std::cout << "HP:" << m_health << " Alive:" << ((m_isAlive) ? "Yes" : "No") << std::endl;
}
