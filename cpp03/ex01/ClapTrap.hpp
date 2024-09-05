/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:50:29 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/05 19:16:01 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <iomanip>

class ClapTrap
{
	private:
		std::string Name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &ref);
		ClapTrap 	&operator=(ClapTrap const &obj);
	
		std::string	getName();
		int			getDamage();
		void		setName(std::string name);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif