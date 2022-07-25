/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:47:14 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:55 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice"), _name("ice")
{
	std::cout << GREEN << "Ice Created!" << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << RED << "Ice Deleted!" << RESET << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria("ice")
{
	_name = ice._name;
	std::cout << GREEN << "Copy Ice Created!" << RESET << std::endl;
}

Ice&	Ice::operator=(const Ice& ice)
{
	if (this != &ice)
	{
		_name = ice._name;
		std::cout << GREEN << "Copy Ice Created!" << RESET << std::endl;
	}
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
