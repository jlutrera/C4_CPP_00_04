#include "HarlFilter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		HarlFilter h;
		h.complainFilter(argv[1]);
	}
	return 0;
}