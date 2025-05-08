
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "\nTests for DiamondTrap - " << std::endl;
    
    DiamondTrap testDiamond("Diamond");
    testDiamond.whoAmI();
    std::cout << testDiamond.getHitPoint() << std::endl;
    std::cout << testDiamond.getEnergyPoints() << std::endl;
    std::cout << testDiamond.getAttackDamage() << std::endl;
    testDiamond.attack("target");
    testDiamond.takeDamage(1);
    testDiamond.getHitPoints();
    testDiamond.beRepaired(1);
    testDiamond.getHitPoints();
    testDiamond.setEnergyPoints(0);
    testDiamond.attack("target");
    testDiamond.beRepaired(1);
    testDiamond.setHitPoints(0);
    testDiamond.attack("target");
    testDiamond.beRepaired(1);

    /* ClapTrap test = ClapTrap("Trap");

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

    std::cout << "\n Tests for FragTrap - " << std::endl;
    // test for FragTrap
    FragTrap testFrag("Frag");

    testFrag.attack("target");
    testFrag.takeDamage(1);
    testFrag.getHitPoints();
    testFrag.beRepaired(1);
    testFrag.getHitPoints();
    testFrag.setEnergyPoints(0);
    testFrag.attack("target");
    testFrag.beRepaired(1);
    testFrag.setHitPoints(0);
    testFrag.attack("target");
    testFrag.beRepaired(1);
    testFrag.highFiveGuys(); 
    
    return 0;
    */
}