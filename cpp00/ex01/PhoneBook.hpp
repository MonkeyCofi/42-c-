/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:59:33 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/07 22:03:03 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

typedef std::string str;

class Contact
{
	private:
		str FirstName;
		str LastName;
		str NickName;
		str PhoneNumber;
		str DarkestSecret;
};

class PhoneBook
{
	private:
		Contact Contacts[9];
	public:
		PhoneBook(str First_name, str Last_name, str nickname, str Phone_number, str darkest_secret);
};

#endif