/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:53:45 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 16:30:13 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->m_type = "Unknown";
}

AMateria::AMateria(std::string const &type)
{
	this->m_type = type;
};

AMateria::~AMateria()
{
	std::cout << "AMateria's destructor was called" << std::endl;
};

const std::string	&AMateria::getType() const
{
	return (this->m_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Unable to use Materia on " << target.getName() << " due to it being non-type" << std::endl;
}