# include "Warlock.hpp" 

Warlock::Warlock(const std::string &N, const std::string &T) : _name(N), _title(T)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
		delete (*it);
}
const std::string &Warlock::getName() const
{
	return(this->_name);
}
const std::string &Warlock::getTitle() const
{
	return(this->_title);
}
void Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name;
	std::cout << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	for(std::vector<ASpell *>::iterator it = this->_knownSpell.begin(); it != this->_knownSpell.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	this->_knownSpell.push_back(spell);
}
void Warlock::forgetSpell(std::string spellName)
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
void Warlock::launchSpell(std::string spellName, const ATarget &target)
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
