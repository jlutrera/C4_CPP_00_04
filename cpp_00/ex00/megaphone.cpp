#include <iostream>

int main( int argc, char **argv )
{
	if (argc == 1)
		std::cout << "* TYPE ARGUMENTS *";
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