/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:44 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 14:34:08 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedFile.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
    {
		std::cout << "Error: Bad arguments number." << std::endl;
		return 1;
	}
	SedFile f(argv);
	f.ft_replace();
	return 0;
}