/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:24:15 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 22:17:10 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		virtual ~Cat();
		explicit Cat(const Cat& c);

		Cat&		operator=(const Cat& c);
		void		makeSound(void) const;
		std::string	getType(void) const;
		Brain		*getBrain(void) const;
};

#endif
