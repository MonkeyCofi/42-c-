/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:28:03 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/25 21:19:07 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_phoneNumber;
		std::string	m_nickName;
		std::string	m_darkestSecret;
	public:
		// all the setters and getters
		void	setContact();
		void	setNames();
		void	setNumber();
		void	setSecret();
};
