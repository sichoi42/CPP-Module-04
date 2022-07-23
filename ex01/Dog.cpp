/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:22:25 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 20:40:59 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(NULL)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Created!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deleted!" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(), _brain(NULL)
{
	_type = d._type;
	_brain = new Brain(*d._brain);
	std::cout << "Copy Dog Created!" << std::endl;
}

Dog&	Dog::operator=(const Dog& d)
{
	if (this != &d)
	{
		_type = d._type;
		_brain = new Brain(*d._brain);
		std::cout << "Copy Assigned Dog Created!" << std::endl;
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
