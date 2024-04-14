#ifndef DUMMY_HPP
# define DUMMY_HPP
# include <string> 
# include <iostream> 
# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();
		ATarget *clone();
	private:
		Dummy(const Dummy & W);
		const Dummy &operator=(const Dummy &X)
		{
			(void) X;
			return *this;
		};
	
};

#endif