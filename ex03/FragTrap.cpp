/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:55:36 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 11:37:21 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//---------canonicals------------//

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap created!" << std::endl;
	hit_points = 100;
	nrg_points = 100;
	attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "FragTrap created with copy constructor!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deleted!" << std::endl;
}

//--------actions--------//

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[highFivesGuys]" << std::endl;
	std::cout << name << " is making a request for a high five. pls don't leave him hanging" << std::endl;
}
