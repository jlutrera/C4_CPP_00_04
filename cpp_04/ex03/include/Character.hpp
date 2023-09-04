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

#  include "../interface/ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		~Character();
		Character(std::string ch);
		Character(const Character & hrs);
		Character & operator=(const Character & hrs);
	
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void printEquipment();

	private:
		AMateria*	_slots[4];
		bool		_equiped[4];
		std::string	_name;
};

#endif