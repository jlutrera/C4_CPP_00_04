/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:31 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:31 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#  define ICE_HPP

#  include <iostream>
#  include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice& operator=(const Ice &hrs);
		Ice(const Ice & hrs);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif