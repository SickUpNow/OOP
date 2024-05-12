#pragma once
#include <string>

#include "Printable.h"

using namespace std;
//classy

class Animal : public Printable {
private:
    string species;
    int age;

public:
    Animal(string s, int a);
    virtual ~Animal() = default;
    
    // getery
    virtual string getSpecies();
    virtual int getAge();
};