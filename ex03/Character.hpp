/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:42:20 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 20:02:02 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_am[MAX_SLOT];

	public:
		Character(const std::string name);
		virtual ~Character();
		Character(const Character& c);

		Character&			operator=(const Character& c);
		const std::string&	getName(void) const;
		AMateria			*getAMateria(const int idx) const;
		void				equip(AMateria *am);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
