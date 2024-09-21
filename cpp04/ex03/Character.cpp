/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:38:45 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 22:22:35 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->m_name = name;
	this->m_inventory = NULL;
};

Character::Character()
{
	this->m_name = "Cloud";
	this->m_inventory = NULL;
}

Character::Character(const Character &obj)
{
	this->m_name = obj.m_name;
	//this->m_inventory = new AMateria(obj.m_inventory);
	this->m_inventory = obj.m_inventory;
}

Character::~Character()
{
	if (m_inventory != NULL)
		delete m_inventory;
	std::cout << "Character destructor was called for " << this->getName() << std::endl;
};

const std::string	&Character::getName() const
{
	return (this->m_name);
}