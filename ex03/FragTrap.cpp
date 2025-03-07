
#include "FragTrap.hpp"

//---------canonicals------------//

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{   
    std::cout << "FragTrap: " << name << " created!" << std::endl;
    hit_points = 100;
    nrg_points = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << name << " deleted!" << std::endl; 
}

//--------actions--------//

void    FragTrap::highFivesGuys(void)
{
    std::cout << "[highFivesGuys]" << std::endl;
    std::cout << name << " is making a request for a high five. pls don't leave him hanging" << std::endl;
}
