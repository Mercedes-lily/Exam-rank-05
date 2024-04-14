#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{}
BrickWall::~BrickWall()
{}

ATarget * BrickWall::clone()
{
	ATarget *newBrickWall= new BrickWall;
	return(newBrickWall);
}