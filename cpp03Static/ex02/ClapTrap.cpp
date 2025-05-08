
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called on " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &otherClap)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = otherClap.name;
    this->HitPoints = otherClap.HitPoints;
    this->EnergyPoints = otherClap.EnergyPoints;
    this->AttackDamage = otherClap.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this !=&other)
    {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getHitPoints()
{
    return (this->HitPoints);
}

int ClapTrap::getEnergyPoints()
{
    return (this->EnergyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->AttackDamage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int health)
{
    this->HitPoints = health;
}

void ClapTrap::setEnergyPoints(int energy)
{
    this->EnergyPoints = energy;
}

void ClapTrap::setAttackDamage(int damage)
{
    this->AttackDamage = damage;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->HitPoints != 0)
    {
        if (this->EnergyPoints >= 1)
        {
            std::cout << this->name << " hit " << target << " for " << this->AttackDamage << " damage !" << std::endl;
            this->EnergyPoints--;
        }
        else
            std::cout << this->name << " doesnt have enought energyPoints ! " << std::endl;
    }
    else
        std::cout << this->name << " has no hitPoints, basically dead." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints = this->HitPoints - amount;
    std::cout << this->name <<  " loses " << amount << "hitPoints.." << std::endl;

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints != 0)
    {
        if ((unsigned int)this->EnergyPoints >= amount)
        {
            this->EnergyPoints = this->EnergyPoints + amount;
            std::cout << this->name <<  " heals " << amount << "hitPoints." << std::endl;
        }
        else
            std::cout << this->name << " doesnt have enought energyPoints ! " << std::endl;

    }
    else
        std::cout << this->name << " has no hitPoints, basically dead." << std::endl;
}
