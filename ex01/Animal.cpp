/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:27:25 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 16:58:44 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "Animal Created!" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Animal Deleted!" << RESET << std::endl;
}

Animal::Animal(const Animal& a)
{
	_type = a._type;
	std::cout << GREEN << "Copy Animal Created!" << RESET << std::endl;
}

Animal&	Animal::operator=(const Animal& a)
{
	if (this != &a)
	{
		_type = a._type;
		std::cout << GREEN << "Copy Assigned Animal Created!" << RESET << std::endl;
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
