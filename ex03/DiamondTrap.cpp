/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:55:13 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 13:11:20 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//---------canonicals------------//

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamonTrap default constructor called" << std::endl;
}

// need to use getNrgPoints because FragTrap is inherited last and it overrides the values of ScavTrap
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	this->hit_points = hit_points;
	this->nrg_points = ScavTrap("").getNrgPoints();
	this->attack_dmg = attack_dmg;
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
	std::cout << "< ClapTrap name >	: " << ClapTrap::name << std::endl;
}

//--------getters-&-setters---------------//

std::string	DiamondTrap::getName( void )
{
	return (name);
}

int	DiamondTrap::getHitPoints( void )
{
	return (hit_points);
}

int	DiamondTrap::getNrgPoints( void )
{
	return (nrg_points);
}

int	DiamondTrap::getAttackDmg( void )
{
	return (attack_dmg);
}

void	DiamondTrap::setNrgPoints(int amount)
{
	this->nrg_points = amount;
}
