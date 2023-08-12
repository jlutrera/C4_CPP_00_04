#ifndef DIAMONDTRAP_HPP
#  define DIAMONDTRAP_HPP

#  include "ScavTrap.hpp"
#  include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		~DiamondTrap();
		
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& rhs);

		using ScavTrap::attack;
		void whoAmI( void );

	private:
		std::string	_name;
};

#endif