/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:22:25 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 16:58:11 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(NULL)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << GREEN << "Dog Created!" << RESET << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Dog Deleted!" << RESET << std::endl;
}

Dog::Dog(const Dog& d) : Animal(), _brain(NULL)
{
	_type = d._type;
	_brain = new Brain(*d._brain);
	std::cout << GREEN << "Copy Dog Created!"<< RESET << std::endl;
}

Dog&	Dog::operator=(const Dog& d)
{
	if (this != &d)
	{
		_type = d._type;
		_brain = new Brain(*d._brain);
		std::cout << GREEN << "Copy Assigned Dog Created!"<< RESET << std::endl;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!!" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (_type);
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}
