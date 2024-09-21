/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:13:17 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 22:23:14 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	Ice();
	~Ice();
	Ice(const Ice &obj);
	Ice	&operator=(const Ice &obj);
	std::string	getType();
	void		use(ICharacter &target);
	AMateria	*clone() const = 0;
};

#endif