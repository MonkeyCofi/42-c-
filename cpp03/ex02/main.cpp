/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:50:01 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/07 19:45:33 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap Joe("Joe");
		ClapTrap Alice("Alice");
		Joe.attack(Alice.getName());
		Alice.takeDamage(Joe.getDamage());
		std::cout << GREEN << "Alice has " << GREEN << Alice.getEnergyPoints() << " energy points" << RESET << std::endl;
		Alice.beRepaired(Joe.getDamage());
		std::cout << GREEN << "Alice has " << Alice.getEnergyPoints() << " energy points" << RESET << std::endl;
		Joe.guardGate();
	}
	{
		ScavTrap	Alan("Alan");
		ScavTrap	Lily("Lily");
		Lily.printStats();
		Alan.attack(Lily.getName());
		Lily.takeDamage(Alan.getDamage());
		Lily.printStats();
	}
	{
		ScavTrap	Zero("Zero");
		ScavTrap	Zero_clone;
		Zero_clone = Zero;
		Zero_clone.setName("Zero's clone");
		Zero_clone.attack(Zero.getName());
		Zero.takeDamage(300);
	}
}