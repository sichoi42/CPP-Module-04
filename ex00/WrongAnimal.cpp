/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:03:28 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 15:30:11 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Created!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deleted!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa)
{
	_type = wa._type;
	std::cout << "Copy WrongAnimal Created!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wa)
{
	if (this != &wa)
	{
		_type = wa._type;
		std::cout << "Copy Assigned WrongAnimal Created!" << std::endl;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
}
