#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}
Dummy::~Dummy()
{}

ATarget * Dummy::clone()
{
	ATarget *newDummy= new Dummy;
	return(newDummy);
}