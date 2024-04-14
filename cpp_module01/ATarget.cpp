#include "ATarget.hpp"

ATarget::ATarget(const std::string &T)
{}

ATarget::~ATarget()

{}

const std::string & ATarget::getType() const
{
	return(this->_type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->_type << " has been ";
	std::cout << spell.getEffects() << "!";
}
