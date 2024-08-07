/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:03:55 by pipolint          #+#    #+#             */
/*   Updated: 2024/08/07 14:04:27 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int print(char c)
{
	std::cout << c; 
	return (1);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE BUZZER NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string newStr = std::string(av[i]);
		if (newStr.empty())
			return (1);
		size_t index = -1;
		while (++index < newStr.length() && (newStr.at(index) = (char)toupper(newStr.at(index))));
		std::cout << newStr;
	}
}