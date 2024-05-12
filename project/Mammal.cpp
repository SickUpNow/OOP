#include "Mammal.h"
#include <iostream>

Mammal::Mammal(std::string s, int a, int sp) : Animal(s,a)
{
    this->speed = sp;
}

Mammal::~Mammal()
{
}

int Mammal::getSpeed()
{
    return this->speed;
}

string Mammal::printInfo()
{
    return this->getSpecies() + " má " + to_string(this->getAge()) + " let.";
}

string Mammal::printSpecific1()
{
    return this->getSpecies() + " dosahuje rychlosti " + to_string(this->speed) + " km/h.";
}

string Mammal::printSpecific2()
{
    return this->getSpecies() + " popošel někam jinam.";
}
