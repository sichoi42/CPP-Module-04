/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:44:44 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 20:21:14 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : ICharacter(), _name(name)
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		_am[i] = NULL;
	}
	std::cout << GREEN << "Character Created!" << RESET << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i] != NULL)
		{
			delete _am[i];
			_am[i] = NULL;
		}
	}
	std::cout << RED << "Character Deleted!" << RESET << std::endl;
}

Character::Character(const Character& c) : ICharacter()
{
	_name = c._name;
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i] != NULL)
		{
			delete _am[i];
			_am[i] = NULL;
		}
		AMateria *tmp = c.getAMateria(i);
		if (tmp != NULL)
			_am[i] = tmp->clone();
	}
	std::cout << GREEN << "Copy Character Created!" << RESET << std::endl;
}

Character&	Character::operator=(const Character& c)
{
	if (this != &c)
	{
		_name = c._name;
		for (int i = 0; i < MAX_SLOT; ++i)
		{
			if (_am[i] != NULL)
			{
				delete _am[i];
				_am[i] = NULL;
			}
			AMateria *tmp = c.getAMateria(i);
			if (tmp != NULL)
				_am[i] = tmp->clone();
		}
		std::cout << GREEN << "Copy Assigned Character Created!" << RESET << std::endl;
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (_name);
}

AMateria	*Character::getAMateria(const int idx) const
{
	if (idx >= 0 && idx < MAX_SLOT)
		return (_am[idx]);
	return (NULL);
}

void	Character::equip(AMateria *am)
{
	for (int i = 0; i < MAX_SLOT; ++i)
	{
		if (_am[i] == NULL)
		{
			_am[i] = am;
			std::cout << "Equip " << _am[i]->getType() << std::endl;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_SLOT)
	{
		if (_am[idx] != NULL)
		{
			std::cout << "Unequip " << _am[idx]->getType() << std::endl;
			_am[idx] = NULL;
		}
		else
			std::cout << RED << "Warning!! no such Materia!" << RESET << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < MAX_SLOT)
	{
		if (_am[idx] != NULL)
			_am[idx]->use(target);
		else
			std::cout << RED << "Warning!! no such Materia!" << RESET << std::endl;
	}
}
