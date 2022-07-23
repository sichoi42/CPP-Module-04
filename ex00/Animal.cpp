/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:27:25 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 21:32:43 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Created!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Deleted!" << std::endl;
}

Animal::Animal(const Animal& a)
{
	_type = a._type;
	std::cout << "Copy Animal Created!" << std::endl;
}

Animal&	Animal::operator=(const Animal& a)
{
	if (this != &a)
	{
		_type = a._type;
		std::cout << "Copy Assigned Animal Created!" << std::endl;
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound!" << std::endl;
}
