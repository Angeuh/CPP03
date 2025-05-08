#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string.h>
# include <iostream>

class ClapTrap
{
    private :
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;

    public :
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &otherClap);
        ClapTrap & operator =( const ClapTrap &otherClap);

        //getters-setters
        std::string getName();
        int         getHitPoints();
        int         getEnergyPoints();
        int         getAttackDamage();
        void        setName(std::string name);
        void        setHitPoints(int health);
        void        setEnergyPoints(int energy);
        void        setAttackDamage(int Damage);

        //subject functions
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

};


#endif 