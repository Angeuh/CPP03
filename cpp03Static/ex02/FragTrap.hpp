#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"
# include <string.h>
# include <iostream>

class FragTrap : public ClapTrap
{
    private :


    public :
        FragTrap();
        virtual  ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &otherClap);
        FragTrap & operator =( const FragTrap &otherClap);

        void highFiveGuys(void);

        //getters-setters
        /* std::string getName();
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
        void    beRepaired(unsigned int amount); */

};


#endif 