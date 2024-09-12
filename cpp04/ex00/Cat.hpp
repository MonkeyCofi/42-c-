/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:45:32 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/12 11:20:59 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		override void	makeSound();
};

#endif