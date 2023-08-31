/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:20 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:20 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#  define CURE_HPP

#  include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& hrs);
		Cure& operator=(const Cure& hrs);
		AMateria* clone() const;
		void use(ICharacter& target);
	private:

};

#endif