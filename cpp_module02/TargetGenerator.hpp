#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <string> 
# include <iostream> 
# include <vector> 
# include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator();
		virtual ~TargetGenerator();
		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & targetName);
		ATarget* createTarget(std::string const &targetName);

	private:
		std::vector<ATarget *> _targetType;
		TargetGenerator(const TargetGenerator & W);
		const TargetGenerator &operator=(const TargetGenerator &X);
};

#endif
