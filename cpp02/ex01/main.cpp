/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:42:20 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/15 19:47:56 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	//Fixed	a;
	//Fixed	b(a);
	//Fixed	c;
	
	//c = b;

	//std::cout << a.getRawBits() << std::endl;
	//std::cout << b.getRawBits() << std::endl;
	//std::cout << c.getRawBits() << std::endl;
	// 0110.1101
	//.8125

	Fixed a;
	a = Fixed(1234.4321f);
	std::cout << "a is: " << a << std::endl;
}