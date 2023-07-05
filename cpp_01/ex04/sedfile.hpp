#ifndef SEDFILE_HPP
# define SEDFILE_HPP

# include <iostream>
# include <fstream>
# include <string>

class SedFile{
	public:
		SedFile();
		~SedFile();
		SedFile(char **argv);
		std::ifstream infile;
 		std::ofstream outfile;
		int openFiles();
		void closeFiles();
		void replace();
	private:
		std::string _fin;
		std::string _fout;
		std::string _s1;
		std::string _s2;
};

#endif
