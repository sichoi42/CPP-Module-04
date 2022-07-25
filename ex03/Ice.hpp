/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:46:55 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:35:49 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	_name;

	public:
		Ice();
		~Ice();
		Ice(const Ice& ice);

		Ice&		operator=(const Ice& ice);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
