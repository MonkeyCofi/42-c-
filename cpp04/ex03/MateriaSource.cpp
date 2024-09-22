/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:02:15 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 21:07:06 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->m_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		m_materias[i] = NULL;
};

MateriaSource::~MateriaSource()
{
	if (this->m_materias)
	{
		for (int i = 0; i < 4; i++)
			delete m_materias[i];
		delete [] m_materias;
	}
	std::cout << "Destructor for MateriaSource was called" << std::endl;
};

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	this->m_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		m_materias[i] = obj.m_materias[i].clone();
};

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	;
};

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (m_materias[i] != NULL)
		i++;
	m_materias[i] = m;
};

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	int i = 0;
	while (m_materias[i] != NULL)
	{
		if (m_materias[i]->getType() != type)
			break;
		AMateria *newMateria = m_materias[i]->clone();
		return (newMateria);
	}
	return (0);
};
