/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:32:08 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:32:08 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#  define BRAIN_HPP

#  include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);

		std::string getBrain() const;

	protected:
		std::string _ideas[100];
};

#endif