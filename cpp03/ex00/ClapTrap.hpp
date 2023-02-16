#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _name;
		int			_hp;
		int			_energy;
		int			_damage;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const & rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif