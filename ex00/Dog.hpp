/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:21:16 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 22:16:04 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		explicit Dog(const Dog& d);

		Dog&		operator=(const Dog& d);
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
