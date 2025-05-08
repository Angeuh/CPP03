#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <string.h>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        bool guarding;

    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &otherClap);
        ScavTrap & operator =( const ScavTrap &otherClap);

        void guardGate();

        bool    getGuardInfo();
        void    setGuardInfo(bool value);
        //getters-setters from ClapTrap
        // std::string getName();
        // int         getHitPoints();
        // int         getEnergyPoints();
        // int         getAttackDamage();
        // void        setName(std::string name);
        // void        setHitPoints(int health);
        // void        setEnergyPoints(int energy);
        // void        setAttackDamage(int Damage);

        //subject functions from ClapTrap
        // void    attack(const std::string &target);
        // void    takeDamage(unsigned int amount);
        // void    beRepaired(unsigned int amount);

};


#endif 