#include "Animal.h"
#include <iostream>

Animal::Animal(string s, int a)
{
    this->species = s;
    this->age = a;
}

string Animal::getSpecies()
{
    return this->species;
}

int Animal::getAge()
{
    return this->age;
}
