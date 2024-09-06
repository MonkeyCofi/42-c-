/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:09:37 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/06 18:06:36 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	ClapTrap();
};

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
	this->Name = Name;
	std::cout << CYAN << "Parameterized constructor for ScavTrap " << this->Name << " was called" << RESET << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor for ScavTrap " << this->Name << " was called" << RESET << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	(void)ref;
	std::cout << "Copy constructor for ScavTrap " << this->Name << " was called" << RESET << std::endl;
};

ScavTrap &ScavTrap::operator=(ScavTrap const &ref)
{
	(void)ref;
	std::cout << CYAN << "Copy assignment operator for ScavTrap " << this->Name << " was called" << RESET << std::endl;
	return (*this);
};
