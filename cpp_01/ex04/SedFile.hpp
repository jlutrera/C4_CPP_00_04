/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedFile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:42:14 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 14:27:05 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDFILE_HPP
# define SEDFILE_HPP

# include <iostream>
# include <fstream>
# include <string>

class SedFile{
	public:
		~SedFile();
		SedFile(char **argv);
		void ft_replace();
	private:
		std::ifstream _infile;
 		std::ofstream _outfile;
		std::string _fin;
		std::string _fout;
		std::string _s1;
		std::string _s2;
};

#endif
