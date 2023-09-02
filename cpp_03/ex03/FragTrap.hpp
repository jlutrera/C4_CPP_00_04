/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:33:38 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 12:40:00 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#  define FRAGTRAP_HPP

#  include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		~FragTrap();
		FragTrap( std::string name );
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& rhs);

		void highFivesGuys( void );

	protected:
	    unsigned int    _FraghitPoints;
        unsigned int    _FragenergyPoints;
        unsigned int    _FragattackDamage;
};

#endif