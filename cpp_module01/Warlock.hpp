#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <string> 
# include <iostream> 
# include <vector> 
# include "ASpell.hpp"

class Warlock
{
	public:
		Warlock(const std::string &N, const std::string &T);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string &spellName);
		void launchSpell(const std::string &spellName, const ATarget &target) const;
	private:
		std::string _name;
		std::string _title;
		std::vector<ASpell *> _knownSpell;
		Warlock(){};
		Warlock(const Warlock & W){(void)W;};
		const Warlock &operator=(const Warlock &X)
		{
			(void) X;
			return *this;
		};
};

#endif