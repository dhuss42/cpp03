
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("fraggy");
    FragTrap frag2(frag);
    FragTrap frag3("peter");
    frag = frag3; 
    std::cout << std::endl;

    std::cout << "name: " << frag.getName() << std::endl;
    std::cout << "hit points: " << frag.getHitPoints() << std::endl;
    std::cout << "energy points: " << frag.getNrgPoints() << std::endl;
    std::cout << "attack damage: " << frag.getAttackDmg() << std::endl;
    std::cout << std::endl;

    std::cout << "name: " << frag2.getName() << std::endl;
    std::cout << "hit points: " << frag2.getHitPoints() << std::endl;
    std::cout << "energy points: " << frag2.getNrgPoints() << std::endl;
    std::cout << "attack damage: " << frag2.getAttackDmg() << std::endl;
    std::cout << std::endl;

    frag.highFivesGuys();
    frag.attack("dummy");
    frag.beRepaired(10);
    std::cout << std::endl;

    frag.setNrgPoints(0);
    frag.attack("dummy");
    frag.beRepaired(5);
    frag.setNrgPoints(10);
    std::cout << std::endl;

    frag.takeDamage(110);
    frag.beRepaired(1);
    frag.attack("dummy");
    std::cout << std::endl;
    return (0);
}