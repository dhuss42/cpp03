/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:51:13 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 09:13:27 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clap("trappy");
	ClapTrap	clap2(clap);
	ClapTrap	clap3("crappy");

	clap = clap3;
	std::cout << "\n< clap > " << std::endl;
	std::cout << "name: " << clap.getName() << std::endl;
	std::cout << "hit_points: " << clap.getHitPoints() << std::endl;
	std::cout << "nrg_points: " << clap.getNrgPoints() << std::endl;
	std::cout << "attack_dmg: " << clap.getAttackDmg() << std::endl;

	std::cout << "\n< clap2 > " << std::endl;
	std::cout << "name: " << clap2.getName() << std::endl;
	std::cout << "hit_points: " << clap2.getHitPoints() << std::endl;
	std::cout << "nrg_points: " << clap2.getNrgPoints() << std::endl;
	std::cout << "attack_dmg: " << clap2.getAttackDmg() << std::endl;
	std::cout << std::endl;

	clap.attack("dummy");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.setNrgPoints(0);
	clap.attack("dummy");
	clap.beRepaired(5);
	clap.takeDamage(10);
	clap.setNrgPoints(10);
	clap.attack("dummy");
	clap.beRepaired(5);

	return (0);
}