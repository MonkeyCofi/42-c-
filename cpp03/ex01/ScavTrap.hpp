/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:45:32 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/06 17:19:43 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string Name;
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		~ScavTrap();
		ScavTrap(const ScavTrap &ref);
		ScavTrap &operator=(ScavTrap const &ref);

		void	guardGate();		
};

#endif