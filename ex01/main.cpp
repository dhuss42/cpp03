/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:52:20 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 08:52:22 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("scavy");
	ScavTrap scav1(scav);
	ScavTrap scav2("harald");
	scav = scav2;
	std::cout << std::endl;

	std::cout << "name: " << scav.getName() << std::endl;
	std::cout << "hit points: " << scav.getHitPoints() << std::endl;
	std::cout << "energy points: " << scav.getNrgPoints() << std::endl;
	std::cout << "attack damage: " << scav.getAttackDmg() << std::endl;
	std::cout << std::endl;

	std::cout << "name: " << scav2.getName() << std::endl;
	std::cout << "hit points: " << scav2.getHitPoints() << std::endl;
	std::cout << "energy points: " << scav2.getNrgPoints() << std::endl;
	std::cout << "attack damage: " << scav2.getAttackDmg() << std::endl;
	std::cout << std::endl;

	scav.guardGate();
	scav.attack("dummy");
	scav.beRepaired(10);
	std::cout << std::endl;

	scav.setNrgPoints(0);
	scav.attack("dummy");
	scav.beRepaired(5);
	scav.setNrgPoints(10);
	std::cout << std::endl;

	scav.takeDamage(110);
	scav.beRepaired(1);
	scav.attack("dummy");
	std::cout << std::endl;
	return (0);
}