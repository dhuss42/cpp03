
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

// using inheritance and protected classes

class ClapTrap
{
    protected: // cannot be accessed from outside the class but in inherited class
        std::string name;
        int         hit_points;
        int         nrg_points;
        int         attack_dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& src);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        std::string getName( void );
        int     getHitPoints( void );
        int     getNrgPoints( void );
        int     getAttackDmg( void );
        void    setNrgPoints(int amount);
};

#endif