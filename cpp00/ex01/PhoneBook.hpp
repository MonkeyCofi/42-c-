/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:59:33 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/24 10:30:25 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Utils.hpp"
# include <cstdlib>
# include <iomanip>

class PhoneBook
{
	private:
		void	print_top_row() const;
		Contact	contacts[8];
		bool	full;
	public:
		PhoneBook();
		void	add_contact(unsigned short current);
		void	search_contact(unsigned short index);
		void	is_full();
		bool	check_full() const;
};

#endif