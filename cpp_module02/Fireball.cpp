#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}
Fireball::~Fireball()
{}
ASpell * Fireball::clone()
{
	Fireball *newFireball = new Fireball;
	return(newFireball);
}
