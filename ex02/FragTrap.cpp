
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{   
    std::cout << "FragTrap: " << name << " created!" << std::endl;
    hit_points = 100;
    nrg_points = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src.name)
{
    hit_points = src.hit_points;
    nrg_points = src.nrg_points;
    attack_dmg = src.attack_dmg;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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