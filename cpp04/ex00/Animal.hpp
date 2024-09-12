/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:41:44 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 12:31:31 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal &obj);
		Animal	&operator=(const Animal &obj);
		virtual void		makeSound();
		std::string	getType();
};

#endif