/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:00:54 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/07 16:27:36 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string input;
	PhoneBook phonebook;

	while (1)
	{
		std::cin >> input;
		if (std::cin.fail() || std::cin.eof())
			return (1);
		if (input == "EXIT")
			break ;
		if (input == "ADD")
			phonebook.AddContact();
		else if (input == "SEARCH")
			phonebook.search();
	}
}