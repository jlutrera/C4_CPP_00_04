/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:00:31 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 10:37:29 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap( void );
        virtual ~ClapTrap();
        ClapTrap( std::string name );
        ClapTrap ( const ClapTrap &t );
        ClapTrap& operator =( const ClapTrap &t );

        std::string getName() const;
		std::string getNameClass() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;
        
		void attack( const std::string &target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

    protected:
        std::string 	_name;
		std::string		_nameClass;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
};

#endif