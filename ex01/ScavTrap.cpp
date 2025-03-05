
#include "ScavTrap.hpp"

//---------canonicals------------//

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: " << name << " created!" << std::endl;
    hit_points = 100;
    nrg_points = 50;
    attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src.name)
{
    hit_points = src.hit_points;
    nrg_points = src.nrg_points;
    attack_dmg = src.attack_dmg;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->attack_dmg = other.attack_dmg;
        this->hit_points = other.hit_points;
        this->nrg_points = other.nrg_points;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: " << name << " deleted!" << std::endl;
}

//--------actions--------//

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "[ScavTrap]";
    ClapTrap::attack(target);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << name << " is now in Gate keeper mode" << std::endl;
}
