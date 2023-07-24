/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:45 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/24 12:09:20 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#  define HUMANA_HPP

#  include "Weapon.hpp"

class HumanA{

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA();
		void attack() const;

	private:
		std::string _name;
		Weapon& _weapon;
};

#endif