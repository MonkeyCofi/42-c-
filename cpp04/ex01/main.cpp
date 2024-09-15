/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:28:24 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/15 12:30:02 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *animals = new Animal[100];
	int i = 0;
	for (; i < 50; i++)
		animals[i] = Cat();
	for (; i < 100; i++)
		animals[i] = Dog();
	
}