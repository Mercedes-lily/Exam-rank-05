#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <string>
# include <iostream>
# include "ATarget.hpp"


class ATarget;

class ASpell
{
	protected:
	std::string _name;
	std::string _effects;
	public:
		ASpell(const std::string &N, const std::string &E);
		virtual ~ASpell();
		const std::string &getName() const;
		const std::string &getEffects()const;
		virtual ASpell *clone() = 0;
		void launch(const ATarget& target);

	private:
		ASpell(){};
		ASpell(const ASpell & W){(void)W;};
		const ASpell &operator=(const ASpell &X)
		{
			(void) X;
			return *this;
		};
};

#endif
