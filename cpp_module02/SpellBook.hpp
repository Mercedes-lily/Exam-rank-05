#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <string> 
# include <iostream> 
# include "ASpell.hpp"
# include <vector>

class SpellBook
{
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spellName);
		ASpell* createSpell(std::string const &spellName);
		void launchSpell(std::string spellName, const ATarget &target);

	private:
		std::vector<ASpell *> _knownSpell;
		SpellBook(const SpellBook & W);
		const SpellBook &operator=(const SpellBook &X);
};

#endif
