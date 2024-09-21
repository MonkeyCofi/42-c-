/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:21:25 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 22:33:28 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	;
};

Ice::~Ice()
{
	;
};

Ice::Ice(const Ice &obj) : AMateria("ice")
{
	this->m_type = obj.m_type;
};

Ice	&Ice::operator=(const Ice &obj)
{
	this->m_type = obj.m_type;
	return (*this);
};

const std::string	&Ice::getType() const
{
	return (this->m_type);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
