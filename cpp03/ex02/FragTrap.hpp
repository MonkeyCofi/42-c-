/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:06:07 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/07 20:10:43 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
		std::string Name;
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap const &obj);
		FragTrap &operator=(const FragTrap const &obj);
};

#endif
