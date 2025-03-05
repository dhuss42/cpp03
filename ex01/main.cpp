
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("scavy");

    std::cout << "name: " << scav.getName() << std::endl;
    std::cout << "hit points: " << scav.getHitPoints() << std::endl;
    std::cout << "energy points: " << scav.getNrgPoints() << std::endl;
    std::cout << "attack damage: " << scav.getAttackDmg() << std::endl;

    scav.guardGate();
    scav.attack("dummy");
    scav.beRepaired(10);

    scav.setNrgPoints(0);
    scav.attack("dummy");
    scav.beRepaired(5);
    scav.setNrgPoints(10);
    
    scav.takeDamage(110);
    scav.beRepaired(1);
    scav.attack("dummy");
    return (0);
}