/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:00:28 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/10 19:20:19 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->Name = "DiamondTrap";
	
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << BLUE << "Default constructor for DiamondTrap was called" << RESET << std::endl;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor for DiamondTrap " << this->Name << " was called" << RESET << std::endl;
};

DiamondTrap::DiamondTrap(std::string Name)
{
	this->Name = Name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << CYAN << "Parameterized constructor for DiamondTrap " << this->Name << " was called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	this->Name = obj.Name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << CYAN << "Copy constructor for DiamondTrap " << this->Name << " was called" << RESET << std::endl;
};

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	this->Name = obj.Name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << CYAN << "Copy assignment operation for DiamondTrap " << this->Name << " was called" << RESET << std::endl;
	return *this;
};

void	whoAmI(void)
{
	;
};
