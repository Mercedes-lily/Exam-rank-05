#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include <string>
# include <iostream>
# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();
		virtual ~Polymorph();
		ASpell *clone();

	private:
		Polymorph(const Polymorph & W);
		const Polymorph &operator=(const Polymorph &X);
};

#endif