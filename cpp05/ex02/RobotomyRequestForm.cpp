/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:42:58 by pipolint          #+#    #+#             */
/*   Updated: 2024/12/19 20:18:27 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm()
{
	;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[31mDestructor for RobotomyRequestForm " \
		<< this->getName() << " was called\n\033[0m";
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): AForm(obj)
{
	;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	(void)obj;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm()
{
	;
}