#ifndef BASEENTITY.H
#define BASEENTITY.H

class BaseEntity
{
    public:
    BaseEntity BaseEntity();
    ~BaseEntity();
    int getHealth();
    void takeDamage(int);
    void gainHealth(int);
    bool getIsAlive();
    bool checkIfAlive();

    private:
    int m_health;
    bool m_isAlive;

}

#endif BASEENTITY.H