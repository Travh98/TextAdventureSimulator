#include "BaseEntity.h"

BaseEntity::BaseEntity()
    : m_health{100}, m_isAlive{true}
{

}

int BaseEntity::getHealth()
{
    return m_health;
}

void BaseEntity::takeDamage(int damage)
{
    m_health = m_health - damage;
    BaseEntity::checkIfAlive();
}

void BaseEntity::gainHealth(int heal)
{
    m_health = m_health + heal;
}

bool BaseEntity::getIsAlive()
{
    return m_isAlive;
}