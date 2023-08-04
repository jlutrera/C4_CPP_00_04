/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedFile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:53 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 14:36:06 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedFile.hpp"

SedFile::~SedFile( void )
{
	_infile.close();
	_outfile.close();
}

SedFile::SedFile(char **argv) : _fin(argv[1]), _fout(_fin + ".replace"), _s1(argv[2]), _s2(argv[3])
{

}

void SedFile::ft_replace( void )
{  
	std::string s;
    std::size_t found;
    std::string ptr;

	_infile.open(_fin.c_str());
	if (_infile.is_open())
	{
    	if (std::getline(_infile, s, '\0'))
		{
			_outfile.open(_fout.c_str());
			if (_outfile.is_open())
			{
		        found = s.find(_s1);
				ptr = "";
		        while (found != std::string::npos)
	    	    {    
					ptr += s.substr( 0, found ) + _s2;
					s.erase( 0, found + _s1.length() );
	            	found = s.find( _s1 );
	        	}
	        	_outfile << ptr + s;
	 		}
			else
				std::cerr << _fout + " cannot be created !" << std::endl;
		}
		else
			std::cerr << _fin + " is an empty file !" << std::endl;
	}
	else
		std::cerr << _fin + " cannot be opened !" << std::endl;
}
