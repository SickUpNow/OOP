#pragma once
#include "Animal.h"
#include <vector>

using namespace std;
//classy

class Enclosure {
private:
    string name;
    vector<Animal*> animals;

public:
    Enclosure(string n);
    ~Enclosure();
    
    // getery
    Animal* getAnimal(int a);
    int getAnimalCount();
    string getName();
    
    // funkce
    void addAnimal(Animal* a);
    void addAnimal(vector<Animal*> a);
};