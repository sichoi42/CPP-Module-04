/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:21:16 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 20:34:03 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& d);

		Dog&		operator=(const Dog& d);
		void		makeSound(void) const;
		std::string	getType(void) const;
		Brain		*getBrain(void) const;
};

#endif
