/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:33:48 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/26 19:31:21 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	m_empty = true;
}

void	Contact::setNonEmpty()
{
	this->m_empty = false;
};

bool	Contact::isEmpty()
{
	return (this->m_empty);
}

void	Contact::setContact()
{
	setNames();
	setNumber();
	setSecret();
	setNonEmpty();
};

void	Contact::print_query(std::string str)
{
	std::cout << "\x1b[33m" << str << "\x1b[0m";
};

int	valid_input(std::string &str, int num_check)
{
	if (str.empty() || str.at(0) == '\0' || str.at(0) == '\t' || str.at(0) == '\n')
		return (0);
	if (std::cin.eof())
		exit(1);
	if (num_check)
	{
		for (int i = 0, len = str.length(); i < len; i++)
		{
			if (!(str.at(i) >= '0' && str.at(i) <= '9'))
			{
				std::cout << "\x1b[31m" << "Number is invalid" << std::endl;
				return (0);
			}
		}
	}
	return (1);
}

void Contact::setNames()
{
	std::string	first;
	std::string	last;
	std::string	nick;

	while (!valid_input(first, 0))
	{
		print_query("Enter first name: ");
		std::getline(std::cin, first);
	}
	m_firstName = first;
	while (!valid_input(last, 0))
	{
		print_query("Enter last name: ");
		std::getline(std::cin, last);
	}
	m_lastName = last;
	while (!valid_input(nick, 0))
	{
		print_query("Enter nickname: ");
		std::getline(std::cin, nick);
	}
	m_nickName = nick;
};

void	Contact::setNumber()
{
	std::string	number;
	while (!valid_input(number, 1))
	{
		print_query("Enter phone number: ");
		std::getline(std::cin, number);
	}
	m_phoneNumber = number;
};

void	Contact::setSecret()
{
	std::string	secret;

	while (!valid_input(secret, 0))
	{
		std::cout << "\x1b[33m" << "Enter " << this->m_firstName << "'s deepest, darkest secret: " << "\x1b[0m";
		std::getline(std::cin, secret);
	}
	m_darkestSecret = secret;
}

std::string	Contact::getFirst() const
{
	return this->m_firstName;
};

std::string Contact::getLast() const
{
	return this->m_lastName;
};

std::string Contact::getNick() const
{
	return this->m_nickName;
};

std::string	Contact::getNumber() const
{
	return this->m_phoneNumber;
};

std::string	Contact::getSecret() const
{
	return this->m_darkestSecret;
};