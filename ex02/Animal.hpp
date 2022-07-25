/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:23:19 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 17:09:39 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		virtual ~Animal();
		explicit Animal(const Animal& a);

		Animal&	operator=(const Animal& a);
		virtual std::string	getType(void) const = 0;
		virtual void		makeSound(void) const = 0;
};

#endif
