#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongDog: public Animal
{
	protected:
		std::string type;

	public:
		WrongDog(void);
		WrongDog(const WrongDog &src);
		~WrongDog(void);
		WrongDog &operator=(const WrongDog &src);
		void makeSound(void);
};

#endif /* ********************************************************** WRONGDOG_H */