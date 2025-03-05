
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("trappy");
    std::cout << "name: " << clap.getName() << std::endl;
    std::cout << "hit_points: " << clap.getHitPoints() << std::endl;
    std::cout << "nrg_points: " << clap.getNrgPoints() << std::endl;
    std::cout << "attack_dmg: " << clap.getAttackDmg() << std::endl;

    clap.attack("dummy");
    clap.takeDamage(5);
    clap.beRepaired(5);
    clap.setNrgPoints(0);
    clap.attack("dummy");
    clap.beRepaired(5);
    clap.takeDamage(10);
    clap.setNrgPoints(10);
    clap.attack("dummy");
    clap.beRepaired(5);

    return (0);
}