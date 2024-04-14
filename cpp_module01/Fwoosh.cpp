#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}
Fwoosh::~Fwoosh()
{}
ASpell * Fwoosh::clone()
{
	Fwoosh *newFwoosh = new Fwoosh;
	return(newFwoosh);
}
