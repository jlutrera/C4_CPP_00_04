/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:33 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:41:34 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#  define WEAPON_HPP

#  include <iostream>

class Weapon{
    public:
        Weapon();
		Weapon(std::string s);
        ~Weapon();
        std::string& getType();
        void setType(std::string new_s);
    private:
        std::string _type;
};

#endif