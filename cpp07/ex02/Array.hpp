/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:06:19 by pipolint          #+#    #+#             */
/*   Updated: 2024/12/28 14:27:07 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template<class T>
class	Array
{
	private:
		unsigned int	m_size;
		T*				m_array;
	public:
		Array();
		~Array();
		Array(const Array& arr);
		Array	&operator=(const Array& arr);
		Array	&operator[](int index);
		Array(unsigned int n);
		unsigned int	size(void) const;
};

# include "Array.tpp"

#endif