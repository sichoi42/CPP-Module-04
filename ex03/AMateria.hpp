/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:13:22 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 19:41:49 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# define MAX_SLOT 4
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

# include <iostream>
class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(const std::string& type);
		virtual ~AMateria();
		AMateria(const AMateria& am);

		AMateria&			operator=(const AMateria& am);
		const std::string&	getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
