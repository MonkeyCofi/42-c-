/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:42:20 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/16 18:14:40 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
};

int main(void)
{
	Fixed a;
	a = Fixed(1234.4321f);
	b = Fixed(123);
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
}