
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("fraggy");

    std::cout << "name: " << frag.getName() << std::endl;
    std::cout << "hit points: " << frag.getHitPoints() << std::endl;
    std::cout << "energy points: " << frag.getNrgPoints() << std::endl;
    std::cout << "attack damage: " << frag.getAttackDmg() << std::endl;

    frag.highFivesGuys();
    frag.attack("dummy");
    frag.beRepaired(10);

    frag.setNrgPoints(0);
    frag.attack("dummy");
    frag.beRepaired(5);
    frag.setNrgPoints(10);
    
    frag.takeDamage(110);
    frag.beRepaired(1);
    frag.attack("dummy");

    // test copy const and assign operator also for ex01
    return (0);
}