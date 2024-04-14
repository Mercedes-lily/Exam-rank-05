#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include <string>
# include <iostream>
# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		virtual ~Fireball();
		ASpell *clone();

	private:
		Fireball(const Fireball & W);
		const Fireball &operator=(const Fireball &X);
};

#endif