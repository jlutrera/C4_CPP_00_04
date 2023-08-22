/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:32:03 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:32:03 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called." << std::endl;
	_ideas[0] = "my first idea";
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain : Overload operator = called." << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

std::string Brain::getBrain() const
{
	return _ideas[0];
}