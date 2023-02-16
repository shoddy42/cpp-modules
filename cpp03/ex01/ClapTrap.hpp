#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hp;
		int			_energy;
		int			_damage;

	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

std::ostream &operator<<(std::ostream &stream, ClapTrap const &i);

#endif