/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:11:29 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/07 20:16:11 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	;
};

FragTrap::~FragTrap();
{
	std::cout << RED <<  "Destructor for FragTrap " << Name << " was called" << RESET << std::endl;
};

FragTrap::FragTrap(const FragTrap const &obj);
{
	;
};

FragTrap FragTrap::&operator=(const FragTrap const &obj);
{
	;
};