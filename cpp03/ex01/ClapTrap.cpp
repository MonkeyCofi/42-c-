/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:57:49 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/06 17:57:39 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << CYAN <<  "Parameterized constructor for ClapTrap " << this->Name << " was called" << RESET << std::endl;
};

ClapTrap::ClapTrap(std::string Name, int hit_points, int energy_points, int attack_damage)
{
	this->Name = Name;
	this->hit_points = hit_points;
	this->energy_points = energy_points;
	this->attack_damage = attack_damage;	
	std::cout << CYAN << "Inherited parameterized constructor for ClapTrap " << this->Name <<  " was called" << RESET << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	this->Name = ref.Name;
	this->hit_points = ref.hit_points;
	this->energy_points = ref.energy_points;
	this->attack_damage = ref.attack_damage;
	std::cout << YELLOW <<  "Copy constructor for ClapTrap " << this->Name << " was called" << RESET << std::endl;
}

ClapTrap::ClapTrap()
{
	this->Name = "Claptrap";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << BLUE << "Default constructor was called" << RESET << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	this->Name = obj.Name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "Copy assignment operator for ClapTrap " << this->Name << " was called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED <<  "Destructor for ClapTrap " << Name << " was called" << RESET << std::endl;
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

int	ClapTrap::getEnergyPoints()
{
	return (this->energy_points);
}