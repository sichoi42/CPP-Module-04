/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:58:03 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:35:55 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	_name;

	public:
		Cure();
		~Cure();
		Cure(const Cure& c);

		Cure&	operator=(const Cure& c);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
