#include "sedfile.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        return std::cout << "Error: Bad arguments number." << std::endl, 1;
	SedFile f(argv);
    if (f.openFiles())
		return std::cerr << "File error." << std::endl, 1;
	f.replace();
    f.closeFiles();
    return 0;
}