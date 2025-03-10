/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:52:35 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 09:25:41 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//---------canonicals------------//

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
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
	std::cout << "ScavTrap: " << name << " created with copy constructor!" << std::endl;
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

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "[ScavTrap]";
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << name << " is now in Gate keeper mode" << std::endl;
}
