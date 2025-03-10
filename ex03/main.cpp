/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:55:55 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 10:56:39 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond");
	std::cout << std::endl;
	DiamondTrap diamond2(diamond);
	std::cout << std::endl;
	DiamondTrap diamond3("hans");
	diamond = diamond3;
	std::cout << std::endl;

	std::cout << "name: " << diamond.getName() << std::endl;
	std::cout << "hit points: " << diamond.getHitPoints() << std::endl;
	std::cout << "energy points: " << diamond.getNrgPoints() << std::endl;
	std::cout << "attack damage: " << diamond.getAttackDmg() << std::endl;
	std::cout << std::endl;

	std::cout << "name: " << diamond2.getName() << std::endl;
	std::cout << "hit points: " << diamond2.getHitPoints() << std::endl;
	std::cout << "energy points: " << diamond2.getNrgPoints() << std::endl;
	std::cout << "attack damage: " << diamond2.getAttackDmg() << std::endl;
	std::cout << std::endl;


	diamond.whoAmI();
	diamond2.whoAmI();
	diamond.highFivesGuys();
	diamond.beRepaired(10);
	diamond.attack("dummy");
	std::cout << std::endl;

	diamond.setNrgPoints(0);
	diamond.attack("dummy");
	diamond.beRepaired(5);
	diamond.setNrgPoints(10);
	std::cout << std::endl;

	diamond.takeDamage(110);
	diamond.beRepaired(1);
	diamond.attack("dummy");
	return (0);
}