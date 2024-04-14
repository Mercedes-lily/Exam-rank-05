#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include <string> 
# include <iostream> 
# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		virtual ~BrickWall();
		ATarget *clone();
	private:
		BrickWall(const BrickWall & W);
		const BrickWall &operator=(const BrickWall &X)
		{
			(void) X;
			return *this;
		};
	
};

#endif