/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:35:51 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 22:29:41 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	Cure();
	~Cure();
	Cure(const Cure &obj);
	Cure	&operator=(const Cure &obj);
	const std::string	&getType() const;
	void		use(ICharacter &target);
	AMateria	*clone() const;
};

#endif
