/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:28:24 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/19 20:52:54 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal **animals = new Animal*[20];
	int i = 0;
	for (; i < 10; i++)
		animals[i] = new Cat();
	for (; i < 20; i++)
		animals[i] = new Dog();
	for (i = 0; i < 20; i++)
	{
		std::cout << "animals[" << i << "]: " << animals[i]->getType() << std::endl;
		delete animals[i];
	}
	delete [] animals;
}
