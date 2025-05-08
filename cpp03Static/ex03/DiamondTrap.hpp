#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

	private:
		std::string  name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &other);
		void attack(const std::string &target);
		void whoAmI(void);
        int getHitPoint();
        int getEnergyPoints();
        int getAttackDamage();
};