/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:58:31 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 18:58:00 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	;
};

Cure::~Cure()
{
	;
};

Cure::Cure(const Cure &obj) : AMateria("ice")
{
	;
};

Cure	&Cure::operator=(const Cure &obj)
{
	return (*this);
};

std::string	Cure::getType()
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