/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:55:24 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/10 11:02:01 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//Diamond problem where two base constructors/destructors are called which causes ambiguties
// -> solution is the virtual keyword

// using keyword for specifying which intherited method of attack the DiamondTrap class is using

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		void	whoAmI();
		using	ScavTrap::attack;
		int		getHitPoints( void );
		int		getNrgPoints( void );
		int		getAttackDmg( void );
		std::string	getName( void );
		void	setNrgPoints(int amount);
};

#endif