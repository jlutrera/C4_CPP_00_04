/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:35:05 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:35:08 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int argc, char **argv )
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int c = 1; c < argc; ++c)
		{
			int i = -1;
			while (argv[c][++i])
				std::cout << (char)toupper( argv[c][i] );
			if (c != argc - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (0);
}