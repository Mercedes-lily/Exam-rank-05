# include "Warlock.hpp" 

SpellBook::Warlock(const std::string &N, const std::string &T) : _name(N), _title(T)
{}
SpellBook::~Warlock()
{
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
		delete (*it);
}

void SpellBook::learnSpell(ASpell *spell)
{
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	this->_knownSpell.push_back(spell);
}
void SpellBook::forgetSpell(std::string spellName)
{
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete (*it);
			this->_knownSpell.erase (it);
			return;
		}
	}
}
void SpellBook::launchSpell(std::string spellName, const ATarget &target)
{
	for(std::vector<ASpell *>::const_iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return;
		}	
	}
}

ASpell* SpellBook::createSpell(string const & spellName)
{

}
