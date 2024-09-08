/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:39:03 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/08 17:52:39 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string Name;
		FragTrap::hit_points;
		ScavTrap::energy_points;
		FragTrap::attack_damage;
	public:
		DiamondTrap(std::string Name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator(const DiamondTrap &obj);
		void	whoAmI(void);
};

#endif