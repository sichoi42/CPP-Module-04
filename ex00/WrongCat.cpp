/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:06:28 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 15:31:39 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat Created!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deleted!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wc)
{
	_type = wc._type;
	std::cout << "Copy WrongCat Created!" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& wc)
{
	if (this != &wc)
	{
		_type = wc._type;
		std::cout << "Copy Assigned WrongCat Created!" << std::endl;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow~~" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (_type);
}
