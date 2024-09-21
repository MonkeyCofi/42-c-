/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:20:44 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 18:59:38 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string m_type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		virtual std::string const 	&getType() const;
		virtual AMateria			*clone() const = 0;
		virtual void				use(ICharacter &target);
};

#endif