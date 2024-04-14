#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <string>
# include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
	std::string _type;
	public:
		ATarget(const std::string &T);
		virtual ~ATarget();
		const std::string &getType() const;
		virtual ATarget *clone() = 0;
		void getHitBySpell(const ASpell& spell) const;
	
	private:
		ATarget(){};
		ATarget(const ATarget & W){(void)W;};
		const ATarget &operator=(const ATarget &X)
		{
			(void) X;
			return *this;
		};
};

#endif
