/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:08:56 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/30 12:35:51 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon()
{
	;
};

~Weapon()
{
	;
};

const std::string	Weapon::getType()
{
	return (this->type);
};

void	Weapon::setType(std::string type)
{
	this->type = type;
}
