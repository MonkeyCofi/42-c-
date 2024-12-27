/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:06:19 by pipolint          #+#    #+#             */
/*   Updated: 2024/12/27 19:21:54 by pipolint         ###   ########.fr       */
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
		Array(unsigned int n);
		unsigned int	size(void) const;
};

# include "Array.tpp"

#endif