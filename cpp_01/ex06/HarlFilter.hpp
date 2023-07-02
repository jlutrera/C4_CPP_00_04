#ifndef HARLFILTER_HPP
#  define HARLFILTER_HPP

#  include <iostream>

class HarlFilter{
	public:
		HarlFilter();
		~HarlFilter();	
		void complainFilter( std::string level );
		
	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif