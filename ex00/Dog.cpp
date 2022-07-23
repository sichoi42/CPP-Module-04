/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:22:25 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 21:49:29 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog Created!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deleted!" << std::endl;
}

Dog::Dog(const Dog& d) : Animal()
{
	_type = d._type;
	std::cout << "Copy Dog Created!" << std::endl;
}

Dog&	Dog::operator=(const Dog& d)
{
	if (this != &d)
	{
		_type = d._type;
		std::cout << "Copy Assigned Cat Created!" << std::endl;
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
