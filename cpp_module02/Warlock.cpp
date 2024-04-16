# include "Warlock.hpp" 
# include "SpellBook.hpp" 

Warlock::Warlock(const std::string &N, const std::string &T) : _name(N), _title(T)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
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
	this->_book.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellName)
{
	this->_book.forgetSpell(spellName);
}
void Warlock::launchSpell(std::string spellName, const ATarget &target)
{
	this->_book.createSpell(spellName);
	this->_book.launchSpell(spellName, target);
}
