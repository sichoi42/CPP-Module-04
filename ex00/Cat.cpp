/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:29:31 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 21:38:25 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat Created!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deleted!" << std::endl;
}

Cat::Cat(const Cat& c)
{
	_type = c._type;
	std::cout << "Copy Cat Created!" << std::endl;
}

Cat&	Cat::operator=(const Cat& c)
{
	if (this != &c)
	{
		_type = c._type;
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
