/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:35:21 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/31 14:17:20 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weap = NULL;
}

HumanB::HumanB(Weapon *weap, std::string name)
{
	this->weap = weap;
	this->name = name;
};

HumanB::~HumanB()
{
	;
};

void	HumanB::attack()
{
	if (this->weap == NULL)
		std::cout << this->name << " tries to attack" << " with their bare hands" << std::endl;	
	else
		std::cout << this->name << " attacks" << " with their "  << weap->getType() << std::endl;	
};

void	HumanB::pickWeapon(Weapon *weap)
{
	this->weap = weap;
	std::cout << this->name << " has picked up a " << weap->getType() << std::endl;
}
