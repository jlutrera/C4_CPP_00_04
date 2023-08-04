/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:38:41 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/24 12:08:27 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{

	public:
		Zombie( std::string name );
		Zombie();
		~Zombie();
		void announce() const;

	private:
		std::string	_name;
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif