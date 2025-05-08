
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test = ClapTrap("Trap");

    std::cout << "\n Tests for ClapTrap - " << std::endl;
    // test for ClapTrap
    test.attack("target");
    test.takeDamage(1);
    test.getHitPoints();
    test.beRepaired(1);
    test.getHitPoints();
    test.setEnergyPoints(0);
    test.attack("target");
    test.beRepaired(1);
    test.setHitPoints(0);
    test.attack("target");
    test.beRepaired(1);
}