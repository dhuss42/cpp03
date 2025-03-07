#include "DiamondTrap.hpp"


//---------canonicals------------//

DiamondTrap::DiamondTrap()
{
}

// inside the constructor specifying which variables are inherited from which class
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    hit_points = FragTrap::hit_points;
    nrg_points = ScavTrap::nrg_points;
    attack_dmg = FragTrap::attack_dmg;
    std::cout << "DiamondTrap: " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src), name(src.name)
{
    std::cout << "DiamondTrap: " << name << " created with copy constructor!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
        std::cout << "DiamondTrap: " << name << " assigned with assignment operator!" << std::endl;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: " << name << " deleted!" << std::endl;
}

//----------actions-----------//

void DiamondTrap::whoAmI()
{
    std::cout << "[whoAmI]" << std::endl;
    std::cout << "< DiamondTrap name > : " << name << std::endl;
    std::cout << "< ClapTrap name >    : " << ClapTrap::name << std::endl;
}
