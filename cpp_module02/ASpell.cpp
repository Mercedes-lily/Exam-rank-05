# include "ASpell.hpp"


ASpell::ASpell(const std::string &N, const std::string &E) : _name(N), _effects(E)
{}
ASpell::~ASpell()
{}
const std::string &ASpell::getName() const
{
	return(this->_name);
}
const std::string &ASpell::getEffects()const
{
	return(this->_effects);
}

void ASpell::launch(const ATarget& target)
{
	target.getHitBySpell(*this);
}
