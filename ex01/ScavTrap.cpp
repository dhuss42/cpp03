
#include "ScavTrap.hpp"

//---------canonicals------------//

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: " << name << " created!" << std::endl;
    hit_points = 100;
    nrg_points = 50;
    attack_dmg = 20;
}

// calling ClapTraps copy constructor
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
}

// calling ClapTraps assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
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
