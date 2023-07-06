/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:58 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:40:59 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#  define HUMANB_HPP

#  include "Weapon.hpp"

class HumanB{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB( std::string name);
		HumanB();
		~HumanB();
		void setWeapon(Weapon& w);
		void attack();
};

#endif