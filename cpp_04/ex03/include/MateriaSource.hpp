/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:56 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:40:49 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#  define MATERIASOURCE_HPP

#  include "../interface/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource & hrs);
		MateriaSource(const MateriaSource & hrs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		void printMaterias();

	private:
		AMateria* _storedMaterias[4];
};

#endif
