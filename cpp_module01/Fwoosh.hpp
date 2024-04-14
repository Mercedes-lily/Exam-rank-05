#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include <string>
# include <iostream>
# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();
		ASpell *clone();

	private:
		Fwoosh(const Fwoosh & W);
		const Fwoosh &operator=(const Fwoosh &X);
};

#endif