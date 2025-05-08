
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->guarding = false;
    std::cout << "Default constructor for Scav called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for Scav on " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->guarding = false;
    std::cout << "Default constructor for Scav called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &otherClap) : ClapTrap(otherClap)
{
    std::cout << "Copy constructor for Scav called" << std::endl;
    this->name = otherClap.name;
    this->HitPoints = otherClap.HitPoints;
    this->EnergyPoints = otherClap.EnergyPoints;
    this->AttackDamage = otherClap.AttackDamage;
    this->guarding = otherClap.guarding;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this !=&other)
    {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
        this->guarding = other.guarding;
    }
    return *this;
}

void ScavTrap::setGuardInfo(bool value)
{
    this->guarding = value;
}

bool ScavTrap::getGuardInfo()
{
    std::cout << this->name << " guarding value : " << this->guarding << std::endl;
    return (this->guarding);
}

void ScavTrap::guardGate()
{
    this->guarding = true;
    std::cout << this->name << " is now in gate keeper mode." << std::endl;
}
