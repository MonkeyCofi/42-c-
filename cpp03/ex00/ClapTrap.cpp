/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:57:49 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/05 19:13:46 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parameterized constructor was called" << std::endl;
	this->Name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy constructor was called" << std::endl;
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor was called" << std::endl;
	this->Name = "Claptrap";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment operator was called" << std::endl;
	this->Name = obj.Name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for ClapTrap " << Name << " was called" << std::endl;
};

std::string	ClapTrap::getName()
{
	return (this->Name);
};

int	ClapTrap::getDamage()
{
	return (this->attack_damage);
};

void	ClapTrap::setName(std::string name)
{
	this->Name = name;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->Name << " attacked " << target << " causing " << attack_damage << " points of pain" << std::endl;
	this->energy_points--;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " has taken " << amount << " of damage" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount << " hit points" << std::endl;
	this->energy_points--;
};