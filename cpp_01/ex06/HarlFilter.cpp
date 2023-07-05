#include "HarlFilter.hpp"

HarlFilter::HarlFilter( void )
{

}

HarlFilter::~HarlFilter( void )
{

}

void HarlFilter::complainFilter(std::string level)
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:	
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void HarlFilter::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!";
	std::cout << std::endl << std::endl;
}

void HarlFilter::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}

void HarlFilter::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!";
	std::cout << std::endl << std::endl;
}

void HarlFilter::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl << std::endl;
}
