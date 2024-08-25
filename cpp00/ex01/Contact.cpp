/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:33:48 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/25 21:26:08 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setContact()
{
	setNames();
	setNumber();
	setSecret();
};

void Contact::setNames()
{
	do
	{
		std::cout << "Enter first name: ";
		std::cin >> m_firstName;
	}
	while (m_firstName.empty());
	std::cout << "Enter last name: ";
	std::cin >> m_lastName;
	std::cout << "Enter nickname: ";
	std::cin >> m_nickName;
};

void	Contact::setNumber()
{
	std::cout << "Enter phone number: ";
	std:: cin >> m_phoneNumber;
};

void	Contact::setSecret()
{
	std::cout << "Ente r" << this->m_firstName << "'s deepest, darkest secret: ";
	std::cin >> m_darkestSecret;
}