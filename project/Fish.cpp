#include "Fish.h"
#include <iostream>

Fish::Fish(std::string s, int a, int m) : Animal(s,a)
{
    this->maxDepth = m;
}

Fish::~Fish()
{
}

int Fish::getDepth()
{
    return this->maxDepth;
}

string Fish::printInfo()
{
    return this->getSpecies() + " má " + to_string(this->getAge()) + " let.";
}

string Fish::printSpecific1()
{
    return this->getSpecies() + " ponořuje se maximální hloubky " + to_string(this->maxDepth) + " m.";
}

string Fish::printSpecific2()
{
    return this->getSpecies() + " plaval někam jinam.";
}