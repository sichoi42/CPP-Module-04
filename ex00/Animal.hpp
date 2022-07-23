/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:23:19 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 22:14:48 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		virtual ~Animal();
		explicit Animal(const Animal& a);

		Animal&	operator=(const Animal& a);
		virtual std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif
