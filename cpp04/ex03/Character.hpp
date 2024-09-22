/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:09:43 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 20:41:18 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		bool			m_full;
		std::string		m_name;
		AMateria 		**m_inventory;
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		const std::string	&getName() const;
		void 				use(int idx, ICharacter& target);
		void				equip(AMateria *m);
		void				unequip(int idx);
		const AMateria		*returnMateriaIndex(int idx) const;
};

#endif