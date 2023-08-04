/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:14 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 13:52:36 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
  	bob.attack();
	  club.setType("some other type of club");
    bob.attack();

    Weapon club2 = Weapon("crude spiked club");

    HumanB jim;
    jim.setWeapon(club2);
    jim.attack();

  return 0;
}