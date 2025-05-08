
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Default constructor for Frag called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called for Frag on " << this->name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "constructor for Frag called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &otherClap) : ClapTrap(otherClap)
{
    std::cout << "Copy constructor for Frag called" << std::endl;
    this->name = otherClap.name;
    this->HitPoints = otherClap.HitPoints;
    this->EnergyPoints = otherClap.EnergyPoints;
    this->AttackDamage = otherClap.AttackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << ": High Five guys !\n*Clap*\nNice one~." << std::endl;
}