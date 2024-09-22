/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:02:15 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 18:05:03 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->m_materias = new AMateria*[4];
	
};

MateriaSource::~MateriaSource()
{
	;
};

MateriaSource::MateriaSource(const MateriaSource &obj)
{

};

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	;
};
