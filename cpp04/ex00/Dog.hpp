/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:23:55 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 11:21:11 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(std::string type);
		Dog(const Dog &obj);
		Dog	&operator=(const Dog &obj);
		void	makeSound();
};

#endif