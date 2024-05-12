#include "Exposition.h"

Exposition::Exposition(string n)
{
    this->name = n;
    this->enclosures.resize(0);
}

Exposition::~Exposition()
{
    for(auto enclosure : enclosures) {
        delete enclosure;
    }
}

Enclosure *Exposition::getEnclosure(int e)
{
    if(e >= 0 && e < enclosures.size()) {
        return this->enclosures[e];
    }
    return nullptr;
}

int Exposition::getEnclosuresCount()
{
    return this->enclosures.size();
}

string Exposition::getName()
{
    return this->name;
}

void Exposition::addEnclosure(string n)
{
    Enclosure* newEnclosure = new Enclosure(n);
    enclosures.push_back(newEnclosure);
}

void Exposition::removeEnclosure(int e)
{
    if(e >= 0 && e < enclosures.size()) {
        delete enclosures[e];
        enclosures.erase(enclosures.begin() + e);
    }
}
