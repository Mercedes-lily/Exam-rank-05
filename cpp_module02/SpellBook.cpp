# include "SpellBook.hpp" 
# include "Polymorph.hpp" 
# include "Fwoosh.hpp" 
# include "Fireball.hpp" 

SpellBook::SpellBook()
{}
SpellBook::~SpellBook()
{
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
		delete (*it);
}

void SpellBook::learnSpell(ASpell *spell)
{
	/*for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}*/
	this->_knownSpell.push_back(spell);
}
void SpellBook::forgetSpell(std::string const & spellName)
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

ASpell* SpellBook::createSpell(std::string const & spellName)
{
	ASpell *newSpell;
	if(spellName == "Fwoosh")
		newSpell = new Fwoosh;
	else if(spellName == "Fireball")
		newSpell = new Fireball;
	else if(spellName == "Polymorph")
		newSpell = new Polymorph;
	else
		return(NULL);
	return(newSpell);
}
