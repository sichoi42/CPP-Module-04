/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:13:41 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:51:43 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type)
{
	std::cout << GREEN << "AMateria Created!" << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << RED << "AMateria Deleted!" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& am)
{
	_type = am._type;
	std::cout << GREEN << "Copy AMateria Created!" << RESET << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& am)
{
	if (this != &am)
	{
		_type = am._type;
		std::cout << GREEN << "Copy Assigned AMateria Created!" << RESET << std::endl;
	}
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << RED << "Warning You'd better use 'use' function in Materia!" << RESET << std::endl;
}

