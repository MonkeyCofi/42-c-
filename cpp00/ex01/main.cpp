/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:40:14 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/25 21:34:51 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string input;
	PhoneBook	phonebook;
	Contact		contact;
	
	while (1)
	{
		std::cout << "Possible operations: ADD SEARCH EXIT" << std::endl;
		std::cout << "Enter Operation: ";
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact(contact);
		if (input == "EXIT")
			break ;
	}
}