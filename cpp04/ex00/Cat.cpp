/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:58:57 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 12:29:27 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor for Cat class was called" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Destructor for Cat was called" << std::endl;
};

Cat::Cat(std::string type)
{
	this->type = type;
	std::cout << "Parameterized constructor for Cat was called" << std::endl;
};

Cat::Cat(const Cat &obj) : Animal(obj)
{
	this->type = obj.type;
	std::cout << "Copy constructor for Cat was called" << std::endl;
};

Cat	&Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	std::cout << "Copy assigment for Cat was called" << std::endl;
	return *this;
};

void	Cat::makeSound()
{
	std::cout << "Cat: Meow" << std::endl;
};