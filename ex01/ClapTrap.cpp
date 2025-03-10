/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:51:34 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 09:17:50 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//---------canonicals------------//

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "constructor called" << std::endl;
	hit_points = 10;
	nrg_points = 10;
	attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src) : name(src.name), hit_points(src.hit_points), attack_dmg(src.attack_dmg), nrg_points(src.nrg_points)
{
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

//--------actions----------//

void ClapTrap::attack(const std::string& target)
{
	std::cout << "[attack]" << std::endl;
	if (nrg_points > 0 && hit_points > 0)
	{
		nrg_points--;
		std::cout << "\033[35m" << name << " attacks " << target << " causing " << attack_dmg << " points of damage!\033[37m" << std::endl;
		std::cout << "\033[33m" << name << " has " << nrg_points << " energy points left!\033[37m" << std::endl;
	}
   else if (nrg_points <= 0)
		std::cout << "\033[31m" << name << " does not have enough energy points!\033[37m" << std::endl;
	else
		std::cout << "\033[31m" << name << " does not have any hit points!\033[37m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[takeDamage]" << std::endl;
	std::cout << "\033[31m" << name << " was attacked and took " << amount << " points of damage!\033[37m" << std::endl;
	hit_points -= amount;
	if (hit_points <= 0)
		std::cout << "\033[31m" << name << " blacked out!\033[37m" << std::endl;
	else
		std::cout << "\033[34m" << name << " has " << hit_points << " hit points left!\033[37m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[beRepaired]" << std::endl;
	if (nrg_points > 0 && hit_points > 0)
	{
		nrg_points--;
		hit_points += amount;
		std::cout << "\033[32m" << name << " repairs itself and regains " << amount << " hit points!\033[37m" << std::endl;
		std::cout << "\033[34m" << name << " has " << hit_points << " hit points left!\033[37m" << std::endl;
		std::cout << "\033[33m" << name << " has " << nrg_points << " energy points left!\033[37m" << std::endl;
	}
	else if (nrg_points <= 0)
		std::cout << "\033[31m" << name << " does not have enough energy points!\033[37m" << std::endl;
	else
		std::cout << "\033[31m" << name << " does not have any hit points!\033[37m" << std::endl;
}


//--------getters & setters-------------//

std::string ClapTrap::getName( void )
{
	return (this->name);
}

int ClapTrap::getHitPoints( void )
{
	return (this->hit_points);
}

int ClapTrap::getNrgPoints( void )
{
	return (this->nrg_points);
}

int ClapTrap::getAttackDmg( void )
{
	return (this->attack_dmg);
}

void	ClapTrap::setNrgPoints(int amount)
{
	std::cout << "[setNrgPoints]" << std::endl;
	this->nrg_points = amount;
	std::cout << name << "'s energy points were set to " << nrg_points << std::endl;
}
