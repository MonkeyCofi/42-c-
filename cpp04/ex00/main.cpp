/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:28:24 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 12:32:05 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	*animal = new Animal();
	Animal	*cat = new Cat();
	Animal	*dog = new Dog();
	
	std::cout << "Amimal pointer is of type " << animal->getType() << std::endl;
	std::cout << "Cat pointer is of type " << cat->getType() << std::endl;
	std::cout << "Dog pointer is of type " << dog->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;
	delete animal;
}