/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:58:31 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 22:29:38 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	;
};

Cure::~Cure()
{
	std::cout << "Destructor for Cure was called" << std::endl;
};

Cure::Cure(const Cure &obj) : AMateria("ice")
{
	this->m_type = obj.m_type;
};

Cure	&Cure::operator=(const Cure &obj)
{
	this->m_type = obj.m_type;
	return (*this);
};

const std::string	&Cure::getType() const
{
	return (this->m_type);
};

AMateria	*Cure::clone() const
{
	return (NULL);
};

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
