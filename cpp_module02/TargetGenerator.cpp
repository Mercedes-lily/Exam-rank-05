# include "TargetGenerator.hpp" 
# include "Dummy.hpp" 
# include "BrickWall.hpp" 

TargetGenerator::TargetGenerator()
{}
TargetGenerator::~TargetGenerator()
{}

void TargetGenerator::learnTargetType(ATarget *target)
{
	/*for(std::vector<ATarget *>::iterator it = this->_targetType.begin(); it != this->_targetType.end(); it++)
	{
		if ((*it)->getType() == target->getType())
			return;
	}*/
	this->_targetType.push_back(target);
}
void TargetGenerator::forgetTargetType(std::string const & targetName)
{
	for(std::vector<ATarget *>::iterator it = this->_targetType.begin(); it != this->_targetType.end(); it++)
	{
		if ((*it)->getType() == targetName)
		{
			//delete (*it);
			this->_targetType.erase (it);
			return;
		}
	}
}


ATarget* TargetGenerator::createTarget(std::string const & targetName)
{
	ATarget *newTarget;
	if(targetName == "Inconspicuous Red-brick Wall")
		newTarget = new BrickWall;
	else if(targetName == "Target Practice Dummy")
		newTarget = new Dummy;
	else
		return(NULL);
	return(newTarget);
}
