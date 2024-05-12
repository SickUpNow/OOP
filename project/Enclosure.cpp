#include "Worker.h"
#include "Enclosure.h"

Enclosure::Enclosure(string n)
{
    this->name = n;
    //this->animals.resize(0);
}

Enclosure::~Enclosure()
{
    for(auto& animal : animals) {
        delete animal;
    }
}

Animal *Enclosure::getAnimal(int a)
{
    if(a >= 0 && a < animals.size()) {
        return this->animals[a];
    }
    return nullptr;
}

int Enclosure::getAnimalCount()
{
    return this->animals.size();
}

string Enclosure::getName()
{
    return this->name;
}

void Enclosure::addAnimal(Animal *a)
{
    this->animals.push_back(a);
}

void Enclosure::addAnimal(vector<Animal*> a)
{
    for(int i = 0; i < a.size();i++) {
        this->animals.push_back(a[i]);
    }
}
