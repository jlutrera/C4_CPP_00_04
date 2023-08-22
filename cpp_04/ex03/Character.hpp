/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:11 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:11 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#  define CHARACTER_HPP

#  include <iostream>
#  include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		~Character();
		Character(std::string ch);
		std::string const & getName();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:

};

#endif