/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:36:56 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/01 14:37:38 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I really love extra olives and pepperoni on my XL sized pizza" << std::endl;
};

void	Harl::info(void)
{
	std::cout << "This will print out info" << std::endl;
};

void	Harl::warning(void)
{
	std::cout << "This will print out a warning message" << std::endl;	
};

void	Harl::error(void)
{
	std::cout << "This will be an error" << std::endl;
};

void	Harl::complain(std::string level)
{
	void	(Harl::*complaint[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*complaint[i])();
	}
};