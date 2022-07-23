/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:06:28 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 19:54:01 by sichoi           ###   ########.fr       */
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

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow~~" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (_type);
}
