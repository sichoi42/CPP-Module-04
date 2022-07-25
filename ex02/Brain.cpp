/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:25:18 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 16:59:38 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain Created!" << RESET << std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Brain Deleted!" << RESET << std::endl;
}

Brain::Brain(const Brain& b)
{
	for (int i = 0; i < 100; ++i)
	{
		_ideas[i] = b._ideas[i];
	}
	std::cout << GREEN << "Copy Brain Created!" << RESET << std::endl;
}

Brain&	Brain::operator=(const Brain& b)
{
	if (this != &b)
	{
		for (int i = 0; i < 100; ++i)
		{
			_ideas[i] = b._ideas[i];
		}
		std::cout << GREEN << "Copy Assigned Brain Created!" << RESET << std::endl;
	}
	return (*this);
}

const std::string	Brain::getIdea(const int i) const
{
	return (_ideas[i]);
}

void	Brain::setIdea(const int i, const std::string s)
{
	_ideas[i] = s;
}
