/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:42:22 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 10:59:05 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{

}

Harl::~Harl( void )
{
	
}
void Harl::complain(std::string level)
{
    ptrf functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    if (i < 4)
        (this->*functions[i])();	
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!";
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "Cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}
