#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src); // not sure here
        ScavTrap& operator=(const ScavTrap& other); // here too
        ~ScavTrap();
        void    attack(const std::string& target);
        void    guardGate();
};


#endif