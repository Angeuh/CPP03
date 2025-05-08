
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

    std::cout << "\n Tests for ScavTrap - " << std::endl;
    // test for ScavTrap
    ScavTrap testScav("Scav");

    testScav.getGuardInfo();
    testScav.guardGate();
    testScav.getGuardInfo();
    testScav.attack("target");
    testScav.takeDamage(1);
    testScav.getHitPoints();
    testScav.beRepaired(1);
    testScav.getHitPoints();
    testScav.setEnergyPoints(0);
    testScav.attack("target");
    testScav.beRepaired(1);
    testScav.setHitPoints(0);
    testScav.attack("target");
    testScav.beRepaired(1);
}