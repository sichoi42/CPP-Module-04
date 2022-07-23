/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:29:31 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 20:33:39 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(NULL)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Created!" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Deleted!" << std::endl;
}

Cat::Cat(const Cat& c) : Animal(), _brain(NULL)
{
	_type = c._type;
	_brain = new Brain(*c._brain);
	std::cout << "Copy Cat Created!" << std::endl;
}

Cat&	Cat::operator=(const Cat& c)
{
	if (this != &c)
	{
		_type = c._type;
		_brain = new Brain(*c._brain);
		std::cout << "Copy Assigned Cat Created!" << std::endl;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~~" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (_type);
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}
