/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:24:37 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 12:29:05 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default constructor for Dog was called" << std::endl;
};

Dog::Dog(std::string type)
{
	this->type = type;
	std::cout << "Parameterized constructor for Dog was called" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Destructor for Dog was called" << std::endl;
};

Dog::Dog(const Dog &obj) : Animal(obj)
{
	this->type = obj.type;
	std::cout << "Copy constructor for Dog was called" << std::endl;
};

Dog	&Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	std::cout << "Copy assignment operation for Dog was called" << std::endl;
	return *this;
};

void	Dog::makeSound()
{
	std::cout << "Dog: bark bark bark" << std::endl;
}