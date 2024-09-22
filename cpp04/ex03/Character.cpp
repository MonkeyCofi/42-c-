/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:38:45 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 20:44:06 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->m_name = name;
	this->m_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
	this->m_full = 0;
};

Character::Character()
{
	this->m_name = "Void";
	this->m_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
	this->m_full = 0;
}

Character::Character(const Character &obj)
{
	this->m_name = obj.m_name;
	this->m_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = obj.m_inventory[i]->clone();
	this->m_full = obj.m_full;
}

Character	&Character::operator=(const Character &obj)
{
	this->m_name = obj.m_name;
	this->m_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = obj.m_inventory[i]->clone();
	this->m_full = obj.m_full;
	return (*this);
}

Character::~Character()
{
	if (m_inventory != NULL)
	{
		for (int i = 0; i < 4; i++)
			delete m_inventory[i];
		delete [] m_inventory;
	}
	std::cout << "Character destructor was called for " << this->getName() << std::endl;
};

const std::string	&Character::getName() const
{
	return (this->m_name);
};

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (m_inventory[i] != NULL)
		i++;
	if (i == 4)
	{
		std::cout << this->getName() << ": Inventory is full" << std::endl;
		m_full = 1;
		return ;
	}
	std::string t = m->getType();
	m_inventory[i] = m->clone();
	t.at(0) = (char)toupper(t.at(0));
	std::cout << this->getName() << " has equipped " << (t == "Ice" ? "an " : "a ") << t << " materia" << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->m_inventory[idx])
		this->m_inventory[idx] = NULL;
	else
	{
		std::cout << this->getName() << ": No Materia equipped at slot " << idx + 1 << std::endl;
		return ;
	}
	std::cout << this->getName() << ": Unequipped materia at index: " << idx << std::endl;
};

void Character::use(int idx, ICharacter& target)
{
	if (this->m_inventory && this->m_inventory[idx])
	{
		//std::cout << "Materia address: " << &this->m_inventory[idx] << std::endl;
		this->m_inventory[idx]->use(target);
	}
	else
		std::cout << this->getName() << ": No materia equipped at slot " << idx + 1 << std::endl;
};

const AMateria	*Character::returnMateriaIndex(int idx) const
{
	if (idx > 3)
	{
		std::cout << "Invalid index for AMateria array" << std::endl;
		return (NULL);
	}
	if (this->m_inventory[idx])
		return (this->m_inventory[idx]);
	std::cout << "AMateria doesn't exist at this index" << std::endl;
	return (NULL);
};