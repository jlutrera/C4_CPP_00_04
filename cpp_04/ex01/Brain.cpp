/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:40 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:46:53 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*_ideas = *(other._ideas);
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain : Overload operator = called." << std::endl;
	if (this != &other)
		*_ideas = *(other._ideas);
	return *this;
}

std::string Brain::getBrain(int i) const
{
	return _ideas[i];
}

void  Brain::setBrain(int i, std::string str)
{
	_ideas[i] = str;
}
