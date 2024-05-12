#include "Bird.h"
#include <iostream>

Bird::Bird(std::string s, int a, int m) : Animal(s,a)
{
    this->maxHeight = m;
}

Bird::~Bird()
{
}

int Bird::getHeight()
{
    return this->maxHeight;
}

string Bird::printInfo()
{
    return this->getSpecies() + " má " + to_string(this->getAge()) + " let.";
}

string Bird::printSpecific1()
{
    return this->getSpecies() + " dosahuje maximální výšky " + to_string(this->maxHeight) + " m.";
}

string Bird::printSpecific2()
{
    return this->getSpecies() + " letěl někam jinam.";
}
