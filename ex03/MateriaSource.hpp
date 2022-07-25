/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:02:53 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 20:10:34 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_am[MAX_SLOT];

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& ms);

		MateriaSource&	operator=(const MateriaSource& ms);
		void			learnMateria(AMateria *am);
		AMateria		*createMateria(const std::string& type);
		AMateria		*getAMateria(const int idx) const;
};

#endif
