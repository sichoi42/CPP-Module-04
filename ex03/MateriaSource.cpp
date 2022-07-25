/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:08:43 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 20:14:37 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		_am[i] = NULL;
	}
	std::cout << GREEN << "MateriaSource Created!" << RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i] != NULL)
		{
			delete _am[i];
			_am[i] = NULL;
		}
	}
	std::cout << RED << "MateriaSource Deleted!" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& ms) : IMateriaSource()
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		_am[i] = ms._am[i];
	}
	std::cout << GREEN << "Copy MateriaSource Created!" << RESET << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ms)
{
	if (this != &ms)
	{
		for (int i = 0; i < MAX_SLOT; ++i)
		{
			_am[i] = ms._am[i];
		}
		std::cout << RED << "Copy Assigned MateriaSource Created!" << RESET << std::endl;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *am)
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i] == NULL)
		{
			_am[i] = am;
			std::cout << "Learning " << am->getType() << std::endl;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i])
		{
			if (_am[i]->getType() == type)
				return (_am[i]->clone());
		}
	}
	std::cout << RED << "Waring!! no such Materia!" << RESET << std::endl;
	return (NULL);
}

AMateria	*MateriaSource::getAMateria(const int idx) const
{
	if (idx >= 0 && idx < MAX_SLOT)
		return (_am[idx]);
	return (NULL);
}
