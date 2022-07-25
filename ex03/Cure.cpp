/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:51 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:48:02 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure"), _name("cure")
{
	std::cout << GREEN << "Cure Created!" << RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << RED << "Cure Deleted!" << RESET << std::endl;
}

Cure::Cure(const Cure& c) : AMateria("cure")
{
	_name = c._name;
	std::cout << GREEN << "Copy Cure Created!" << RESET << std::endl;
}

Cure&	Cure::operator=(const Cure& c)
{
	if (this != &c)
	{
		_name = c._name;
		std::cout << GREEN << "Copy Cure Created!" << RESET << std::endl;
	}
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
