#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &src);
		void attack(const std::string &target);
		void guardGate(void);

	private:

};

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** ScavTRAP_H */