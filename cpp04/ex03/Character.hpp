/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:09:43 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/21 21:53:17 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		AMateria *m_inventory;
		std::string m_name;
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		const std::string	&getName() const;
};

#endif