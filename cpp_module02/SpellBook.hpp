#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <string> 
# include <iostream> 

class SpellBook
{
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(string const & spellName);
		ASpell* createSpell(string const &spellName);
		void aunchSpell(std::string spellName, const ATarget &target);

	private:
		std::vector<ASpell *> _knownSpell;
		SpellBook(const SpellBook & W);
		const SpellBook &operator=(const SpellBook &X);
};

#endif
